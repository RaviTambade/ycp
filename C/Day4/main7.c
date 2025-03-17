# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void addStudent() {
    FILE *file = fopen("students.dat", "ab");  // Open in binary append mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    struct Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Student Name: ");
    scanf(" %[^\n]%*c", s.name);  // Read full line including spaces
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, file);  // Write student to file
    printf("Student added successfully.\n");

    fclose(file);
}

void readStudents() {
    FILE *file = fopen("students.dat", "rb");  // Open in binary read mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    struct Student s;
    printf("\nStudent Records:\n");
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("ID: %d\n", s.id);
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(file);
}


void updateStudent() {
    FILE *file = fopen("students.dat", "r+b");  // Open in binary read-write mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int id_to_update;
    printf("Enter Student ID to update: ");
    scanf("%d", &id_to_update);

    struct Student s;
    int found = 0;

    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        if (s.id == id_to_update) {
            found = 1;
            printf("Enter new name: ");
            scanf(" %[^\n]%*c", s.name);  // Read full name including spaces
            printf("Enter new marks: ");
            scanf("%f", &s.marks);

            // Move file pointer back to the start of the current student record
            fseek(file, -sizeof(struct Student), SEEK_CUR);

            // Update the student record
            fwrite(&s, sizeof(struct Student), 1, file);
            printf("Student record updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Student ID not found.\n");
    }

    fclose(file);
}

void deleteStudent() {
    FILE *file = fopen("students.dat", "rb");  // Open in binary read mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    FILE *temp_file = fopen("temp.dat", "wb");  // Open temporary file for writing
    if (temp_file == NULL) {
        printf("Error opening temporary file.\n");
        fclose(file);
        return;
    }

    int id_to_delete;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id_to_delete);

    struct Student s;
    int found = 0;

    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        if (s.id != id_to_delete) {
            fwrite(&s, sizeof(struct Student), 1, temp_file);  // Copy record to temp file
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp_file);

    if (found) {
        remove("students.dat");  // Delete original file
        rename("temp.dat", "students.dat");  // Rename temp file to original file name
        printf("Student record deleted successfully.\n");
    } else {
        printf("Student ID not found.\n");
    }
}


int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                readStudents();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}


//Command to compile and run: 
//g++ -I c main7.c -o main7.exe
//.\main7.exe

//Output:
//Menu:
//1. Add Student
//2. View Students
//3. Update Student
//4. Delete Student
//5. Exit

//Enter your choice: 1
//Enter Student ID: 1
//Enter Student Name: John Doe
//Enter Marks: 85
//Student added successfully.


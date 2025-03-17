### File I/O in C Programming with CRUD Operations on a Student Structure

In this section, we will discuss how to perform **File I/O** (Input/Output) operations in C and implement **CRUD (Create, Read, Update, Delete)** operations using **File I/O** on a `Student` structure. This can be useful for applications like student record management.

### **1. Basics of File I/O in C**

In C, we use the standard library functions to interact with files. The basic steps involved are:

- **Opening a file** using `fopen()`.
- **Reading and writing** to a file using functions like `fread()`, `fwrite()`, `fprintf()`, and `fscanf()`.
- **Closing the file** using `fclose()`.

### **2. File Operations**

- `fopen(filename, mode)`: Opens a file.
  - Modes:
    - `"r"`: Read
    - `"w"`: Write (creates a new file or truncates an existing file)
    - `"a"`: Append
    - `"rb"`, `"wb"`: Binary read/write

- `fclose(file)`: Closes the file.

- `fprintf()`: Writes formatted data to a file.
- `fscanf()`: Reads formatted data from a file.
- `fread()`: Reads binary data from a file.
- `fwrite()`: Writes binary data to a file.

### **3. Student Structure Definition**

```c
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};
```

### **4. CRUD Operations Using File I/O**

We will implement the following operations for CRUD on the `Student` structure:

- **Create**: Add a new student record to the file.
- **Read**: Display all student records from the file.
- **Update**: Update a student's record in the file.
- **Delete**: Remove a student's record from the file.

#### **1. Create Operation (Add Student Record)**

To add a student record, we will append the data to the file.

```c
void add_student() {
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
```

#### **2. Read Operation (Display Student Records)**

This operation reads all student records from the file and displays them.

```c
void read_students() {
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
```

#### **3. Update Operation (Modify Student Record)**

To update a student's record, we read all the records into memory, modify the required record, and write everything back into the file.

```c
void update_student() {
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
```

#### **4. Delete Operation (Remove Student Record)**

To delete a student record, we again read all records, omit the one to be deleted, and then write the remaining records back into the file.

```c
void delete_student() {
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
```

### **Main Program for Menu-Driven CRUD Operations**

```c
#include <stdio.h>
#include <stdlib.h>

// Function declarations
void add_student();
void read_students();
void update_student();
void delete_student();

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
                add_student();
                break;
            case 2:
                read_students();
                break;
            case 3:
                update_student();
                break;
            case 4:
                delete_student();
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
```

### **Explanation:**

1. **Add Student** (`add_student`): Collects student details from the user and appends them to the `students.dat` file using `fwrite()`.
   
2. **View Students** (`read_students`): Displays all students' details from the file using `fread()`. It reads each record and prints it.

3. **Update Student** (`update_student`): Reads all records, searches for the specified student by ID, updates their details, and writes the updated record back into the file.

4. **Delete Student** (`delete_student`): Reads all records and copies them to a temporary file, excluding the record to be deleted. After that, the original file is deleted, and the temporary file is renamed to the original file name.

### **Conclusion:**
This program provides a basic **File I/O** based CRUD operation for student records. It uses binary files to store student information and supports creating, reading, updating, and deleting records. The program is menu-driven and offers a simple interface for managing student data.
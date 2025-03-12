//Console Menu Driven Student Information management system

#include <stdio.h>
#define MAX 50
#define SIZE 3

struct Student{
    char name[50];
    int age;
    float marks;
};
 
struct Student students[SIZE];  //array of 10 students

//CRUD operations
void acceptAll(){
    for(int i = 0; i < SIZE-1; i++){
        printf("Enter details of student %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
}

void showAll(){
    printf("\n All Student Details \n");
    for(int i = 0; i <SIZE-1; i++){
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

void show(int index){
    printf("\n Student Details\n");
    printf("Name: %s\n", students[index].name);
    printf("Age: %d\n", students[index].age);
    printf("Marks: %.2f\n\n", students[index].marks);
}

void update(int index){
    printf("\n Update Existing  %d th Student Details\n", index+1);
    printf("Enter new name: ");
    scanf("%s", students[index].name);
    printf("Enter new age: ");
    scanf("%d", &students[index].age);
    printf("Enter new marks: ");
    scanf("%f", &students[index].marks);
}

int main() {
    int choice;
    while (1) {
        printf("\nStudent Information Management System\n");
        printf("=======================================\n");
        printf("1. Add New Student\n");
        printf("2. View All Students\n");
        printf("3. Update Student Information\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: acceptAll(); break;
            case 2: showAll(); break;
            case 3: update(2); break;
            case 4: delete(1); break;
            case 5: return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
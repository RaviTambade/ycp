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

void remove(int index){
    printf("\n Delete Existing  %d th Student Details\n", index+1);
    students[index].age = 0;
    students[index].marks = 0;
    students[index].name[0] = '\0'; //null character to indicate empty string
}

int main() {

    int result=765;
    int marks=89;
    int *ptrResult=&result;
    printf("Value of result: %d\n", result);
    printf("Value of *ptrResult: %d\n", *ptrResult);

    printf("Value of ptrResult: %d\n", ptrResult);
    printf("Address of result: %p\n", &result);

    char ch='C';

    char *ptrCh=&ch;
    printf("Value of ch: %c\n", ch);
    printf("Value of *ptrCh: %c\n", *ptrCh);
    printf("Value of ptrCh: %d\n", ptrCh);

    void * ptr=NULL;
    ptr=&result;  //implicit typcasting
    printf("\n Value of *ptr: %d\n", *(int *)ptr);

    ptr=&ch;  //implicit typcasting
    printf("\n Value of *ptr: %c\n", *(char *)ptr);

    int * ptrNewPointer=(int *)ptr;
    printf("\n Value of *ptrNewPointer: %c\n", *ptrNewPointer);
}
//header files including
#include <stdio.h>

//macro definition
#define MAX 50

//type declartion
struct Student{
    char name[MAX];
    int age;
    float marks;
};


//global variable
struct Student s1; //single student
struct Student students[10];  //array of 10 students






void acceptInput(){
    //UI logic :accpting input from user
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

}

void displayOutput(){
    //UI logic: displaying output to user
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);
}

int main(){
   
    acceptInput();
    displayOutput();
    return 0;
}
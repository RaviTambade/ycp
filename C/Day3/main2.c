//header files including
#include <stdio.h>

//macro definition
#define MAX 50
#define SIZE 3

//type declartion
struct Student{
    char name[MAX];
    int age;
    float marks;
};


//global variable
 
struct Student students[SIZE];  //array of 10 students



void acceptInput(){

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

void displayOutput(){
    for(int i = 0; i <SIZE-1; i++){
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main(){
    acceptInput();
    displayOutput();
    return 0;
}
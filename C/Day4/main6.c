
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50
#define SIZE 3

struct Student{
    char name[50];
    int age;
    float marks;
    char contactNumber[10];
    char email[50];
    char address[200];
};
 
struct Student students[SIZE]; //array of 10 students


//avoid name mangling
//means the name of the function will not be changed
// by the compiler


//function overloading 
//Method overloading is a feature that allows 
// to have more than one method having the same name, 
//if their argument lists are different. 

void show(int count){

    //in pass by value, the actual value is not changed
    count++;
    printf("\n All Student Details \n");
}


void show(char *ptrName){
    //in pass by address, the actual value is changed
    int marks=87;
    if(marks>90){
        printf("Excellent");
    }else if(marks>80){
        printf("Very Good");
    }else if(marks>70){
        printf("Good");
    }else if(marks>60){
        printf("Average");
    }else{
        printf("Poor");
    }
    strcpy(ptrName,"Neeraj Sharma");
}

//pass by value
void acceptStudentInformationByValue(struct Student student){
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter age: ");
    scanf("%d", &student.age);
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    printf("Enter contact number: ");   
    scanf("%s", student.contactNumber);
    printf("Enter email: ");
    scanf("%s", student.email);
    printf("Enter address: ");
    scanf("%s", student.address);
}

//pass by address

void  acceptStudentInformationByAddress(struct Student *ptrStudent){
    printf("Enter name: ");
    scanf("%s", ptrStudent->name);
    printf("Enter age: ");
    scanf("%d", &ptrStudent->age);
    printf("Enter marks: ");
    scanf("%f", &ptrStudent->marks);
    printf("Enter contact number: ");   
    scanf("%s", ptrStudent->contactNumber);
    printf("Enter email: ");
    scanf("%s", ptrStudent->email);
    printf("Enter address: ");
    scanf("%s", ptrStudent->address);
}


int main(){
    int currentCount=56;
    show(currentCount);
    printf("Current Count: %d\n", currentCount);

    char name[150]="Ravi Tambade";
    show(name);
    printf("Name: %s\n", name);

   /* struct Student std1;
    struct Student *ptrStudent=NULL;
    ptrStudent=(struct Student *)malloc(sizeof(struct Student));
    acceptStudentInformationByValue(std1);
    acceptStudentInformationByAddress(ptrStudent);
    */
    return 0;
}
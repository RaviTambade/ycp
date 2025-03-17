#include <stdio.h>
#include <string.h>
//macros
#define PI 4.56
#define OFF 0
#define ON 1

//Global Variables
//data type  variable_name;
int count=86;

//code segment
//entry point function

//inbuilt data type
//int,float,char,double,void
//
//user defined data types in C
//1. Structure
//2. Union
//3. Enum
//4. Typedef
//5. Pointer
//6. Array

 struct Student{
    int rollno;
    char name[20];
    float marks;
};





int main(){
    printf("Welcome to Programming");  //output
    count=count+1;  //processing :logic
    printf("Count is %d",count);//output
    char ch='A'; //variable declaration
    double area=PI*3*3; //processing :logic calculation
    printf("Area of Circle is %f",area);
    double circumference=2*PI*3; //processing :logic
    printf("Circumference of Circle is %f",circumference);


    printf("\n*********************************************\n");
    struct Student s1,s2;
    s1.rollno=101;
    s1.marks=78.9;
    strcpy(s1.name,"Ravi");
    printf("Rollno is %d",s1.rollno);
    printf("Name is %s",s1.name);
    printf("Marks is %f",s1.marks);
    s2.rollno=102;
    s2.marks=88.9;
    strcpy(s2.name,"Sanika");
    //data variable 

    //deep copy
    int result=56;
    int marks=result; //variable data is getting copied
    printf("Result is %d",result);
    printf("Marks is %d",marks);
    result++;
    printf("Result is %d",result);
    printf("Marks is %d",marks);


    //shallow Copy

    int score=156;
    int * ptrResult=&score;
    int * ptrResult1=&score;
    score++;
    printf("\n Score is %d",score);
    printf("\n Score is %d",*ptrResult);
    printf("\n Score is %d",*ptrResult1);
    ;

    //pointer  address printing
    printf("\nAddress of Score is %u",&score);
    printf("\nAddress of Score is %u",ptrResult);
    printf("\nAddress of Score is %u",ptrResult1);
    ptrResult1++;
    printf("\n Address of Score is %u",ptrResult);
    printf("\n Address of Score is %u",ptrResult1);

    //pointer arithmetic
    printf("\n***************After pointer arithmatic operation******************\n");
    printf("\n Score is %d",score);
    printf("\n Score is %d",*ptrResult);
    printf("\n Score is %d",*ptrResult1);
    //pointer variable
   /* int * ptrInt= malloc(sizeof(int));
    float * ptrFloat=malloc(sizeof(float));
    char * ptrCharacter=malloc(sizeof(char));
    malloc(sizeof(double));
    malloc(sizeof(struct Student));
    */

    if(ptrResult1 !=NULL){
        free(ptrResult1);
        ptrResult1=NULL;
    }
    return 0;
}
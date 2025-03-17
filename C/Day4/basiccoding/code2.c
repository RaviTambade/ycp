/*1. Write a C program to calculate area of a rectangle:
b. Using inputs supplied by the user.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int length, breadth,area ;
    printf("\nenter value of length ");
    scanf("%d",&length);
    printf("\nenter value breadth :");
    scanf("%d",&breadth);

    area = length*breadth;
    printf("\nArea of rectanglr : %d", area);
    return 0;
}

/*4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/
#include<stdio.h>
int main(){
    int principle , years;
    float rateofinterest, interest;

    printf("enter your principle amount : ");
    scanf("%d",&principle);
    printf("enter your time period (in years) : ");
    scanf("%d",&years);
    printf("enter your rate of interest : ");
    scanf("%f",&rateofinterest);

    interest= principle* years * rateofinterest/100;

    printf("interest : %f", interest);
    return 0 ;

}

/*3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/
#include<stdio.h>
float Fahrenheit(float temp);
float Fahrenheit(float temp){
    float fahrenheit;
    fahrenheit=(temp*(9/5))+32;
    return fahrenheit;
}
int main(float temp){
    printf("enter temperature in degree celcius");
    scanf("%f",&temp);
    float result=Fahrenheit(temp);
    printf("your temperature in fahrenheit= %f", result);
}

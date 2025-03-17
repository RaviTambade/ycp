#include <iostream>
//macros
#define PI 4.56
#define OFF 0
#define ON 1

using namespace std;
//Global Variables
//data type  variable_name;
int count=86;

//code segment
//entry point function
int main(){
     cout<<"Welcome to Programming";  //output
    count=count+1;  //processing :logic
     cout<<"Count is"<<count;//output
    char ch='A'; //variable declaration
    double area=PI*3*3; //processing :logic calculation
     cout<<"Area of Circle is "<<area;
    double circumference=2*PI*3; //processing :logic
     cout<<"Circumference of Circle is  "<<circumference;
}
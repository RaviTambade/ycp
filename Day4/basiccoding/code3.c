/*2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height*/
#include<stdio.h>
#include<math.h>
void AreaofCircle();
void VolumeofSphere();

void AreaofCircle()
{
    float radius, Area;
    printf("\nenter radius of circle :");
    scanf("%f",&radius);
    Area = radius *3.14 ;
    printf("\nArea : %f ", Area);
    return 0;
}

void VolumeofSphere(){
    float radius , volume ;
    printf("\nenter radius of sphere : ");
    scanf("%f",&radius);

    volume= 4*3.14*pow(radius,3)/3;

    printf("\nvolume of sphere :%f ", volume);

}
int main()
{
    AreaofCircle();
    VolumeofSphere();
    return 0;
}

#include<stdio.h>
#define PI 3.14
float vol_of_sphere(float r);
int main()
{
    float r;
    printf("Enter the radius of sphere\t");
    scanf("%f",&r);
    float volume=vol_of_sphere(r);
    printf("Volume of sphere is %.3f",volume);
    return 0;
}
float vol_of_sphere(float r1)
{
float vol=1.33*PI*r1*r1*r1;
return vol;
}

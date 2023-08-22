#include<stdio.h>
int main()
{
int a,surface,volume;
long int area;
printf("enter the side of the cube");
scanf("%d",&a);
area= 6*a*a;
volume=a*a*a;
printf("the surface area of the cube is %ld\n",area);
printf("the volume of cube is %d\n",volume);
return 0;
}

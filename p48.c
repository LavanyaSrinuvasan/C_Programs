#include<stdio.h>
int main()
{
int r,a;
int d;
float area;
printf("enter the side of the square");
scanf("%d",&a);
printf("enter the diameter of the circle");
scanf("%d",&d);
area=3.14*(d/2)*(d/2);
a==d? printf("area of circle is %f",area):printf("the circle does not fit square");
}

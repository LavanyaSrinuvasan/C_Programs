#include<stdio.h>
int main()
{
float length,breadth;
double area,per;
printf("enter length");
scanf("%f",&length);
printf("enter breadth");
scanf("%f",&breadth);
area=length*breadth;
per=2*(length+breadth);
printf("Area of rectangle is %lf",area);
printf("Perimeter of rectangle is %lf",per);
return 0;
}

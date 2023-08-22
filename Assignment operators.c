#include<stdio.h>
int main()
{
int option;
float a,b;
printf("choose 1. addition 2. subtraction 3.multiplication 4. division\t");
scanf("%d",&option);
printf("enter the first number");
scanf("%f",&a);
printf("enter the second number");
scanf("%f",&b);
switch(option)
{
case 1:
a+=b;
printf("Addition result is %f",a);
break;

case 2:
a-=b;
printf("Subtraction result is %f",a);
break;

case 3:
a*=b;
printf("Multiplication result is %f",a);
break;

case 4:
a/=b;
printf("Division result is %f",a);
break;
}
return 0;
}

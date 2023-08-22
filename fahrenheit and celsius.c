#include<stdio.h>
int main()
{
int option;
float cel,far,temp;
printf("choose 1. c to f or 2. f to c\t");
scanf("%d",&option);
switch(option)
{
case 1:
printf("enter the celsius value\t");
scanf("%f",&cel);
temp=(cel*9/5)+32;
printf("temperature in Fahrenheit %f",temp);
break;

case 2:
printf("enter the fahrenheit value\t");
scanf("%f",&far);
temp=(far-32)*5/9;
printf("temperature in celsius %f",temp);
break;
}
return 0;
}

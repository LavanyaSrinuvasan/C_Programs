#include<stdio.h>
int mul(int num1,float num2);
int main()
{
    int num1;
    float num2;
    printf("Enter the integer number 1\t");
    scanf("%d",&num1);
    printf("Enter the float number 2\t");
    scanf("%f",&num2);
    float result=mul(num1,num2);
    printf("The multiplied result is %f\t",result);
}
int mul(int a, float b)
{
    float res=a*b;
    return res;
}

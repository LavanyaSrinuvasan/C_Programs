#include<stdio.h>
int add(float num1,float num2);
int sub(float num1,float num2);
int mult(float num1,float num2);
int div(float num1,float num2);

int main()
{
    float num1,num2;
    printf("Enter the number 1 for basic operations");
    scanf("%f",&num1);
    printf("Enter the number 2 for basic operations");
    scanf("%f",&num2);
    float result=add(num1,num2);
    printf("The added result is %.2f\n",result);
    float result1=sub(num1,num2);
    printf("The subtracted result is %.2f\n",result1);
    float result2=mult(num1,num2);
    printf("The multiplied result is %.2f\n",result2);
    float result3=div(num1,num2);
    printf("The divided result is %.2f\n",result3);
}
int add(float a,float b)
{
    float res=a+b;
    return res;
}
int sub(float a,float b)
{
    float res1=a-b;
    return res1;
}
int mult(float a,float b)
{
    float res2=a*b;
    return res2;
}
int div(float a,float b)
{
    float res3=a/b;
    return res3;
}



#include<stdio.h>
float print_add(float num1,float num2);

int main()
{
    int num1,num2;
    printf("Enter a value 1\t");
    scanf("%d",&num1);
    printf("Enter a value 2\t");
    scanf("%d",&num2);
    int result=print_add(num1,num2);

}
float print_add(float a, float b)
{
    printf("The added value is %f",a+b);
}


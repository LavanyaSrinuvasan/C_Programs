#include<stdio.h>
int print_name(int num1, int num2);

int main()
{
    int num1,num2;
    printf("Enter a value 1\t");
    scanf("%d",&num1);
    printf("Enter a value 2\t");
    scanf("%d",&num2);
    int result=print_add(num1,num2);


}
int print_add(int a, int b)
{
    printf("The added value is %d",a+b);
}


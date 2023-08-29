#include<stdio.h>
int print();
int main()
{
    printf("The value is %d",print());
}
int print()
{
    int a,b;
    printf("Enter a value");
    scanf("%d",&a);
    printf("Enter a value");
    scanf("%d",&b);
    int result=a*b;
    return result;
}

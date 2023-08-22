#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the integer value of a");//5
    scanf("%d",&a);
    printf("the increment value b is");//3
    scanf("%d",&b);
    printf("the decrement value c is");//2
    scanf("%d",&c);
    a+=b;//a=a+b//5+3=8
    a-=c;//a=a-b//8-2=6
    printf("the final value is %d",a);//6
    return 0;
}

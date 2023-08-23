#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the a side of triangle");
    scanf("%d",&a);
    printf("Enter the b side of triangle");
    scanf("%d",&b);
    printf("Enter the c side of triangle");
    scanf("%d",&c);
    if((a==b)&&(b==c)&&(a==c))
    {
        printf("It is an equilateral triangle");
    }
    else if (((a==b)&&(b!=c)&&(a!=c))|| ((b==c)&&(b!=a)&&(c!=a))|| ((a==c)&&(a!=b)&&(c!=b)))
    {
        printf("It is an isosceles triangle");
    }

    else
    {
        printf("It is a scalar triangle");
    }
    return 0;
}

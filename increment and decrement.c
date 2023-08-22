#include<stdio.h>
int main()
{
    int a,dec1,inc1;
    printf("Enter the input integer value");
    scanf("%d",&a);
    if (a>10)// using if to print increment and decrement value separately
    {
        inc1=++a;
        printf("the incremented value is %d",inc1);
    }
    else
    {
        dec1=--a;
        printf("the decremented value is %d",dec1);
    }
    return 0;
}

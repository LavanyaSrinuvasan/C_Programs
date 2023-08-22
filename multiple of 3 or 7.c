#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%7==0 && a%3==0)
    {
        printf("The number is multiple of both 3 and 7");
    }

    else if(a%7==0)
    {
        printf("The number is multiple of 7");
    }
    else if(a%3==0)
    {
        printf("The number is multiple of 3");
    }
    else
    {
        printf("The number is neither multiple of 7 nor 3");
    }
    return 0;
}

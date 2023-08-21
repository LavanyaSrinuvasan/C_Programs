#include<stdio.h>
int main()
{
    int num=5;
    char letter='A';
    float ifloat=7.6;
    char name[]="Lavanya";
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a==1)
    {
        printf("%d",num);
    }
    else if(a==2)
    {
        printf("%f",ifloat);
    }
    else if(a==3)
    {
        printf("%s",name);
    }
    else
    {
        printf("%c",letter);
    }
    return 0;
}

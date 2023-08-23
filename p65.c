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
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a))
    {
    printf("The triangle can be formed");
    }
    else
    {
    printf("The triangle can't be formed");
    }
    return 0;
}

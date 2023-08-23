#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st number");
    scanf("%d",&a);
    printf("Enter the 2nd number");
    scanf("%d",&b);
    printf("Enter the 3rd number");
    scanf("%d",&c);

    if((a>b)&&(a>c))
    {
        printf("a %d is great",a);
    }
    else if ((b>c)&&(b>a))
    {
        printf("b %d is great",b);
    }
    else
    {
        printf("c %d is great",c);
    }
    return 0;
}

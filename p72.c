#include<stdio.h>
int main()
{
    int num;
    int a,b;
    float result;
    printf("Enter the case for calculator\t");
    scanf("%d",&num);
    printf("Enter value of a\t");
    scanf("%d",&a);
    printf("Enter the value of b\t");
    scanf("%d",&b);

    switch(num)
    {
    case 1:
        result=a+b;
        printf("The calculated output is %f",result);
        break;
    case 2:
        result=a-b;
        printf("The calculated output is %f",result);
        break;
    case 3:
        result=a/b;
        printf("The calculated output is %f",result);
        break;
    case 4:
        result=a%b;
        printf("The calculated output is %f",result);
        break;
    case 5:
        result=a*b;
        printf("The calculated output is %f",result);
        break;
    default:
        printf("Enter a correct operation");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value \t");
    scanf("%d",&a);
    printf("enter b value \t");
    scanf("%d",&b);
    printf("values of a and b before swap is %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values of a and b after swap is %d %d\n",a,b);
    return 0;
}

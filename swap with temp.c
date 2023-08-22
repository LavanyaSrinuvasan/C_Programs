#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter a value \t");
    scanf("%d",&a);
    printf("enter b value \t");
    scanf("%d",&b);
    printf("values of a and b before swap is %d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("values of a and b after swap is %d %d\n",a,b);
    return 0;
}

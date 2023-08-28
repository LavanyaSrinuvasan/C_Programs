#include<stdio.h>
int main()
{
    int i,n;
    unsigned long fact=1;
    printf("Enter the number for factorial\t");
    scanf("%d",&n);
    if(n<0)
    {
    printf("The number is negative\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
          fact*=i;

        }
    printf("%lu",fact);
    }
    return 0;

}

#include<stdio.h>
int fact(int n1);
int main()
{
int n;
printf("Enter a number for factorial\n");
scanf("%d",&n);
int factorial=fact(n);
printf("The factorial result is %d",factorial);
}
int fact(int n1)
{
    int fact_1=1;
    if(n1>0)
    {
      fact_1=n1*fact(n1-1);

    }
    return fact_1;
}

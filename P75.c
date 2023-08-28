#include<stdio.h>
int main()
{
    int i,n, count,num;
    printf("enter a range till which the prime numbers has to be printed\n");
    scanf("%d",&n);
     printf("The prime nos between range 1 to %d\n",n);
    for(num=1; num<=n; num++)
    {
        count=0;
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
             count++;
             break;
            }
        }

    if(count==0 && num!=1)
    {
        printf("%d\n",num);
    }
    }
    return 0;
}









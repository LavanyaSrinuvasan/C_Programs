#include<stdio.h>
int main()
{
    int t1=0,t2=1,n,i;
    int next_step=t1+t2;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("The first two terms are %d %d\n",t1,t2);
    for(i=3; i<=n; ++i)
    {
    printf("%d\n",next_step);
    t1=t2;
    t2=next_step;
    next_step=t1+t2;
    }
    return 0;
}

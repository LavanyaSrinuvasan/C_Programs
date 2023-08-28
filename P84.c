#include<stdio.h>
int main()
{
    int a,i,n,j,num[30];
    printf("Enter the number\t");
    scanf("%d",&n);
    printf("Enter the numbers to be sorted\t");
    for(i=0; i<n; ++i)
    scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
    if(num[i]>num[j])
    {
    a=num[i];
    num[i]=num[j];
    num[j]=a;
    }
    }
    }
printf("Numbers arranged in ascending order");
for(i=0;i<n;++i)
printf("%d\n",num[i]);
return 0;
}

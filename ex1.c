#include<stdio.h>
int main()
{
    int num,i,j;

    printf("Enter the number of rows for Floyd's triangle");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("1");
        }
    printf("\n");
    }
    return 0;
}

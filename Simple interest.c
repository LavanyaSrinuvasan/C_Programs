#include<stdio.h>
int main()
{
    int prin,num,roi;
    float si;
    printf("enter the principle amount\t");
    scanf("%d",&prin);
    printf("enter the number of years\t");
    scanf("%d",&num);
    printf("enter the rate of interest\t");
    scanf("%d",&roi);
    si=(prin*num*roi)/100;
    printf("Simple interest calculated is %f\t",si);
    return 0;
}

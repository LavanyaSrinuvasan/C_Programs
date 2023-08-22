#include<stdio.h>
int main()
{
    float a;
    int n;
    printf("enter the float value");
    scanf("%f",&a);
    n=(int)(a<0?(a-0.5):(a+0.5));
    printf("round off the float to nearest integer %d",n);
    return 0;
}

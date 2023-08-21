#include<stdio.h>
int main()
{
    float a,b,sum;
    printf("enter floating point number 1 \t");//entered - 5.2
    scanf("%f",&a);
    printf("enter floating point number 2 \t");// entered - 2.5
    scanf("%f",&b);
    sum=a+b;
    printf("the sum of a and b is %.20f",sum);// the sum obtained is 7.69999980926513670000
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    double prin,num,roi;
    double amount,ci;
    printf("enter the principle amount\t");
    scanf("%lf",&prin);
    printf("enter the number of years\t");
    scanf("%lf",&num);
    printf("enter the rate of interest\t");
    scanf("%lf",&roi);
    amount = prin *
                  ((pow((1 + roi / 100),
                    num)));
    ci= amount-prin;
    printf("Compound interest calculated is %lf",ci);
    return 0;
}

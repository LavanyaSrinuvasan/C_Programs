#include<stdio.h>
int main()
{
    int id;
    int units;
    char name[10];
    float amount;
    int base=100;
    printf("Enter the user name\t");
    scanf("%s",&name);
    printf("Enter the customer ID\t");
    scanf("%d",&id);
    printf("Enter the units\t");
    scanf("%d",&units);

    if(units<=199)
    {
        amount=units*1.2;
    }
    else if ((units>=200)&&(units<400))
    {
        amount=(199*1.2)+(units-199)*1.5;
    }

    else if ((units>=400)&&(units<600))
    {
        amount=(199*1.2)+(200*1.5)+(units-399)*1.8;
    }
    else if(units>=600)
    {
        amount=(199*1.2)+(200*1.5)+(200*1.8)+(units-599)*2;
    }
    printf("The Electricity bill is %.2f\n",amount);
    if(amount>=400)
    {
    amount=amount+400;
    printf("The surcharge added bill the customer should pay is %.2f\n",amount);
    }
    else if(amount<=100)
    {
    printf("The base electricity bill the customer should pay is Rs. %d",base);
    }

    return 0;
}

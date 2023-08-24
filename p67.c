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
        amount=units*1.20;
    }
    else if ((units>=200)&&(units<400))
    {
        amount=units*1.50;
    }
    else if ((units>=400)&&(units<600))
    {
        amount=units*1.80;
    }
    else if(units>=600)
    {
        amount=units*2.00;
    }
    printf("The Electricity bill is %.2f\n",amount);
    if(amount>400)
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

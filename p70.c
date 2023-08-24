#include<stdio.h>
int main()
{
long int Nokia;
long int Apple;
long int Samsung;
long int Oppo;
long int vivo;
long int min, max;
Nokia=10000;
Apple=80000;
Samsung=20000;
Oppo=15000;
vivo=25000;
printf("Enter the minimum budget");
scanf("%ld",&min);
printf("Enter the maximum budget");
scanf("%ld",&max);
if((min>=10000)&&(max<15000))
{
  printf("Your phone suggestion is Nokia of price %ld",Nokia);
}
else if((min>=15000)&&(max<20000))
{
  printf("Your phone suggestion is Oppo of price %ld",Oppo);
}
else if((min>=20000)&&(max<25000))
{
  printf("Your phone suggestion is Samsung of price %ld",Samsung);
}
else if((min>=25000)&&(max<30000))
{
  printf("Your phone suggestion is Vivo of price %ld",vivo);
}
else if((min>=30000)&&(max<100000))
{
  printf("Your phone suggestion is Apple of price %ld",Apple);
}
else{
    printf("Enter a budget between 10,000 and 1,00,000 range");
}

return 0;
}

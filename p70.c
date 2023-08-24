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
if((Oppo>=min)&&(Oppo<=max))
{
  printf("Your phone suggestion is Nokia of price %ld\n",Oppo);
}
if((vivo>=min)&&(vivo<=max))
{
  printf("Your phone suggestion is Oppo of price %ld\n",vivo);
}
if((Samsung>=min)&&(Samsung<=max))
{
  printf("Your phone suggestion is Samsung of price %ld\n",Samsung);
}
if((Nokia>=min)&&(Nokia<=max))
{
  printf("Your phone suggestion is Vivo of price %ld\n",Nokia);
}
if((Apple>=min)&&(Apple<=max))
{
  printf("Your phone suggestion is Apple of price %ld\n",Apple);
}

return 0;
}

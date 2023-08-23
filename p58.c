#include<stdio.h>
int main()
{
int year,nlp;
printf("Enter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("The entered year is a leap year\n");
nlp=year+4;
printf("The next leap year after %d is %d",year,nlp);
}
else
{
printf("The entered year is a non-leap year\n");
nlp=year-(year%4)+4;
printf("The next leap year after %d is %d",year,nlp);
}

return 0;
}

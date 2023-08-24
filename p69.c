#include<stdio.h>
int main()
{
int days,weeks,years;
printf("Enter the total number of days");
scanf("%d",&days);
weeks=(days%365)/7;
years=days/365;
days=(days%365)%7;
printf("Number of years %d\n",years);
printf("Number of weeks %d\n",weeks);
printf("Number of days %d\n",days);
return 0;
}


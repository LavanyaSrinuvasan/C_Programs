#include<stdio.h>
int main()
{

double a;
printf("enter 6 decimal float");
scanf("%lf",&a);
printf("6 decimal float entered is %lf\n",a);// original number entered is 1.234567
printf("5 decimal of entered float value is %.5lf\n",a); // 5 decimal round off 1.23457
printf("4 decimal of entered float value is %.4lf\n",a);// 4 decimal round off 1.2346
printf("3 decimal of entered float value is %.3lf\n",a);// 3 decimal round off 1.235
printf("2 decimal of entered float value is %.2lf\n",a);//2 decimal round off 1.23
printf("1 decimal of entered float value is %.1lf\n",a);// 1 decimal round off 1.2
return 0;
}

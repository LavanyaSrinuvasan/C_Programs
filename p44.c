#include<stdio.h>
int main()
{
int a,b;
int c,d,e,f,g,h,i;
printf("Enter integer 1");
scanf("%d",&a);
printf("Enter integer 2");
scanf("%d",&b);
c=a|b;
printf("Result of a|b is %d\n",c);
d=a&b;
printf("Result of a&b is %d\n",d);
e=a^b;
printf("Result of a^b is %d\n",e);
f=a<<b;
printf("Result of a<<b is %d\n",f);
g=a>>b;
printf("Result of a>>b is %d\n",g);
h=~a;
printf("Result of ~a is %d\n",h);
i=~b;
printf("Result of ~b is %d\n",i);
return 0;
}

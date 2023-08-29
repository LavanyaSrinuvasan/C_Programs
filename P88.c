#include<stdio.h>
int sqr(num);
int a;
int main()

{
    int num;
    printf("Enter a number to square");
    scanf("%d",&num);
    int result=sqr(num);
    printf("%d",result);
}
int sqr(int a)
{
  a*=a;
  return a;
}



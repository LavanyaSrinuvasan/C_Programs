#include<stdio.h>
int main()
{
    int a;
    float b;
    a=56;
    b=9.8;
    printf("the original number %d \n",a);
    printf("width adjusted to 6 places  %6d \n",a);
    printf("precision adjusted to .4 and width adjusted to 6 places %6.4f \n",b);
    return 0;
}

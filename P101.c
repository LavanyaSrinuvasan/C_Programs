#include<stdio.h>
int intfn();
float floatfn();
char charfn();
double doublefn();

int main()
{
    intfn();
    floatfn();
    charfn();
    doublefn();
}

int intfn()
{
    float a;
    printf("%d\n",a);
    return a;
}
char charfn()
{
    char b;
    printf("%d\n",b);
    return b;
}
float floatfn()
{
    int f;
    printf("%f\n",f);
    return f;
}
double doublefn()
{
    double d;
    printf("%lf\n",d);
    return d;
}



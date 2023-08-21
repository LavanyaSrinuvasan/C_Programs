#include<stdio.h>
#include<stdbool.h>
int main()
{
    int z;
    bool a=true;
    bool b=false;
    bool c=0;
    bool d=500;
    printf("Enter a value\n");
    scanf("%d",&z);
    if(z>0)
    {
        printf("%d",a);
    }
    else if(z<0)
    {
        printf("%d",b);
    }
    else if(z>100)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int Temp;
    printf("Enter the temperature");
    scanf("%d",&Temp);
    if(Temp<0)
    {
        printf("Freezing weather");
    }
    else if((Temp==0)||(Temp<10))
    {
        printf("Very Cold Weather");
    }
    else if((Temp==10)||(Temp<20))
    {
        printf("Cold Weather");
    }
    else if((Temp==20)||(Temp<30))
    {
        printf("Normal temp");
    }
    else if((Temp==30)||(Temp<40))
    {
        printf("it's hot");
    }
    else
    {
        printf("its very hot");
    }
    return 0;
}

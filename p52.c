#include <stdio.h>

int main() {
    int a;
    printf("enter number");
    scanf("%d",&a);
    int absValue = a;
    a<0? printf("absolute value is %d",-absValue):printf("absolute value is %d",absValue);
    return 0;
    }

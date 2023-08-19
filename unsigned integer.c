#include<stdio.h>
int main()
{
    unsigned int a;
    a= -245678;
    printf("unsigned integer is %u \n",a); // 4294721618
    printf("unsigned integer is %d \n",a);//-245678
    printf("unsigned integer is %i \n",a); //-245678
    printf("unsigned integer is %lu \n",a); // 4294721618
    printf("unsigned integer is %f \n",a); // 0.000000
    printf("unsigned integer is %lf \n",a); // 0.000000
    printf("unsigned integer is %ld \n",a);
    return 0;
}

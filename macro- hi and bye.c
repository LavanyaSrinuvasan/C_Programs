#include<stdio.h>
#define a
#ifdef a
    #define msg "hi"
#else
    #define msg "bye"
#endif

int main()
{
printf("%s",msg);
return 0;
}

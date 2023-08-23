#include<stdio.h>
int main()
{
    char up,low;
    printf("Enter the uppercase letter \t\n");
    scanf(" %c",&up);
    printf("Enter the lowercase letter \t\n");
    scanf(" %c",&low);
    if(up==low-32)
    {
        printf("Both uppercase %c and lowercase %c are equal",up,low);
    }

    else
    {
        printf("Both uppercase %c and lowercase %c are not equal",up,low);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character\t");
    scanf(" %c",&c);
    if ((c>='a')&&(c<='z'))
    {
        printf("The character is an alphabet");
    }
    else if((c>='0')&&(c<='9'))
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is a special character");
    }
    return 0;
}

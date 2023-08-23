#include<stdio.h>
int main()
{
    char char_1;
    printf("Enter the character \t");
    scanf("%c",&char_1);
    if ((char_1=='a')||(char_1=='e')||(char_1=='i')||(char_1=='o')||(char_1=='u')||
        (char_1=='A')||(char_1=='E')||(char_1=='I')||(char_1=='O')||(char_1=='U'))
    {
    printf("Entered character is a vowel");
    }
    else
    {
    printf("Entered character is a consonant");
    }
    return 0;
    }

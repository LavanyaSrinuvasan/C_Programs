#include<stdio.h>
int main()
{
char char_1[50];
printf("Enter a string\n");
scanf("%s",&char_1);
int length=strlen(char_1);
printf("The rightmost character is %c",char_1[length-1]);
return 0;
}

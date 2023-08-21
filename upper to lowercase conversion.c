#include<stdio.h>
int main()
{
char uppercase,lowercase;
printf("enter the uppercase alphabet");
scanf("%c",&uppercase);
lowercase=uppercase+32;//lowercase=uppercase+32 as difference between both in ASCII is 32 and uppercase=lowercase-32
printf("the lowercase of %c is %c",uppercase,lowercase);
return 0;
}

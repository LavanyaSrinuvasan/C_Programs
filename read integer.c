#include <stdio.h>
 int main()
 {
    int iInt;
    char iCharacter;
    float iFloat;
    long int ilongint;
    unsigned long int iunlongint;
    printf("\n Integer entered is \n");
    scanf("%d",&iInt);
    printf("\n Character entered is \n");
    scanf("%c",&iCharacter);
    printf("\n Float entered is \n");
    scanf("%f",&iFloat);
    printf("\n long integer entered is \n");
    scanf("%ld",&ilongint);
    printf("\n unsigned long integer entered is \n");
    scanf("%lu",&iunlongint);

    printf("Integer,character,float,long integer, unsigned long integer entered in, %d %c %f %ld lu",iInt,iCharacter,iFloat,ilongint,iunlongint);
    return 0;
}

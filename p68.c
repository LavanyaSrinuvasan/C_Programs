#include<stdio.h>
int main()
{
    int day;
    printf("Enter values between 1&7 to get day of the week\t");
    scanf("%d",&day);
switch(day)
    {
    case 1:
        printf("The day of the week is Sunday");
        break;
    case 2:
        printf("The day of the week is Monday");
        break;
    case 3:
        printf("The day of the week is Tuesday");
        break;
    case 4:
        printf("The day of the week is Wednesday");
        break;
    case 5:
        printf("The day of the week is Thursday");
        break;
    case 6:
        printf("The day of the week is Friday");
        break;
    case 7:
        printf("The day of the week is Saturday");
        break;
    }
    return 0;
}

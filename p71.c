#include<stdio.h>
int main()
{
    int a,ia;
    printf("Enter the number of sides for the polygon");
    scanf("%d",&a);
    ia=(a-2)*180;
    printf("The sum of interior angles %d",ia);
    return 0;
}

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinate points  x and y\t\n");
    scanf("%d %d",&x,&y);
    if ((x>0)&&(y>0))
    {
        printf("The coordinate points lie on the 1st quadrant");
    }
    else if ((x<0)&&(y>0))
    {
        printf("The coordinate points lie on the 2nd quadrant");
    }
    else if ((x<0)&&(y<0))
    {
        printf("The coordinate points lie on the 3rd quadrant");
    }
    else if ((x>0)&&(y<0))
    {
        printf("The coordinate points lie on the 4th quadrant");
    }
    else
    {
        printf("The point is origin");
    }
    return 0;
}

#include<stdio.h>
int one_array(int b[])
{
    //int val=one_array(a, size);
    for(int i=0; i<4; i++)
    {
        printf("elements in an 1 D array is %d \n",b[i]);
    }

}
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
int two_array(int b2[][3])
{
    //int val=one_array(a, size);
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("elements in an 2 D array is %d \n",b2[i][j]);
        }
    }
}
/////////////////////////////////////////////////////////////////
int main()
{
    int a[4],a2[3][3];
    printf("Enter the elements of 1D array\n");
    for(int i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the number of elements for 2D array\n");
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

        one_array(a);
        printf("\n\n\n");
        two_array(a2);
        return 0;

}

/////////////////////////////////////////////




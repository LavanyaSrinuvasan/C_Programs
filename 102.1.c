#include<stdio.h>
int dup(int a[10],int arr_ele);
int main()
{
    int a[10],i,j;
    int arr_ele;
    printf("The elements of array are\t");
    scanf("%d",&arr_ele);
    for(i=0; i<arr_ele; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int elements=dup(a,arr_ele);
    printf("Total number of repeating elements are %d",elements);
}
    int dup(int a[10],int arr_ele)

    {
        int count=0;
        for(int i=0; i<arr_ele; i++)
        {
        for(int j=i+1;j<arr_ele;j++)
        {
        if(a[i]==a[j])
        {
         count++;
         break;
        }
        }
        }
    return count;
    }

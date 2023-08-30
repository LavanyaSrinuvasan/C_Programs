#include<stdio.h>
int big(int a[10],int arr_ele);
int main()
{
    int a[10],arr_ele,i,j;
    printf("Enter the number of elements\t");
    scanf("%d",&arr_ele);
    for(i=0; i<arr_ele; i++)
    {
    printf("a[%d]",i);
    scanf("%d",&a[i]);
    }
    int ret=big(a,arr_ele);
    printf("The second biggest element of array is %d",ret);
}
int big(int a[10],int arr_ele)
{
    int max1=a[0];
    int max2=a[0];
    for(int i=0; i<arr_ele; i++)
    {
            if(a[i]>max1)
            {
             max2=max1;
             max1=a[i];
            }
            else if(a[i]>max2 && a[i]<max1)
            {
                a[i]=max2;
            }
    }
return max2;
}

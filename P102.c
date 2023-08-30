#include<stdio.h>
float average(float a[100],int arr_ele);

int main()
{
    float a[100];
    int arr_ele,i;
    printf("The elements of array are");
    scanf("%d",&arr_ele);
    for(i=0; i<arr_ele; i++)
    {
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }
    float result=average(a,arr_ele);
    printf("Average is %.2f",result);
}

    float average(float a[10],int arr_ele)
    {
    float sum=0.0;int i;
    for(i=0; i<arr_ele; i++)
        {
            sum+=a[i];
        }
    return (sum)/(arr_ele);
    }

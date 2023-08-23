#include<stdio.h>
int main()
{
    float math,english,science,kannada,history;
    float avg,total;
    float passed=0,failed=0;
    printf("Enter the math marks\t");
    scanf("%f",&math);
    printf("Enter the English marks\t");
    scanf("%f",&english);
    printf("Enter the Science marks\t");
    scanf("%f",&science);
    printf("Enter the Kannada marks\t");
    scanf("%f",&kannada);
    printf("Enter the History marks\t");
    scanf("%f",&history);
    total=math+english+science+kannada+history;
    avg=total/5;
    if (math>=35)
    {
        passed++;
    }
    else{
        failed++;
    }
    if (science>=35)
    {
        passed++;
    }
    else{
        failed++;
    }
    if (kannada>=35)
    {
        passed++;
    }
    else{
        failed++;
    }
    if (english>=35)
    {
        passed++;
    }
    else{
        failed++;
    }
    if (history>=35)
    {
        passed++;
    }
    else{
        failed++;
    }
    printf("Total number of passed subjects %f\n",passed);
    printf("Total number of failed subjects %f\n",failed);
    printf("the total marks of student is %f\n",total);
    printf("the average marks of student is %f\n",avg);
    if (avg>90)
    {
        printf("Distinction");
    }
    else if(avg>60)
    {
        printf("First class");
    }
    else if(avg>=35)
    {
        printf("Second class");
    }
    else
    {
        printf("Fail");
    }
return 0;
}

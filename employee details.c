#include<stdio.h>
int main()
{
    char employee_ID[10];
    int hours;
    double salary;
    double salperhr;
    printf(" Enter employee's ID\n", employee_ID);
    scanf("%s",&employee_ID);
    printf(" Enter number of hours worked\n", hours);
    scanf("%d",&hours);
    printf(" Enter salary per hour\n", salperhr);
    scanf("%lf",&salperhr);
    salary=hours*salperhr;
    printf("Salary %.2lf\n",salary);
    printf("Employee ID %s",employee_ID);
return 0;
}

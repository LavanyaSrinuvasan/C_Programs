#include<stdio.h>
int print_name(name_1);

int main()
{
    char name[10];
    printf("Enter a string\t");
    scanf("%s",&name);
    print_name(name);
    return 0;


}
int print_name(name_1)
{
    printf("Hello %s ",name_1);
}



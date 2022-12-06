#include <stdio.h>

int main()
{
    int bs,ds_all,rent_all,gross_salary;
    printf("Enter Ramesh's Basic Salary \n");
    scanf("%d",&bs);
    ds_all=40*bs/100;
    rent_all=20*bs/100;
    gross_salary=bs+ds_all+rent_all;
    printf("Gross Salary is :%d",gross_salary);
    return 0;
}

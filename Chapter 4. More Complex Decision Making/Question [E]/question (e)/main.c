#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal;
    scanf("%f",&sal);
    ((sal>=25000&&sal<=40000)?printf("Manager"):((sal>=15000&&sal<=25000)?printf("Accountant"):printf("Clerk")));
    // note here is no bound so any figure greater than 40000 will also give you Clerk as Output
    return 0;
}

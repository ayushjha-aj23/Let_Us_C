#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i=1;
    unsigned long int a_power_b=1;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);

    while(i<=b)
    {
        a_power_b=a_power_b*a;
        i++;
    }

    printf("A raised to the power of B is %lu \n",a_power_b);
    return 0;
}

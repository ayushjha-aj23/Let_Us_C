#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,pop_current=100000,pop=0;
    for(i=1;i<=10;i++)
    {
        pop=pop_current/pow(1+0.1,i);
        printf("Population in %d year is %d\n",i,pop);
    }
    printf("Population 10 years from now is %d\n",pop);
    return 0;
}

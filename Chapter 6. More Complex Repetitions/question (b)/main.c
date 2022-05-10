#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j;
    float sum=0.0,fact=1.0;

    while(i<=7)
    {
        for(j=1;j<=i;j++)
            fact=fact*j;

        sum=sum+(i/fact);
        i++;
    }
    printf("Sum of the series is %f",sum);
    return 0;
}

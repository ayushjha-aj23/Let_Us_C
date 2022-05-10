#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,i;
    float sum=0.0;

    printf("Enter the value of X");
    scanf("%d",&x);
    for(i=1;i<=7;i++)
    {
        if(i==1)
            sum=sum+pow(((x-1.0)/x),i);
        else
            sum=sum+pow(((x-1)/x),i)*(1/2);
    }
    printf("Sum of the given Series is %f",sum);
    return 0;
}

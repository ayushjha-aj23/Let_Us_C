#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;
    unsigned long long int fact=1;

    printf("Enter any number less than or equal to 20 for its factorial \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %llu \n",num,fact);
    return 0;
}

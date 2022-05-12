#include <stdio.h>
#include <stdlib.h>

int power (int a,int b);

int main()
{
    int num1,num2,pow;
    printf("Enter a number and its power raised \n");
    scanf("%d%d",&num1,&num2);
    pow=power(num1,num2);
    printf("Number %d raised to the power of %d is %d\n",num1,num2,pow);
    return 0;
}

int power(int a,int b)
{
    int i,power_fun=1;
    for (i=1;i<=b;i++)
    {
        power_fun=power_fun*a;
    }
    return power_fun;
}

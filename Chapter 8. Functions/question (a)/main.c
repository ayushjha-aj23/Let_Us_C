#include <stdio.h>
#include <stdlib.h>

int factorial (int);

int main()
{
    int num,fac;
    printf("Enter a number for its Factorial\n");
    scanf("%d",&num);
    fac=factorial(num);
    printf("Factorial of %d is %d\n",num,fac);
    return 0;
}

int factorial(int n)
{
    int i,fac_fun=1;
    for (i=1;i<=n;i++)
    {
        fac_fun=fac_fun*i;
    }
    return fac_fun;
}

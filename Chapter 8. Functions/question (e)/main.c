#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime_factor(int);

int main()
{
    int num;
    printf("Enter a Number for its Prime Factors");
    scanf("%d",&num);

    prime_factor(num);
    return 0;
}

int prime_factor(int n)
{
    int i;
    for (i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
            {
                printf("%d\n",i);
                n=n/i;
            }
    }
    if(n!=1)
        printf("%d",n);
    return 0;
}


/* //Code for Finding the Prime Number//
int prime(int n)
{
    int c=0,i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==1)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;

}*/





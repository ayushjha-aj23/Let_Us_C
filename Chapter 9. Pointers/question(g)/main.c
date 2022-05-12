#include <stdio.h>
#include <stdlib.h>

int fun(int,int);

int main()
{
    int a,b;

    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    fun(a,b);
    return 0;
}

int fun(int a,int b)
{
    int rem,m,n;

    while(1)
    {
        rem=a/b;
        m=a-rem*b;

        if(m==0)
            break;


        a=b;
        b=m;
        n=m;
    }
     printf("Greatest Common Divisor is %d ",n);
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

int sum(int);
int sum2(int);

int main()
{
    int n,result=0,result2=0;
    printf("Enter a 5 digit number\n");
    scanf("%d",&n);
    result=sum(n);
    result2=sum2(n);
    printf("Sum 1 is %d\n",result);
    printf("Sum 2 is %d\n",result2);
    return 0;
}

int sum(int n)
{
    int sum=0,r=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    //printf("Sum is %d\n",sum);
    return sum;
}

int sum2(int n)
{
    if(n==0)
        return 0;
    else
    {
       return(n%10+sum2(n/10));
       //printf("Sum is %d",sum);
    }
    //printf("Sum %d\n",sum);
    return 0;
}

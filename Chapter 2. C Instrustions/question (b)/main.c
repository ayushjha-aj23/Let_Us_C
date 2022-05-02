#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,num;
    int rev=0;
    printf("Enter a five digit no. \n");
    scanf("%d",&n);
    if(n>9999 && n<100000)
    {
        while(n!=0)
        {
            num=n%10;
            rev=rev*10+num;
            n=n/10;
        }
        printf("Reverse of entered five digit no. is %d \n",rev);
    }
    else
    {
        printf("No. is not a five digit no. \n");
    }
    return 0;
}

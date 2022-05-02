#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r=0, num;
    int sum=0;
    printf("Enter a five digit no. \n");
    scanf("%d",&num);
    if(num>9999 && num<100000)
    {
        while(num!=0)
        {
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        printf("Sum of entered five digit no. is %d \n",sum);
    }
    else
    {
        printf("No. is not a five digit no. \n");
    }
    return 0;
}

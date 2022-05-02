#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,temp,rev=0;

    printf("Enter a Five Digit Number\n");
    scanf("%d",&n);

    num=n;

    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(num==rev)
        printf("Entered Five Digit Number %d is Equal to its Reverse %d\n",num,rev);
    else
        printf("Entered Five Digit Number %d is Not Equal to its Reverse %d\n",num,rev);
    return 0;
}

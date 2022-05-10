#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;

    printf("Enter a number\n");
    scanf("%d",&num);

    printf("\nThe Multiplication Table of %d is as follows -:\n",num);

    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}

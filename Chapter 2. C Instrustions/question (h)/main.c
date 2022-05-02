#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,temp;

    printf("Enter the Values of x and y \n");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("After Swapping x is %d and y is %d",x,y);
    return 0;
}

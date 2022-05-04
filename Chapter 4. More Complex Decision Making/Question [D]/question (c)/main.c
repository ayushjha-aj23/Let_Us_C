#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter the Three Sides of the Triangle");
    scanf("%d%d%d",&a,&b,&c);

    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a))
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
    return 0;
}

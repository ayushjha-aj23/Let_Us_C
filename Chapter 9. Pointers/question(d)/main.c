#include <stdio.h>
#include <stdlib.h>

int fun(int,int,int);

int main()
{
    int x,y,z;

    printf("Enter value of X Circular Shift\n X= ");
    scanf("%d",&x);

    printf("Enter value of Y Circular Shift\n Y=");
    scanf("%d",&y);

    printf("Enter value of Z for Circular Shift\n Z=");
    scanf("%d",&z);

    fun(x,y,z);

    return 0;
}

int fun(int a,int b,int c)
{
    int t;
    t=a;
    a=b;
    b=c;
    c=t;

    printf("Values After Circular Shift are\n X=%d\n Y=%d\n Z=%d",a,b,c);

    return 0;
}

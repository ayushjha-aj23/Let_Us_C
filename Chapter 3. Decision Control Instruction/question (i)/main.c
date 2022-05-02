#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,b,Ar,P;

    printf("Enter The Length and Breadth of a Rectangle\n");
    scanf("%d%d",&l,&b);

    Ar=l*b;
    P=2*(l+b);

    if (Ar>P)
        printf("Ar %d is Greater Than Perimeter %d\n",Ar,P);
    else
        printf("Ar %d is Smaller Than Perimeter %d\n",Ar,P);
    return 0;
}

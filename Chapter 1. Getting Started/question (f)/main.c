#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[9],l=1189,b=841;
    int i;
    for(i=0;i<=8;i++)
    {
        printf("Dimensions of A[%d] is as follows-:\n",i);
        printf("Length=%d and Breadth=%d\n",l,b);
        l=b;
        b=b/2;
    }
    return 0;
}

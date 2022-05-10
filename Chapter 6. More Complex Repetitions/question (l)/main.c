#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,sp=26;
    int num=1;
    for(i=1;i<=4;i++)
    {
        for(k=1;k<=sp;k++)
        {
            printf(" ");
        }
        sp=sp-2;
        for(j=1;j<=i;j++)
        {

            printf("%d",num++);
            printf("\t");
        }
        printf("\n");

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A1,A2,A3;

    printf("Enter The Three Angles of The Triangle...\n");
    scanf("%d%d%d",&A1,&A2,&A3);

    if(A1+A2+A3==180)
        printf("Triangle is Valid...");
    else
        printf("Triangle is Invalid...");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,absolute;

    printf("Enter a Number...");
    scanf("%d",&n);

    absolute=abs(n);
    printf("Absolute Value of Entered Number is %d",absolute);
    return 0;
}

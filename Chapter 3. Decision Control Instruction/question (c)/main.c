#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Year;

    printf("Enter a year\n");
    scanf("%d",&Year);

    if (Year%4==0)
        printf("Entered Year is Leap Year");
    else
        printf("Entered Year is Not a Leap Year");
    return 0;
}

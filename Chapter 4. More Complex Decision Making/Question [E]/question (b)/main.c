#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    scanf("%d",&year);
    ((year%4==0)?printf("Leap Year"):printf("Not a Leap Year"));
    return 0;
}

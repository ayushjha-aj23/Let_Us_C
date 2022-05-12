#include <stdio.h>
#include <stdlib.h>

int find_leap_or_not(int);

int main()
{
    int year;
    printf("Enter a Year to Test whether a Leap Year or Not\n");
    scanf("%d",&year);

    find_leap_or_not(year);

    return 0;
}

int find_leap_or_not(int a)
{
    if (a%4==0)
        printf("Entered Year is a Leap Year\n");
    else
        printf("Entered Year is not a Leap Year\n");
    return 0;
}

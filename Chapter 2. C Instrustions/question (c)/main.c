#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,s;
    float area;
    printf("Enter the First Side of Triangle");
    scanf("%d",&a);
    printf("Enter the Second Side of Triangle");
    scanf("%d",&b);
    printf("Enter the Third Side of Triangle");
    scanf("%d",&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area is %f",area);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y;
    float r,theta;
    printf("Enter x co-ordinate of a point...");
    scanf("%d",&x);
    printf("Enter y co-ordinate of a point...");
    scanf("%d",&y);

    r=sqrt((x*x)+(y*y));
    theta=atan2(y,x);

    printf("r is %f and theta is %f",r,theta);
    return 0;
}

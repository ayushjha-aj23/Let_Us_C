#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double angle,sum;
    scanf("%lf",&angle);
    sum=(asin(angle)*asin(angle))+(acos(angle)*(acos(angle)));
    printf("%lf",&sum);
    return 0;
}

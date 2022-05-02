#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,vel;
    float wcf;

    printf("Enter Time and Velocity \n");
    scanf("%d%d",&t,&vel);

    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(vel,0.16);

    printf("Wind Chill Factor is %f",wcf);
    return 0;
}

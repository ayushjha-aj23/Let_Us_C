#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour;
    for(hour=0;hour<=23;hour++)
    {
        if(hour==12)
            printf("Time is %d P.M. Noon\n",hour);
        if(hour==0)
            printf("Time is %d A.M. Midnight\n",hour);
        if(hour<12&&hour!=0)
            printf("Time is %d A.M.\n",hour);
        if(hour>12&&hour<24)
            printf("Time is %d P.M.\n",hour);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int L1,L2,G1,G2;
    float D;

    printf("Enter Latitude of L1 and L2");
    scanf("%d%d",&L1,&L2);

    printf("Enter Longitude of G1 and G2");
    scanf("%d%d",&G1,&G2);

    D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)* cos(G2-G1));

    printf("Distance Between Two Places is %f",D);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dis;
    printf("input the distance between two cities in KMs. \n");
    scanf("%d",&dis);
    printf("distance in meter is %d \n",dis*1000);
    printf("distance in feet is %f \n",dis*3280.84);
    printf("distance in inches is %f \n",dis*39370.079);
    printf("distance in centimeter is %d \n",dis*100000);
    return 0;
}

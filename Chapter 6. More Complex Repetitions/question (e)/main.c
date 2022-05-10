#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,y;
    float x;

    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x+=0.5)
        {
            i=2+(y+0.5*x);
            printf("%.2f  %.2f = %.2f\n",y,x,i);
        }
        printf("\n");
    }
    return 0;
}

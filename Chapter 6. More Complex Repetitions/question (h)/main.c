#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    for(x=1;x<=30;x++)
    {
        for(y=1;y<=30;y++)
        {
            for(z=1;z<=30;z++)
            {
                if(x*x+y*y==z*z)
                    printf("%d  %d  %d\n",x,y,z);
            }
        }
    }
    return 0;
}

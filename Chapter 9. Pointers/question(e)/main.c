#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fun(int,int,int);

int main()
{
    int a,b,c;
    float area;
    printf("Enter 3 Sides of a Triangle");
    scanf("%d%d%d",&a,&b,&c);

    area=fun(a,b,c);

    printf("Area is %f",area);
    return 0;
}

float fun(int x,int y,int z)
{
    float S;
    float area,temp;

    S=(x+y+z)/2;
    area=S*(S-x)*(S-y)*(S-z);
    temp=sqrt(area);
    printf("Value of S is %f\n",S);
    printf("Area is %f\n",temp);

    return temp;
}

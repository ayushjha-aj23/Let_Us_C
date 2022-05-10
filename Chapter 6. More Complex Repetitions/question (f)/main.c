#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,p,r,n,q;
    int i;

    for(i=1;i<=10;i++)
    {
      printf("Input Principal,Rate,Time,No.of Times");
      scanf("%f%f%f%f",&p,&r,&n,&q);

      a=p+pow((1+r/q),n*q);
      printf("Amount is %.2f\n",a);

    }

    return 0;
}

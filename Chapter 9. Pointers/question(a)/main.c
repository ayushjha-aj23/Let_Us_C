#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun(int*,float*,float*);
int main()
{
    int sum=0;
    float avg=0.0;
    float SD=0.0;


    fun(&sum,&avg,&SD);

    printf("Sum is %d\n",sum);
    printf("Average is %f\n",avg);
    printf("Standard Deviation is %f\n",SD);

    return 0;
}

int fun(int* sum,float* avg,float* SD)
{
    int a,b,c,d,e;
    printf("Enter 5 numbers for its sum,average,and Standard Deviation");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    *sum=a+b+c+d+e;
    *avg=*sum/5.0;
    *SD=sqrt(pow((a-*avg),2)+ pow((b-*avg),2)+ pow((c-*avg),2)+ pow((d-*avg),2)+ pow((e-*avg),2) );

    return 0;
}

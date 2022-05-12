#include <stdio.h>
#include <stdlib.h>

int fun(float* avg,float* per);

int main()
{
    float avg=0.0,per=0.0;

    fun(&avg,&per);

    printf("\tAverage Marks of a Students in 3 Subjects is \n \t %f\n",avg);
    printf("\tPercentage Marks of a Students in 3 Subjects is \n \t %f\n",per);

    return 0;
}

int fun(float* avg,float* per)
{
    int a,b,c;

    printf("Enter the marks of 3 subject of a Student");
    scanf("%d%d%d",&a,&b,&c);

    *avg=(a+b+c)/3.0;
    *per=*avg;

    return 0;
}

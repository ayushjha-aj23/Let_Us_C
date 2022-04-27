#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,m4,m5,agg_marks;
    float per;
    printf("enter the marks obtained by a student out of 100 in five different subjects respectively : \n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    agg_marks= m1+m2+m3+m4+m5;;
    per= agg_marks/5;
    printf("aggregate marks is : %d \n",agg_marks);
    printf("percentage is : %f \n",per);
    return 0;
}

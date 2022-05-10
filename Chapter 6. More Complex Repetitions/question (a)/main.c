#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int num=1,i=2;

    //Checking number which is less than or equal to 300
    while(num<=300)
    {
        //Checking is done is this loop
        while(i<num)
        {
          if(num%i==0)
          {
              break;
          }
          else
          {
             i++;
          }
        }
        if(i==num)
            printf("%d \n",num);
        num++;
    }*/

    int i,j,a=0;
    int c=0,count=0;
    for(i=2;i<=300;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==1)
        {
           printf("%d   %d\n",i,a++);
           count++;
        }
        c=0;
    }
    printf("%d\n",count);

    return 0;
}

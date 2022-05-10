#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int num=1;
    int div;
    int temp,arm=0,rem;

    while(num<=500)
    {
       temp=num;
       while(num!=0)
       {
          rem=num%10;
          arm=arm+(rem*rem*rem);
          div=num/10;
          if(div==0)
          {
              break;
          }
       }*/

       int num,x,y,z;
       for(num=1;num<=500;num++)
       {
           x=num%10;

           y=num%100;
           y=(y-x)/10;

           z=num/100;
           if(num==((x*x*x)+(y*y*y)+(z*z*z)))
           {
              printf("%d is an Armstrong Number \n",num);
           }
       }



    return 0;
}

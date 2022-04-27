#include <stdio.h>
#include <stdlib.h>

int main()
{
   int l,b,radius,area,perimeter,cir;
   printf("enter the length and breadth of a reactangle respectively : \n");
   scanf("%d%d",&l,&b);
   printf("enter the radius of a circle : \n");
   scanf("%d",&radius);
   area=l*b;
   perimeter=2*(l+b);
   cir=(2*22*radius)/7;
   printf("area and perimeter of a reactangle are %d and %d respectively  \n",area,perimeter);
   printf("circumference of a circle is %d  \n",cir);
    return 0;
}

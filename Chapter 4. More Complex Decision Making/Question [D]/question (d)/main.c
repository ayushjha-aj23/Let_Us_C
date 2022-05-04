#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x,y,z;

    printf("Enter the Three Sides of the Triangle \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b&&b==c&&c==a)

     printf("Equilateral Triangle \n");
     else
        if(a==b||b==c||c==a)
            printf("Isosceles Triangle \n");
        else
            if(a!=b&&b!=c&&c!=a)
            printf("Scalene Triangle \n");


    x=(a*a)+(b*b)==(c*c);
    y=(a*a)+(c*c)==(b*b);
    z=(c*c)+(b*b)==(a*a);
    if(x||y||z)
    printf("Right Angled Triangle \n");
    return 0;
}

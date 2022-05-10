#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int num;
    int octal=0,rem;
    int power=0;

    printf("Enter an Integer");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%8;
        num=num/8;

        octal=octal+rem*pow(10,power);
        power++;
    }
    printf("Entered Number in Octal Equivalent is %d",octal);
    return 0;
}

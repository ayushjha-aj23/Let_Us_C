#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c_positive=0,c_negative=0,c_zero=0;
    char choice='y';
    int n;

    while(choice=='y'||choice=='Y')
    {
        printf("Enter any number \n");
        scanf("%d",&n);

        if(n>0)
            c_positive++;
        if(n<0)
            c_negative++;
        if(n==0)
            c_zero++;

        fflush(stdin);

        printf("Do you want to Continue further... \n");
        printf("If yes please type 'Y' or 'y' \n");
        scanf("%c",&choice);
    }
    printf("You entered %d positive numbers \n",c_positive);
    printf("You entered %d negative numbers \n",c_negative);
    printf("You entered %d zero's numbers \n",c_zero);
    return 0;
}

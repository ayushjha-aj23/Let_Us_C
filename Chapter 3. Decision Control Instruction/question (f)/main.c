#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Age_of_Ram,Age_of_Shyam,Age_of_Ajay;

    printf("Enter Age of Ram \n");
    scanf("%d",&Age_of_Ram);

    printf("Enter Age of Shyam \n");
    scanf("%d",&Age_of_Shyam);

    printf("Enter Age of Ajay \n");
    scanf("%d",&Age_of_Ajay);

    if(Age_of_Ram<Age_of_Shyam && Age_of_Ram<Age_of_Ajay)
        printf("Youngest Age is %d of Ram \n",Age_of_Ram);

    if(Age_of_Shyam<Age_of_Ram && Age_of_Shyam<Age_of_Ajay)
        printf("Youngest Age is %d of Shyam \n",Age_of_Shyam);

    if(Age_of_Ajay<Age_of_Shyam && Age_of_Ajay<Age_of_Ram)
        printf("Youngest Age is %d of Ajay \n",Age_of_Ajay);

    return 0;
}

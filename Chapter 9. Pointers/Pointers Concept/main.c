

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2;
    // Gives the Value stored in the variable i
    printf("Value of i=%d\n",i);
    // Gives the Address of variable i using address of operator(&)
    printf("Address of i=%u\n\n",&i);



    // Gives the Value stored at the Address of variable i using indirection operator(*)
    printf("Value at Address &i is =%d\n",*(&i));
    // Gives the Address of Value stored at the Address of variable i
    printf("Address of Value stored at the Address of variable i is =%u\n",&(*(&i)));
    return 0;
}

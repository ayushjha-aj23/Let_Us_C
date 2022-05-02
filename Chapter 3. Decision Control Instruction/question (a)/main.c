#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cp,sp,change_in_Price;

    printf("Enter the Cost Price of the Item...\n");
    scanf("%d",&cp);

    printf("Enter the Selling Price of the Item...\n");
    scanf("%d",&sp);

    if(cp<sp)
    {
        change_in_Price=sp-cp;
        printf("Seller Made a Profit of %d Rupees\n",change_in_Price);
    }
    else
    {
        change_in_Price=cp-sp;
        printf("Seller has Incurred a Loss of %d Rupees\n",change_in_Price);
    }

    return 0;
}

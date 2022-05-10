#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,small,large=0,range=0;
    int num_in_list;

    printf("How many numbers you want in your List \n");
    scanf("%d",&num_in_list);

    if(num_in_list==1)
    {
        printf("Range is Zero \n");
    }
    else
    {
        for(i=0;i<num_in_list;i++)
        {
            printf("Enter a number \n");
            scanf("%d",&n);
            if(n>large)
                large=n;
            if(n<small)
                small=n;
        }
        if(small<0)
            range=small+large;
        else
            range=large-small;
        if(range<0)
            range=range*(-1);
        printf("The range of Given set of numbers is %d \n",range);
    }
    return 0;
}

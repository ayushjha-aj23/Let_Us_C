#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hardness,tensile_strength;
    float carbon;

    int a=0,b=0,c=0;

    printf("Enter the Values of Hardness,Carbon,Tensile_Strength of the Steel \n");
    scanf("%d%f%d",&hardness,&carbon,&tensile_strength);

    if(hardness>50)
    {
        a=1;
        printf("Condition 1st is met \n");
    }
    if(carbon<0.7)
    {
        b=1;
        printf("Condition 2nd is met \n");
    }
    if(tensile_strength>5600)
    {
        c=1;
        printf("Condition 3rd is met \n");
    }
    if(a&&b&&c)
        printf("Grade 10 \n");
    else
        if(a&&b)
        printf("Grade 9 \n");
        else
            if(b&&c)
            printf("Grade 8 \n");
            else
                if(a&&c)
                printf("Grade 7 \n");
                else
                    if(a||b||c)
                    printf("Grade 6 \n");
                    else
                        printf("Grade 5 \n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight,height;
    float BMI;

    printf("Enter the value of Weight (in Kgs) and Height (in Mts)");
    scanf("%f%f",&weight,&height);

    BMI=weight/(height*height);

    if(BMI<15)
        printf("Starvation");
    else
        if(BMI>=15.1&&BMI<=17.5)
        printf("Anorexic");
        else
            if(BMI>=17.6&&BMI<=18.5)
            printf("Underweight");
            else
                if(BMI>=18.6&&BMI<=24.9)
                printf("Ideal");
                else
                    if(BMI>=25&&BMI<=25.9)
                    printf("Overweight");
                    else
                        if(BMI>=30&&BMI<=30.9)
                        printf("Obese");
                        else
                            if(BMI>=40)
                            printf("Morbidly Obese");
    return 0;
}

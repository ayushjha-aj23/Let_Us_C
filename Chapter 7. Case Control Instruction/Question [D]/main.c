#include <stdio.h>
#include <stdlib.h>

int main()
{
    int class_obtained;
    int subjects_failed;

    printf("Enter the Class Obtained by the Student...\n");
    scanf("%d",&class_obtained);
    printf("Enter the Number of Subjects Student is Failed in... \n");
    scanf("%d",&subjects_failed);

    switch(class_obtained)
    {
        case 1: if(subjects_failed>3)
                   printf("Student does not get any Grace \n");
                else
                    printf("Student gets a Grace of 5 marks per Subject \n");
                break;


         case 2: if(subjects_failed>2)
                   printf("Student does not get any Grace \n");
                else
                    printf("Student gets a Grace of 4 marks per Subject \n");
                break;


        case 3: if(subjects_failed>1)
                   printf("Student does not get any Grace \n");
                else
                    printf("Student gets a Grace of 5 marks \n");
                break;

        default: printf("Please Enter a Valid Choice \n");

    }
    return 0;
}

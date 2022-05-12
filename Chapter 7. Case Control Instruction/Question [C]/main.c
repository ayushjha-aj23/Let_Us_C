#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    // Identifiers used in case 1
    unsigned long long int fact=1;
    int i,n;
    // Identifiers used in case 2
    int j,c2=0;


    // Menu of the Program Starts here
    printf("*****************************************************************************************\n");
    printf("\tThis is a Menu Driven Program \n");
    printf("\tYou can have the Following Choice to do some Computational Work as Follows \n");
    printf("\tChoice 1 - - - > To Find the Factorial of a Number \n");
    printf("\tChoice 2 - - - > To Find the whether the Number is Prime or Not \n");
    printf("\tChoice 3 - - - > To Find the Number is Odd or Even \n");
    printf("\tChoice 4 - - - > To Exit from this Program \n");
    printf("*****************************************************************************************\n");

    while(1)
    {
        printf("Enter your Choice \n");
        scanf("%d",&choice);

        switch(choice)
        {
            // To Find the Factorial of a Number
            case 1: printf("Enter a Number for its Factorial [less than or equal to 20] \n");
                    scanf("%d",&n);

                    if(n<=20)
                    {
                        for(i=1;i<=n;i++)
                        {
                            fact=fact*i;
                        }

                        printf("Factorial of %d is %llu \n",n,fact);
                    }
                    else
                    {
                        printf("Number is Exceeding the Upper Limit \n");
                        printf("Unable to Find the Factorial of %d \n",n);
                        printf("Please Enter a Number in the given Range.... \n");
                    }
                    fact=1;
                    break;

            // To Find the whether the Number is Prime or Not
            case 2: printf("Enter a Number to check whether it is Prime Number or not \n");
                    scanf("%d",&n);

                    if(n==0)
                        printf("Zero is not a Prime Number \n");

                    if(n==1)
                        printf("1 is not a Prime Number \n");

                    if(n>=2)
                    {
                        for(j=2;j<=n/2;++j)
                        {
                            if(n%j==0)
                            {
                                c2=1;
                                break;
                            }
                        }
                        if(c2==0)
                            printf("Prime Number \n");
                        else
                            printf("Not a Prime Number \n");
                    }
                    c2=0;
                    break;

            // To Find the Number is Odd or Even
            case 3: printf("Enter a Number to check whether it is Even or Odd Number \n");
                    scanf("%d",&n);

                    if(n%2==0)
                        printf("Entered Number %d is Even \n",n);
                    else
                        printf("Entered Number %d is Odd \n",n);
                    break;

            // To Exit from this Program
            case 4: exit(0);

            // To exit from the Program
            default: printf("Invalid Choice \n");
                     printf("Please Enter a Valid Choice \n");
        }
    }
    return 0;
}

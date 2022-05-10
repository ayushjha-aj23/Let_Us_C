#include <stdio.h>
#include <stdlib.h>

int main()
{
    int working_hour,no_of_employees=0;
    int over_time;
    while(no_of_employees<10)
    {
       printf("Enter the No. of Working Hours \n");
       scanf("%d",&working_hour);

       if(working_hour<=40)
       {
           printf("No Overtime \n \n");
       }
       else
       {
           over_time=working_hour-40;
           printf("Total Working Hours is %d and Over Time is %d \n",working_hour,over_time);
           printf("Money to be paid for over time is Rupees %d \n \n",over_time*12);
       }
       no_of_employees++;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
int temp_fahrenheit,celsius;
printf("enter the temperature in fahrenheit degree : \n");
scanf("%d",&temp_fahrenheit);
celsius=(temp_fahrenheit-32)*5/9;
printf("temperature in degree celsius is %d",celsius);
    return 0;
}

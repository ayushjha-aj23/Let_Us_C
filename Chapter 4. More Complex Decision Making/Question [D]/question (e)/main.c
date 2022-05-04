#include <stdio.h>
#include <stdlib.h>


int main()
{
    float red,green,blue;
    float white,cyan,margenta,yellow,black,max;
    printf("Enter the Values of Red Green and Blue respectively in RGB format so as to convert it into CMYK format");
    scanf("%f%f%f",&red,&green,&blue);

    if(red==0&&green==0&&blue==0)
    {
        cyan=margenta=yellow=0;
        black=1;
    }
    else
    {
        red=red/255;
        green=green/255;
        blue=blue/255;

        max=red;
        if(blue>max)
            max=blue;
        if(green>max)
            max=green;

        white=max;

        cyan=(max-red)/max;
        margenta=(max-green)/max;
        yellow=(max-blue)/max;
        black=1-max;
    }

    printf("Entered RGB format in CMYK format is \n ");
    printf("Cyan=%f \n Margenta=%f \n Yellow=%f \n Black=%f \n",cyan,margenta,yellow,black);
    return 0;
}

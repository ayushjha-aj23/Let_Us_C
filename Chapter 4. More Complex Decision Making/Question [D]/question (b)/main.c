#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Press any key through Keyboard\n");
    scanf("%c",&ch);

    if(ch>=65&&ch<=90)
        printf("Character entered is Capital Letter from A-Z");
    else
        if(ch>=97&&ch<=122)
        printf("Character entered is Small Letter from a-z");

    if(ch>=48&&ch<=57)
    printf("Character entered is Number b/w 0-9");

    if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
        printf("Character entered is Special Symbol");
    return 0;
}

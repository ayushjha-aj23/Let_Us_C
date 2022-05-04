#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    (ch>=97&&ch<=122?printf("Entered Character is in lower case"):printf("Entered Character is not in lower case"));
    return 0;
}

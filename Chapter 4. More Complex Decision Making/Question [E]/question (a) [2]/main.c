#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=0&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127)?printf("Entered Character is a Special Symbol"):printf("Entered Character is not a Special Symbol"));
    return 0;
}

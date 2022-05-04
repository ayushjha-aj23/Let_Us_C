#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    ((a>b&&a>c)?printf("Max is %d",a):((b>a&&b>c)?printf("Max is %d",b):printf("Max is %d",c)));
    return 0;
}

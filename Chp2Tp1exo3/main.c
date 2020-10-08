+#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float t[10],somme;

    for(i=0;i<10;i++)
    {
        scanf("%f",&t[i]);
    }
    somme=0;
    for(i=0;i<10;i++)
    {
        somme=t[i]+somme;
    }
    printf("%f",somme);
    return 0;
}

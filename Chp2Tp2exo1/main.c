#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t[3][4];
    int i,j,somme=0;

    printf("Entrez des valeurs \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&t[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            somme=t[i][j]+somme;
        }
    }
    printf("somme=%f",somme);

    return 0;
}


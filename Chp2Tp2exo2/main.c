#include <stdio.h>
#include <stdlib.h>

int main()
{
    float[3][4];
    float m[3];
    int i=0,j=0;

    printf("Entrez des valeurs : ");

    for=(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&t[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        m[i]=0;
        for(j=0;j<4;j++)
        {
            m[i]=m[i]+t[i][j];
        }
        m[i]/=4;
        printf("%f\n",m[i]);
    }

    return 0;
}

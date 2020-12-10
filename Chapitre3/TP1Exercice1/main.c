#include <stdio.h>
#include <stdlib.h>

int puissance(int a,int b)
{
    int i,result=1;
    for(i=0;i<b;i++)
    {
        result*=a;
    }

    return result;
}

int main(int argc,int **argv)
{
    int x,y,resultat;

    printf("Entrez deux valeur :");
    scanf("%d%d",&x,&y);
    printf("La valeur de %d puissance %d est %d\n",x,y,puissance(x,y));
    printf("%d",resultat);
    return 0;
}

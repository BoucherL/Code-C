#include <stdio.h>
#include <stdlib.h>

void affiche(int *tab,int nb)
{
    int j;

    for(j=0;j<nb;j++)
    {
        printf("%d",tab[j]);
        printf("\n");
    }
}

int main(int  argc,char**argv)
{
    int tab[100];
    int i=0;

    do
    {
        scanf("%d",&tab[i]);
        if(tab[i]!=-1)
        {
          i++;
        }
    }
    while(tab[i-1]!=-1&&i<100);
    affiche(tab,i);
    return 0;
}

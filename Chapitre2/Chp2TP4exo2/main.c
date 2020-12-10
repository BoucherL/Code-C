#include <stdio.h>                                                                          //boucher louis
#include <stdlib.h>                                                                         //duval kylian
#include <time.h>                                                                           //tri par permutation

int main()
{
int tab[50]; /* tableau donné */
int N=5; /* dimension */
int I; /* rang à partir duquel A est trié */
int J; /* indice courant */
int AIDE; /* permutation */
int FIN; /* dernière permutation. */
int nba;


/* Entrée du tableau */
int Random (int _iMin, int _iMax)
{
return (_iMin + (rand () % (_iMax-_iMin+1)));
}

srand (time (NULL));
for (J=0; J<N; J++)
{

tab[J]=Random (0,100);
}
/* Affichage du tableau */
printf("Tableau donne :\n");
for (J=0; J<N; J++)
    {
    printf("%d ", tab[J]);
    printf("\n");
    }


/* Tri du tableau */
for (I=N-1 ; I>0 ; I=FIN)
{
FIN=0;
for (J=0; J<I; J++)
if (tab[J]>tab[J+1])
{
FIN=J;
AIDE=tab[J];
tab[J]=tab[J+1];
tab[J+1]=AIDE;
}
}

/* résultat */
printf("Tableau trie :\n");
for (J=0; J<N; J++)
{
    printf("%d ", tab[J]);
    printf("\n");

    }
return 0;
}

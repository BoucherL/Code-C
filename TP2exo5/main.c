#include <stdio.h>
#include <stdlib.h>

int main()
{
int choix;
int i,j;

do
{
printf("saisir un chiffre entre 2 et 10 : ");
scanf("%d",&choix);
}while(choix<2 || choix >10);

for(i= 0; i< choix; i++)
{
    printf("Table de %2d ", i+1);

    for(j=0; j< 10; j++)
    {
        printf("|");
        printf("2% x %2d = %3d", i+1,j+1, (i+1)*(j+1));
    }
    printf("\n");
}
    return 0;
}

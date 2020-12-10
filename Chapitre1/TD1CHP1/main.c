#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prix;
    float facture;
    int quantite;
    printf ("entrez votre prix : ");
    scanf ("%f",&prix);
    printf ("entrez votre quantite : ");
    scanf ("%d",&quantite);
    facture = prix * quantite;
    if(facture> 500);
    {
        facture = facture- 10.0/100.0 * facture;
    }
    printf ("la facture est de : %f euros",facture);
    return 0;
}

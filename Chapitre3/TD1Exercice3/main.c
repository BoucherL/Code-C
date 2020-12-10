#include <stdio.h>
#include <stdlib.h>

float fonction(float nb1,float nb2)
{
    return(nb1*nb2);
}
int main()
{
    float nb1,nb2;

    printf("Premiere valeur:");
    scanf("%f",&nb1);
    printf("Deuxieme Valeur:");
    scanf("%f",&nb2);
    fonction(nb1,nb2);
    printf("%fx%f=%f",nb1,nb2);

    return 0;
}

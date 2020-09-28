#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb;
    float note, somme, moyenne =0;
    for(nb=0 ;nb<30;nb++)
    {
        printf("saisissez une note n°%d : ", nb + 1 );
        scanf("%f", &note);
        somme=somme+note;
    }
    somme /= 30.0;

    printf("La moyenne est %f / 20",somme);

    return 0;
}


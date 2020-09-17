#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb;
    float note, somme=0;
    for(nb=0 ;nb<30;nb++)
    {
        printf("saisissez une note : ");
        scanf("%f", &note);
        somme=somme+note;
    }
    somme=somme/nb;

    printf("La moyenne est de : %.2f",somme);

    return 0;
}


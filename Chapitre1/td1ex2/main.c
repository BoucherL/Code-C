#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note;
    printf("Saisir la note : ");
    scanf("%d",&note);
    do
    {
        scanf("%d",&note);
    }while (note < 0 || note > 20);
    printf("La note saisie est %d\n",note);
    return 0;
}

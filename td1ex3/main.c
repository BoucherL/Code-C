#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note, nbNoteSup10 = 0;

    while(note <= 20 && note >= 0)
    {
        printf("Saisir une note : ");
        scanf("%d", &note);

        if(note > 10 && note <=20)
        {
          nbNoteSup10 = nbNoteSup10 + 1;
        }

    }
    printf("Il y a %d note(s) superieure a 10\n", nbNoteSup10);
    system("PAUSE");

    return 0;
}

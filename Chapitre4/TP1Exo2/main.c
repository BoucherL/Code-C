#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *adr_deb;
    int i;

    adr_deb=(int*)malloc(sizeof(int));
    for(i=0;i<6;i++)
    {
        printf("Entrer une valeur:");
        scanf("%d",adr_deb);
    }
    for(i=0;i<6;i++)
    {
      printf("%d",*adr_deb);
    }
        free(adr_deb);
        return 0;
}

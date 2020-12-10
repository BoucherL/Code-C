#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char *adr;

    printf("Entree une chaine de caractere :");
    scanf("%s",&adr);
    adr=(char*)malloc(sizeof(char));
    printf("%p %c \n",adr,*adr);
    free(adr);
    return 0;
}

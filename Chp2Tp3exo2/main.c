#include <stdio.h>
#include <stdlib.h>

int main()
{
     char str[100],c;
    int i;
    int trouve=0;

    printf("Entrez la chaine :\n");
    scanf("%s",str);
    printf("Entrez le caractere a trouver :");
    scanf("%c",&c);
    scanf("%c",&c);

    for(i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]==c)
        {
            printf("%c se trouve en position %d en partant de la droite \n",c,strlen(str)-i);
            trouve=1;
            break;
        }
    }
    if(trouve==0)
    {
        printf("%c n'est pas present\n");
    }
    return 0;
}

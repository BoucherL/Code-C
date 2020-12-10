#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],tmp;
    int i,j;

    printf("Entrez la chaine :\n");
    gets(str);
    strrev(str);
    //for(i=strlen(str)-1,j=0;i>j;j--,i++)
    //{
    //tmp=str[j];
    //str[j]=str[i];
    //str[i]=tmp;
    //}
    printf(" Chaine de cractere apres inversion = %s", str);
    return 0;
}

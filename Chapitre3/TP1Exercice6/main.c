#include <stdio.h>
#include <stdlib.h>


void inverser(char*ch,int a,int b)
{
    char d;
   if (a >= b)
      return;

   d = *(ch+a);
   *(ch+a) = *(ch+b);
   *(ch+b) = d;
   inverser(ch, ++a, --b);
}

int main()
{
    char str[100];

    printf("Entrez une chaine de caractere :");
    gets(str);
    inverser(str,0,strlen(str)-1);
    printf("La chaine de caractere inverser : %s",str);
    return 0;
}

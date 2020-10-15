#include <stdio.h>
#include <stdlib.h>

int main()
{
    int occ[26];
    char str[5000];
    int i;

    printf("Entrez des charactere : \n");

    for(i=0;i<26;i++)
    {
        occ[i]=0;
    }
    gets(str);

    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            occ[str[i]-'A']++;
        }
        else if(str[i]>='a'&& str[i]<='z')
        {
            occ[str[i]-'a']++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(occ[i]>0)
        {
            printf("%c appartient %d fois\n", i+'A',occ[i]);
        }
    }
    return 0;
}

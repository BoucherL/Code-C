#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
    if(b==0)
    {
        return a;
    return pgcd(b,a%b);
    }
}


int main()
{
    int a,b,resultat;

    printf("Entrez deux valeurs :");
    scanf("%d%d",&a,&b);

    return 0;
}

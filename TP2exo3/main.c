#include <stdio.h>
#include <stdlib.h>

int main()
{
int g;
printf("Entrez le poids : ");
scanf("%d",&g);

if(g<20)
{
    printf("le tarif est de : 3.00 frs");
}
else if(g>=20 && g<50)
{
    printf("le tarif est de : 3.95 frs");
}
else if(g>=50)
{
    printf("le tarif est de : 5.90 frs");
}
return 0;
}

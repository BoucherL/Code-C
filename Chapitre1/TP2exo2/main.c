#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,e;
printf("Entrer le premier chiffre : ");
scanf("%d",&a);
printf("Entrer le deuxieme chiffre : ");
scanf("%d",&b);
printf("Entrer le troisieme chiffre : ");
scanf("%d",&c);

do
{
    if(a>b)
    {
        e=a;
        a=b;
        b=e;

    }
    else if(b>c)
    {
        e=b;
        b=c;
        c=e;
    }
}while(!((a<b)&&(a<c)&&(b<c)));
printf("Les nombres sont dans l'ordre croissants : %d %d %d",a ,b ,c);

}

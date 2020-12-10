#include <stdio.h>
#include <stdlib.h>

int paire(int N)
{
    return(N%2==0);
}
int multiple3(int N)
{
    return(N%3==0);
}
int main()
{
    int val;
    int parite,mul3;
    printf("Saisir une valeur:");
    scanf("%d",&val);
    parite=paire(val);
    mul3=multiple3(val);
    if(parite)
    {
        printf("%d est paire\n",val);
    }
    if(mul3)
    {
        printf("%d est multiple de 3 \n",val);
    }
    if(parite&&mul3)
    {
        printf("%d est multiple de 6 \n",val);
    }

    return 0;
}

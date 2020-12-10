#include <stdio.h>
#include <stdlib.h>
#include <limite.h>

int main()
{
    int min = INT-max,max=int-min;
    int tab [10],i;

    for(i=0;i<10;i++)
    {
        scanf("%d",&tab[i]);
    }
    for(i=0;i<10;i++)
    {
        if(tab[i]<min)
        {
            min=tab[i];
        }
        if(tab[i]>max)
        {
            max=tab[i];
        }
    }
    return 0;
}

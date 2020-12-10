#include <stdio.h>
#include <stdlib.h>
#include <float.h>

float min(float*tab,int nb)
{
    float minVal=FLT_MAX;
    int j;
    for(j=0;j<nb;j++)
    {
        if(tab[j]<minVal)
        {
            minVal=tab[j];
        }
    }
    return minVal;
}

float max(float*tab,int nb)
{
    float maxVal=FLT_MIN;
    int j;

    for(j=0;j<nb;j++)
    {
        if(tab[j]<maxVal)
        {
            maxVal=tab[j];
        }
    }
    return maxVal;

}

int main()
{
    float j;
    float liste[8]={1,4,6,7,9,10,14};

    printf("Le maximum de la liste :");
    max(tab[j]);
    printf("%f",&tab[max]);
    printf("Le minimum de la liste :");
    min(tab[j]);
    printf("%f",&tab[min]);

    return 0;
}

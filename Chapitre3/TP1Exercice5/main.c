#include <stdio.h>
#include <stdlib.h>
int fact(int N)
{
    int i;
    int result=1;
    for(i=1;i<=N;i++)
    {
        result*=i;
    }
    return result;
}


int main()
{
    int N, factorielle;
    int i;
    printf("Entrer N:");
    scanf("%d",&N);
    factorielle=fact(N);
    printf("Factorielle %d     =%d",N,fact);
    return 0;
}



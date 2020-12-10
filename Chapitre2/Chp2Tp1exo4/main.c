#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstPrimeNumber[4]={2,3,5,7};
    int primeNumbers[100];
    int i,j,result;
    for(i=0;i<100;i++)
    {
        primeNumbers[i]=1;
    }
        for(i=0;i<4;i++)
        {
            j=2;
            while((result=firstPrimeNumber[i]*j)<=100)
            {
                primeNumbers[result - 1]=0;
                j++;
            }
        }
        for(i=1;i<=100;i++)
        {
            printf("%d\t%d\n",i,primeNumbers[i]);
        }
    return 0;
}

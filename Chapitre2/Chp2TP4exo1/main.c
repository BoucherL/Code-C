#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
  int tab[40];
  int i, j, tmp;
  for (i=0;i < SIZE;++i)
  {
   scanf("%d",&tab[i]);
  }
  for (i=0 ; i < SIZE-1; i++)
  {
    for (j=0 ; j < SIZE-i-1; j++)
    {
      if (tab[j] > tab[j+1])
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
    }
  }
   for (i=0; i < SIZE; ++i)
   {
      printf("%d\n", tab[i]);
   }
    return 0;
}

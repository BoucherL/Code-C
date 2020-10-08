#include <stdio.h>
#include <conio.h>
#include <tchar.h>

int main()
{
float t1[10], t2[10];
int i, j=0;

for(i=0;i<10;i++)
{
    scanf("%f",&t2[i]);
}
for(i=0;i<10;i++)
{
    if(t2[i]>0)
    {
        t1[j]=t2[i];
        j++;
    }
    }
    for(i=0;i<j;i++)
    {
        printf("%f\n",t1[i]);
    }
    return 0;
}

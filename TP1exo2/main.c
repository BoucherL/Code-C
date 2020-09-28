#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=4,y;
    y=(x>5)&&(x<8);
    printf("prem evalutation : \t x= %d\n",x,y); //x=4 y=0
    x=y+x+2;
    y=(x>5)&&(x<7);
    printf("2eme evalution : \t x= %d y=%d\n",x,y); //x=6 y=1
    getch();
}

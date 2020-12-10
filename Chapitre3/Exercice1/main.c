#include <stdio.h>
#include <stdlib.h>

void demo();
void main()
{
    int x=1,y=2;
    printf("\n avant d'appeler demo(),x=%d et y=%d",x,y);
    demo();
    printf("\après avoir appeler démo(),x=%d et y=%d",x,y);
}
void demo()
{
    int x=88,y=99;
    printf("\dans la fonction demo(),x=%d et y=%d",x,y);
}

#include <stdio.h>
#include <stdlib.h>

int mot_de_passe()
{
    int i=0,j;
    int t[100];
        do{
        i++;
        t[i]=getch();
        if(t[i]==0x08)
            {
                system("cls");
                printf("donnez votre mot de passe:\n");
                t[100]=NULL;
            }
        else printf("*");
      }
      while(t[i]!='\n');

}



int main()
{
    int j,i;
    int t[100];

    printf("donnez votre mot de passe:");
    mot_de_passe();
    printf("\nvotre mot de pasee est :\n");
      for(j=1;j<=i;j++)
    {
        printf("%c",t[j]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *adr1,*adr2;

    adr1=(float*)malloc(sizeof(float));
    adr2=(float*)malloc(sizeof(float));

    *adr1=-45.78;
    *adr2=678.89;

    printf("premier:%p %f \n",adr1,*adr1);
    printf("deuxieme:%p %f \n",adr2,*adr2);

    free(adr1);
    free(adr2);
    return 0;
}

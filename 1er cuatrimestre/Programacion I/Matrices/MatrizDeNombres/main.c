#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3
#define LEN 20



int main()
{
    char nombres[MAX][LEN];
    char aux[LEN];

    for (int i = 0;i<MAX;i++)
        {
            printf("ingrese nombre: ");
            gets(nombres[i]);
        }


    // ordenardos

    for(int i=0;i<MAX-1;i++)
        {
        for(int j=i+1;j<MAX;j++)
            {
                if(strcmp(nombres[i], nombres[j])>0)
                    {
                    strcpy(aux,nombres[i]);
                    strcpy(nombres[i],nombres[j]);
                    strcpy(nombres[j],aux);
                    }
            }
        }
         printf("\nnombres:\n");
        for(int i=0;i<MAX;i++)
    {
        printf("%s \n", nombres[i]);
    }



    return 0;
}


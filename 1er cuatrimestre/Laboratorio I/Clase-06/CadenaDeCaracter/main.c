#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 20




int main()
{
    char nombre[MAX];
    char apellido[MAX];
    char apeNom[50]={};


    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(apellido);


    strcat(apeNom,apellido);
    strcat(apeNom,", ");
    strcat(apeNom,nombre);

    strlwr(apeNom);
    apeNom[0]= toupper(apeNom[0]);

    for(int i = 0; i<strlen(apeNom); i++)
    {
        if(apeNom[i]==' ')
        {
            apeNom[i+1]=toupper(apeNom[i+1]);
        }
    }


    printf("\n nombre ingresado: %s", apeNom);

    return 0;
}


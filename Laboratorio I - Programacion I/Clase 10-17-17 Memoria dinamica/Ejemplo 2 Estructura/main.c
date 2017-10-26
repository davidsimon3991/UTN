#include <stdio.h>
#include <stdlib.h>
#include "Prototipos.h"

int main()
{
    eRecursante* recursante;
    eRecursante* aux;

    int legajo;
    char nombre[50];
    int nota;

    printf("Ingrese legajo:");
    scanf("%d",&legajo);
    printf("Ingrese nombre:");
    fflush(stdin);
    gets(nombre);
    printf("Ingrese nota:");
    scanf("%d",&nota);

    recursante = newRecursante_info(legajo,nombre,nota);

    if(recursante==NULL)
    {
        printf("\nNo hay espacio para recursantes!!!");
        exit(0);
    }
    else
    {
        //hardcoreo(recursante);
        mostrar(recursante);
    }

    return 0;
}

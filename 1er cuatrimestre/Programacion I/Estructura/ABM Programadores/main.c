#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 10

//me falta validar y arreglar los errorres

int main()
{
    char seguir='s';
    int opcion=0;

    EProgramador pers[TAM];

    Estados(pers,TAM);

    while(seguir=='s')
    {
        printf("1- Agregar programador\n");
        printf("2- Borrar programador\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        //printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            ingresarDato(pers,TAM);
            break;
        case 2:
            borrarUnDato(pers,TAM);
            break;
        case 3:
            ordenPorNombre(pers,TAM);
            break;
        case 4:
            graficoEdad(pers,TAM);
            break;
        case 5:
            seguir = 'n';
            break;
        }

        system("pause");
        system("cls");
    }

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include "Prototipos.h"


int main()
{
    eInterprete interpretes[TAM];
    eCancion canciones[TAMC];
    eInterpretesCanciones interpretesCanciones[TAMIC];

    inicializacion(interpretesCanciones,interpretes,canciones,TAMIC,TAM,TAMC);
    IngresoInterprete(interpretes,TAM_HARD);
    IngresoCancion(canciones,TAM_HARD2);
    IngresoInterpretesCanciones(interpretesCanciones,TAM_HARD3);
    mostrarMuchosMuchos(interpretesCanciones,interpretes,canciones,TAMIC,TAM,TAMC);
    system("pause");

    char opcion='s';
    int numero;
    do
    {
        system("cls");
        printf("Spotify");
        printf("\n1.Nuevo artista\n2.Quitar artista\n3.Modificar artista\n4.Nueva cancion\n5.Quitar cancion\n6.Modificar cancion");
        printf("\n7.Mostrar todos los artistas\n8.Mostrar todas las canciones\n9.Mostrar canciones de cierto interprete\n10.Mostrar canciones de artistas de USA\n11.Mostrar los temas de cada interprete");
        printf("\n12Salir\n\n\tEliga una opcion: ");
        scanf("%d",&numero);

        switch(numero)
        {
        case 1:
            altaInterprete(interpretes,TAM);
            break;
        case 2:
            bajaInterprete(interpretes,TAM);
            break;
        case 3:
            modificarInterprete(interpretes,TAM);
            break;
        case 4:
            altaCancion(canciones,TAMC);
            break;
        case 5:
            bajaCancion(canciones,TAMC);
            break;
        case 6:
            modificarCancion(canciones,TAMC);
            break;
        case 7:
            mostrarArtistas(interpretes,TAM);
            break;
        case 8:
            printf("\nListado completo:\n");
            mostrarCanciones(interpretesCanciones,interpretes,canciones,TAMIC,TAM,TAMC);
            break;
        case 9:
            mostrarCancionesdeInterprete(interpretesCanciones,interpretes,canciones,TAMIC,TAM,TAMC);
            break;
        case 10:
            printf("\nListado canciones con artistas de USA:\n");
            mostrarCancionesdeUSA(interpretesCanciones,interpretes,canciones,TAMIC,TAM,TAMC);
            break;
        case 11:
            mostrarporInterpretes(interpretesCanciones,interpretes,canciones,TAMIC,TAM,TAMC);
            break;
        case 12:
            opcion='n';
            break;

        default:
            printf("\nNo existe esa opcion");
        }
    system("pause");
   } while(opcion=='s');
    return 0;
}




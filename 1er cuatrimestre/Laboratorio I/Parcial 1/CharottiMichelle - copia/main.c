#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define TAM 10
#define TAM_PROY 20

int main()
{
     eProgramador progra[TAM];
    eCategorias catego[]= {{1,"Junior",10},{2,"SemiSenior",20},{3,"Senior",30}};
    eProyecto proyec[TAM_PROY];
    eIDs proyecProgram[20];

    char seguir='s';
    int opcion=0;

    estado(progra,proyec,TAM);
    cargarProgramador(progra);
    cargarProyectos(proyec);
    cargarProgramador_Proyecto(proyecProgram);


    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Modificar\n");
        printf("3- Baja\n");
        printf("4- Asignar\n");
        printf("5- Listado de programadores\n");
        printf("6- Listado proyecto\n");
        printf("7- Listar proyecto de programadores\n");
        printf("8- Proyecto demandante\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            agregarProgramador(progra,catego,TAM);
            break;
        case 2:
            modificar(progra,catego,TAM);
            break;
        case 3:
            borrarProgramador(progra,proyec,proyecProgram,TAM_PROY,TAM);
            break;
        case 4:
            asignarProgramador(progra,proyec,catego,proyecProgram,TAM,TAM_PROY);
            break;
        case 5:
listadoProgramadores(progra,catego,proyec,proyecProgram,TAM,TAM_PROY);
            break;
        case 6:
 listaTodosLosProyectos(proyec,progra,proyecProgram,TAM,TAM_PROY);
            break;
        case 7:
listarProyectosDeProgramador(progra,catego,proyec,proyecProgram,TAM,TAM_PROY);
            break;
        case 8:
proyectoDemandante(progra,proyec,proyecProgram,TAM,TAM_PROY);
            break;
        case 9:
            seguir = 'n';
            break;
        }

        system("pause");
        system("cls");
    }
    return 0;
}


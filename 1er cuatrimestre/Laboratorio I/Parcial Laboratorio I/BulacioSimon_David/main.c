#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

#define TAM_PROG 5
#define TAM_PROY 3
#define TAM_CAT 3
#define TAM_PYP 10


int main()
{
    eProgramador programadores[TAM_PROG];
    eProyecto proyectos[TAM_PROY];
    eCategoria categorias[TAM_CAT];
    empleados_proyectos eyp[TAM_PYP];

    iniciarProgramadores(programadores,TAM_PROG);
    iniciarpyp(eyp,TAM_PYP);
    cargarCategorias(categorias);
    cargarProyectos(proyectos);
    cargarEmpleados(programadores);
    cargarPYP(eyp);




    int opcion;
    char seguir='s';
    do
    {
        printf("[MODELO DE EXAMEN]\n");
        printf("1.Alta de programador.\n");
        printf("2.Modificar datos de programador.\n");
        printf("3.Baja de programador.\n");
        printf("4.Asignar programador a proyecto.\n");
        printf("5.Listado de programadores.\n");
        printf("6.Listado de proyectos.\n");
        printf("7.Listar proyectos de programador.\n");
        printf("8.Proyecto demandante.\n");
        printf("9.Listar programador y remuneracion por proyecto\n");
        printf("10.Listar proyectos y remuneracion para cada programador\n");
        printf("11.Salir.\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            altaProgramador(programadores, categorias,TAM_PROG,TAM_CAT);
            break;
        case 2:
            modificarProgramador(programadores,categorias,TAM_PROG,TAM_CAT);
            break;
        case 3:
            borrarProgramador(programadores,categorias,TAM_PROG,TAM_CAT);
            break;
        case 4:
            asignarProgramador(programadores,proyectos,eyp,categorias,TAM_PROG,TAM_PROY,TAM_PYP,TAM_CAT);
            break;
        case 5:
            listarProgramadores(eyp,programadores, proyectos, categorias,TAM_PYP,TAM_PROG,TAM_PROY,TAM_CAT);
            break;
        case 6:
            listarProyectos(eyp,proyectos,programadores,categorias,TAM_PYP,TAM_PROY,TAM_PROG, TAM_CAT);
            break;
        case 7:
            listarProyectosxProgramador(eyp,proyectos,programadores,TAM_PYP,TAM_PROY,TAM_PROG);
            break;
        case 8:
            mostrarProyectoDemandante(eyp,proyectos,programadores,categorias,TAM_PYP,TAM_PROY,TAM_PROG,TAM_CAT);
            break;
        case 9:
            listarRemuneracion(eyp,programadores,proyectos,categorias,TAM_PYP,TAM_PROG,TAM_PROY,TAM_CAT);
            break;
        case 10:
            listarRemuneracionxProyecto(eyp,proyectos,programadores,categorias,TAM_PYP,TAM_PROY,TAM_PROG,TAM_CAT);
            break;
        case 11:
            seguir='n';
            break;
        default:
            printf("Error. Opcion invalida\n");
            system("pause");
            break;
        }
        system("cls");
    }
    while(seguir=='s');
    return 0;
}

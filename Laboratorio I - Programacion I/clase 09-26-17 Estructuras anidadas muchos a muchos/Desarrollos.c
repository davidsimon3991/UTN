#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "Prototipos.h"

void inicializacion(eInterpretesCanciones ic[],eInterprete inter[],eCancion can[],int tamIC,int tamI,int tamC)
{
    for(int i=0; i<tamI; i++)
    {
        inter[i].estado=0;
    }
    for(int j=0; j<tamC; j++)
    {
        can[j].estado=0;
    }
    for(int k=0; k<tamIC; k++)
    {
        ic[k].estado=0;
    }
}

void IngresoInterprete(eInterprete interprete[],int tam)
{
    int i;
    int id[]= {1,2,3,4,5};
    char nombre[][30]= {"Metallica","Helloween","Eluveitie","Megadeth","Epica"};
    char nacionalidad[][30]= {"USA","Alemania","Suiza","USA","Finlandia"};

    for(i=0; i<tam; i++)
    {
        interprete[i].id=id[i];
        strcpy(interprete[i].nombre,nombre[i]);
        strcpy(interprete[i].nacionalidad,nacionalidad[i]);
        interprete[i].estado=1;
    }
}

void IngresoCancion(eCancion cancion[],int tam)
{
    int i;
    int idCancion[]= {1,2,3,4,5,6,7,8,9};
    char titulo[][30]= {"Master of puppets","I want out","A rose for Epona","Holy wars","Cry for the moon","One","Hangar 18","The call of the mountains","The big 4"};
    int duracion[]= {6,4,5,5,7,8,4,3,13};

    for(i=0; i<tam; i++)
    {
        cancion[i].idCancion=idCancion[i];
        strcpy(cancion[i].titulo,titulo[i]);
        cancion[i].duracion=duracion[i];
        cancion[i].estado=1;
    }
}
void IngresoInterpretesCanciones(eInterpretesCanciones ic[],int tamIC)
{
    int intepretes[]= {1,2,3,4,5,1,4,3,1,4};
    int canciones[]= {1,2,3,4,5,6,7,8,9,9};

    for(int i=0; i<tamIC; i++)
    {
        ic[i].idInterprete=intepretes[i];
        ic[i].idCancion =canciones[i];
        ic[i].estado=1;
    }
}
void altaInterprete(eInterprete inter[],int tamI)
{
    int flag=0;

    for(int i=0; i<tamI; i++)
    {
        if(inter[i].estado==0)
        {
            flag=1;
            inter[i].id=i+100;
            inter[i].estado=1;
            printf("Ingrese nombre:");
            fflush(stdin);
            gets(inter[i].nombre);
            printf("Ingrese nacionalidad:");
            fflush(stdin);
            gets(inter[i].nacionalidad);
            break;
        }
    }
    if(flag==0)
    {
        printf("\nNo se pueden cargar mas artistas");
    }
}
void bajaInterprete(eInterprete inter[],int tamI)
{
    int flag=0;
    int auxInt;
    char opcion;
    mostrarArtistas(inter,tamI);
    printf("Ingrese ID del artista a eliminar: ");
    scanf("%d",&auxInt);
    for(int i=0; i<tamI; i++)
    {
        if(inter[i].id == auxInt && inter[i].estado==1)
        {
            flag=1;
            printf("\n%d,%s,%s\n",inter[i].id,inter[i].nombre,inter[i].nacionalidad);
            printf("Desea eliminar?S/N");
            fflush(stdin);
            opcion = getch();
            if(opcion=='S')
            {
                inter[i].estado=0;
                strcpy(inter[i].nombre,"unknown");
            }
            else
            {
                printf("\nCancelado");
            }
            break;
        }
    }
    if(flag==0)
    {
        printf("\nNo se encontro al artista");
    }

}
void modificarInterprete(eInterprete inter[],int tamI)
{
    int flag=0;
    int auxInt;
    char opcion;
    char auxNombre[30], auxNac[20];

    mostrarArtistas(inter,tamI);
    printf("Ingrese ID del artista a eliminar: ");
    scanf("%d",&auxInt);
    for(int i=0; i<tamI; i++)
    {
        if(inter[i].id == auxInt && inter[i].estado==1)
        {
            flag=1;
            printf("\n%d,%s,%s\n",inter[i].id,inter[i].nombre,inter[i].nacionalidad);
            printf("Ingrese nuevo nombre:");
            fflush(stdin);
            gets(auxNombre);
            printf("Ingrese nueva nacionalidad:");
            fflush(stdin);
            gets(auxNac);
            printf("Desea modificar?S/N");
            fflush(stdin);
            opcion = getch();
            if(opcion=='S')
            {
                strcpy(inter[i].nombre,auxNombre);
                strcpy(inter[i].nacionalidad, auxNac);
                printf("\nModificacion exitosa");
            }
            else
            {
                printf("\nCancelado");
            }
            break;
        }
    }
    if(flag==0)
    {
        printf("\nNo se encontro al artista");
    }
}
void altaCancion(eCancion can[], int tamC)
{
    int flag =0;

    for(int i=0; i<tamC; i++)
    {
        if(can[i].estado==0)
        {
            flag =1;
            can[i].estado=1;
            can[i].idCancion = i+10;
            printf("Ingrese titulo:");
            fflush(stdin);
            gets(can[i].titulo);
            printf("Ingrese duracion:");
            scanf("%d", &can[i].duracion);
            break;
        }
    }
    if(flag ==0)
    {
        printf("\nNo hay espacio para mas canciones");
    }
}
void bajaCancion(eCancion can[], int tamC)
{
    int flag=0;
    int auxInt;
    char opcion;
    mostrarSoloCanciones(can,tamC);
    printf("Ingrese ID de la cancion a eliminar: ");
    scanf("%d",&auxInt);
    for(int i=0; i<tamC; i++)
    {
        if(can[i].idCancion== auxInt && can[i].estado==1)
        {
            flag=1;
            printf("\n%s, %d min.", can[i].titulo, can[i].duracion);
            printf("Desea eliminar?S/N");
            fflush(stdin);
            opcion = getch();
            if(opcion=='S')
            {
                can[i].estado=0;
                strcpy(can[i].titulo,"unknown");
            }
            else
            {
                printf("\nCancelado");
            }
            break;
        }
        if(flag ==0)
        {
            printf("\nNo se encontro la cancion");
        }
    }
}
void modificarCancion(eCancion can[],int tamC)
{
    int flag=0;
    int auxInt;
    char opcion, auxChar[30];
    mostrarSoloCanciones(can,tamC);
    printf("Ingrese ID de la cancion a modificar: ");
    scanf("%d",&auxInt);
    for(int i=0; i<tamC; i++)
    {
        if(can[i].idCancion== auxInt && can[i].estado==1)
        {
            flag=1;
            printf("\n%s, %d min.", can[i].titulo, can[i].duracion);
            printf("ingrese Titulo:");
            fflush(stdin);
            gets(auxChar);
            printf("Ingrese duracion:");
            scanf("%d",&auxInt);

            printf("Desea modificar?S/N");
            fflush(stdin);
            opcion = getch();
            if(opcion=='S')
            {
                strcpy(can[i].titulo,auxChar);
                strcpy(can[i].duracion,auxInt);
            }
            else
            {
                printf("\nCancelado");
            }
            break;
        }
        if(flag ==0)
        {
            printf("\nNo se encontro la cancion");
        }
    }

}


void mostrarMuchosMuchos(eInterpretesCanciones ic[],eInterprete inter[],eCancion can[],int tamIC,int tamI,int tamC)
{
    for(int i=0; i<tamI; i++)
    {
        if(inter[i].estado==1)
        {
            printf("%s\n",inter[i].nombre);
            for(int j=0; j<tamIC; j++)
            {
                if(inter[i].id==ic[j].idInterprete)
                {
                    for(int k=0; k<tamC; k++)
                    {
                        if(ic[j].idCancion==can[k].idCancion)
                        {
                            printf("\t%s\n",can[k].titulo);
                        }
                    }
                }
            }
        }
    }
}
void mostrarArtistas(eInterprete inter[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        if(inter[i].estado==1)
        {
            printf("%d %s %s\n", inter[i].id,inter[i].nombre,inter[i].nacionalidad);
        }
    }

}
void mostrarSoloCanciones(eCancion can[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        if(can[i].estado==1)
        {
            printf("%s, %d min.\n", can[i].titulo,can[i].duracion);
        }
    }
}
void mostrarCanciones(eInterpretesCanciones ic[],eInterprete inter[],eCancion can[],int tamIC,int tamI,int tamC)
{
    for(int i=0; i<tamC; i++)
    {
        if(can[i].estado==1)
        {
            printf("Tema: %s\nDuracion: %d min.\nArtistas:",can[i].titulo, can[i].duracion);
            for(int j=0; j<tamIC; j++)
            {
                if(ic[j].estado==1 && can[i].idCancion == ic[j].idCancion)
                {
                    for(int k=0; k<tamI; k++)
                    {
                        if(inter[k].estado==1 && inter[k].id == ic[j].idInterprete)
                        {
                            printf("%s. ",inter[k].nombre);
                        }
                    }
                }
            }
            printf("\n\n");
        }
    }
}
void mostrarCancionesdeUSA(eInterpretesCanciones ic[],eInterprete inter[],eCancion can[],int tamIC,int tamI,int tamC)
{

    for(int i=0; i<tamC; i++)
    {
        if(can[i].estado==1)
        {
            for(int j=0; j<tamIC; j++)
            {
                if(ic[j].estado == 1 && ic[j].idCancion == can[i].idCancion)
                {
                    for(int k=0; k<tamI; k++)
                    {
                        if(inter[k].estado==1 && inter[k].id == ic[j].idInterprete)
                        {
                            if(strcmp(inter[k].nacionalidad,"USA")==0)
                            {
                                printf("%s, %s, %d min.\n", can[i].titulo, inter[k].nombre, can[i].duracion);
                            }
                        }
                    }
                }
            }
        }
    }

}

void mostrarporInterpretes(eInterpretesCanciones ic[],eInterprete inter[],eCancion can[],int tamIC,int tamI,int tamC)
{
    for(int i=0; i<tamI; i++)
    {
        if(inter[i].estado==1)
        {
            printf("\nCanciones de %s\n",inter[i].nombre);
            for(int j=0; j<tamIC; j++)
            {
                if(ic[j].estado==1 && ic[j].idInterprete == inter[i].id)
                {
                    for(int k=0; k<tamC; k++)
                    {
                        if(can[k].estado==1 && can[k].idCancion == ic[j].idCancion)
                        {
                            printf("%s, %d min.\n", can[k].titulo, can[k].duracion);
                        }
                    }
                }
            }
        }

    }
}

void mostrarCancionesdeInterprete(eInterpretesCanciones ic[],eInterprete inter[],eCancion canc[],int tamIC,int tamI,int tamC)
{
    char auxChar[30];
    mostrarArtistas(inter,tamI);
    printf("Ingrese nombre del artista: ");
    fflush(stdin);
    gets(auxChar);

    for(int i=0; i<tamI; i++)
    {
        if(stricmp(inter[i].nombre, auxChar)==0 && inter[i].estado==1)
        {
            printf("Canciones de %s:\n", inter[i].nombre);
            for(int j=0; j<tamIC; j++)
            {
                if(ic[j].estado==1 && ic[j].idInterprete == inter[i].id)
                {
                    for(int k=0; k<tamC; k++)
                    {
                        if(canc[k].estado==1 && canc[k].idCancion == ic[j].idCancion)
                        {
                            printf("-%s, duracion: %d min.\n", canc[k].titulo,canc[k].duracion);
                        }
                    }
                }
            }
        }
    }
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "Prototipos.h"

void inicializacion(eInterprete inter[],eCancion can[],int tamI,int tamC)
{
    for(int i=0; i<tamI; i++)
    {
        inter[i].estado=0;
    }
    for(int j=0; j<tamC; j++)
    {
        can[j].estado=0;
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
    int idCancion[]= {1,2,3,4,5,6,7,8};
    char titulo[][30]= {"Master of puppets","I want out","A rose for Epona","Holy wars","Cry for the moon","One","Hangar 18","The call of the mountains"};
    int interprete[]= {1,2,3,4,5,1,4,3};
    int duracion[]= {6,4,5,5,7,8,4,3};

    for(i=0; i<tam; i++)
    {
        cancion[i].idCancion=idCancion[i];
        strcpy(cancion[i].titulo,titulo[i]);
        cancion[i].interprete=interprete[i];
        cancion[i].duracion=duracion[i];
        cancion[i].estado=1;
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
            inter[i].id=i;
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
void mostrarCanciones(eInterprete in[],eCancion can[],int tamI,int tamC)
{
    int i,j;
    for(i=0; i<tamC; i++)
    {
        for(j=0; j<tamI; j++)
        {
            if(can[i].interprete==in[j].id && can[i].estado==1)
            {
                printf("\nID:%d\tTitulo:%s\nArtista:%s\tDuracion:%d min.\n",can[i].idCancion,can[i].titulo,in[j].nombre,can[i].duracion);
            }
        }
    }
}
void mostrarCancionesdeUSA(eInterprete in[],eCancion can[],int tamI,int tamC)
{
    int i,j;
    for(i=0; i<tamC; i++)
    {
        for(j=0; j<tamI; j++)
        {
            if(can[i].interprete==in[j].id && can[i].estado==1)
            {
                if(strcmp(in[j].nacionalidad,"USA")==0)
                {
                    printf("\nID:%d\tTitulo:%s\nArtista:%s\tDuracion:%d min.\n",can[i].idCancion,can[i].titulo,in[j].nombre,can[i].duracion);
                }
            }
        }
    }
}
void mostrarporInterpretes(eInterprete inter[],eCancion can[],int tamI,int tamC)
{
    for(int i=0; i<tamI; i++)
    {
        if(inter[i].estado==1)
        {
            printf("\nCanciones de %s\n",inter[i].nombre);
            for(int j=0; j<tamC; j++)
            {
                if(can[j].interprete==inter[i].id && can[j].estado==1)
                {
                    printf("***%s\n",can[j].titulo);
                }
            }
        }

    }
}
void mostrarCancionesdeInterprete(eInterprete inter[],eCancion can[],int tamI,int tamC)
{
    int auxInt;
    mostrarArtistas(inter,tamI);
    printf("Ingrese nro de artista: ");
    scanf("%d",&auxInt);

    for(int i=0; i<tamI; i++)
    {
        if(inter[i].id == auxInt && inter[i].estado==1)
        {
            printf("\nCanciones de %s\n", inter[i].nombre);
            for(int j=0; j<tamC; j++)
            {
                if(can[j].interprete==inter[i].id && can[j].estado==1)
                {
                    printf("%s\n",can[j].titulo);
                }
            }
        }
    }
}

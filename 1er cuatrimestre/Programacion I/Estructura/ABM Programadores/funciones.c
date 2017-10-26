#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"

eCategoria cat[]= {{1,"junior"},{2,"semi sr"},{3,"senior"}};

void  Estados (EProgramador pers[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        pers[i].estado=0;
    }

}

void ingresarDato(EProgramador persona[],int tam)
{
    int i;
    int flag=0;

    for(i=0; i<tam; i++)
    {
        if(persona[i].estado==0)
        {
            printf("ingrese id: ");
            scanf("%d",&persona[i].id);

            printf("\ningrese nombre: ");
            fflush(stdin);
            gets(persona[i].nombre);


            printf("ingrese categoria (1:junior /2:semi sr /3:senior): ");
            scanf("%d",&persona[i].idCategoria);
            for(int i =0; i<tam; i++)
            {
                    while(cat[i].id != persona[i].idCategoria)
                {
                    printf("no existe categoria!: ");
                    scanf("%d",&persona[i].idCategoria);
                }
            }

            printf("ingrese sueldo: ");
            scanf("%f",&persona[i].sueldo);

            persona[i].estado=1;
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
        printf("\nNo hay espacio.\n\n");
    }
    return;
}

void categoria(int idCat)
{
    for(int i=0; i<3; i++)
    {
        while(cat[i].id !=idCat)
        {
            printf("no existe categoria");
            scanf("%d",&idCat);
        }
    }
}


void borrarUnDato(EProgramador persona[],int tam)
{
    int flag =0;
    int auxID;
    char rta;
    printf("ingrese el ID del programador: ");
    scanf("%d",&auxID);

    for(int i =0; i<tam; i++)
    {
        if(persona[i].estado ==1 && auxID == persona[i].id)
        {
            printf("\n\t[DATOS DE LA PERSONA]\n\tNombre:%s\tID:%d\tCategoria:%d", persona[i].nombre,persona[i].id,persona[i].idCategoria);

            printf("Esta seguro de eliminarlo?(s/n): ");
            rta= getche();

            if(rta=='s')
            {
                persona[i].estado=0;
            }
            else
            {
                printf("Accion cancelada.\n");
            }

            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("persona inexistente\n");
    }

}

void ordenPorNombre(EProgramador persona[],int tam)
{
    char aux[tam];
    for(int i=0; i<tam-1; i++)
    {
        for(int j = i+1; j<tam; j++)
        {
            if(persona[i].estado==1 && persona[i].estado==1)
            {
                if(strcmp(persona[i].nombre,persona[j].nombre)>0)
                {
                    strcpy(aux,persona[i].nombre);
                    strcpy(persona[i].nombre,persona[j].nombre);
                    strcpy(persona[j].nombre,aux);
                }
            }
        }

    }
    printf("\n\t[LISTA ORDENADA POR NOMBRES]\n");
    for(int i =0; i<tam; i++)
    {
        if(persona[i].estado==1)
        {
            printf("\tNombre: %s\tID: %d\tCategoria: %d\n", persona[i].nombre,persona[i].id,persona[i].idCategoria);
        }
    }

}

void graficoEdad(EProgramador pers[],int tam)
{
    /*int uno=0;
    int dos=0;
    int tres=0;

    for(int i=0; i<tam; i++)
    {
        if(pers[i].estado==1)
        {
            if(pers[i].edad<18)
            {
                uno++;
            }
            else if(pers[i].edad>35)
            {
                dos++;
            }
            else
            {
                tres++;
            }
        }
    }
    printf("\nMenores a 18: ");
    for(int i =0; i<uno; i++)
    {
        printf(" *");
    }
    printf("\nEntre 18 y 35: ");
    for(int i =0; i<tres; i++)
    {
        printf(" *");
    }
    printf("\nMayores a 35: ");
    for(int i =0; i<dos; i++)
    {
        printf(" *");
    }
    printf("\n");
    */


}



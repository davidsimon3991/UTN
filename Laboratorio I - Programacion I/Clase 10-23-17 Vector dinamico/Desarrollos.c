#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "Prototipos.h"

#define TAM 3

eRecursante* newRecursante()
{
    eRecursante *recu = (eRecursante*) malloc(sizeof(eRecursante));
    if(recu!=NULL)
    {
        recu->legajo=0;
        strcpy(recu->nombre,"Anonimo");
        recu->nota=0;
    }
    return recu;
}
eRecursante* newRecursante_info(int leg,char* nomb,int nota)
{
    eRecursante *recu = (eRecursante*) malloc(sizeof(eRecursante));
    if(recu!=NULL)
    {
        recu->legajo=leg;
        strcpy(recu->nombre,nomb);
        recu->nota=nota;
    }
    return recu;
}
eRecursante * newVector()
{
    eRecursante * aux;
    aux = (eRecursante*) malloc(TAM*sizeof(eRecursante));

    if(aux!=NULL)
    {
        for(int i =0; i<TAM; i++)
        {
            aux->legajo=0;
            strcpy(aux->nombre,"anonimo");
            aux->nota=0;
        }
    }
    return aux;
}

eRecursante* asignarMasEspacio(eRecursante* recu)
{
    recu = realloc(recu, sizeof(eRecursante));
}

void altaRecursante(eRecursante* recu, int tam)
{
    int nota, legajo;
    char*nombre[15];

    for(int i=0; i<tam; i++)
    {
        printf("Ingrese legajo:");
        scanf("%d",&legajo);
        printf("Ingrese nombre:");
        fflush(stdin);
        gets(nombre);
        printf("Ingrese nota:");
        scanf("%d",&nota);


    }
}
void mostrarRecursantes(eRecursante* recu,int tam)
{
 for(int i=0;i<tam;i++)
 {
     mostrar(recu+i);
 }
}

void hardcoreo(eRecursante* recu)
{
    recu->legajo=123;
    strcpy(recu->nombre,"Juan Palote");
    recu->nota=7;
}
void mostrar(eRecursante* recu)
{
    //printf("\nLegajo\tNombre\t\t\tNota");
    printf("\n%d\t%s\t\t%d", recu->legajo,recu->nombre,recu->nota);
}

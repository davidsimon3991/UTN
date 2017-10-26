#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "Prototipos.h"

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
eRecursante* newRecursante_info(int leg ,char* nomb,int nota)
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
eRecursante* asignarMasEspacio(eRecursante* recu)
{
    recu = realloc(recu, sizeof(eRecursante));
}
void hardcoreo(eRecursante* recu)
{
    recu->legajo=123;
    strcpy(recu->nombre,"Juan Palote");
    recu->nota=7;
}
void mostrar(eRecursante* recu)
{
    printf("\nLegajo\tNombre\t\t\tNota");
    printf("\n%d\t%s\t\t%d", recu->legajo,recu->nombre,recu->nota);
}

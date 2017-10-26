#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 20

int main()
{
    char nombre[MAX];
    char auxCad[100];


    printf("ingrese su nombre: ");
    gets(auxCad);

    while(strlen(auxCad) >MAX-1)
        {
            printf("no se puede copiar un nombre tan largo: ");
            gets(auxCad);
        }

    strcpy(nombre,auxCad);
    strupr(nombre);


    printf("%s", nombre);
    return 0;
}
void ingreso()
{
    char nombre[MAX];
    printf("nombre: ");
    gets(nombre);
    return nombre[];
}


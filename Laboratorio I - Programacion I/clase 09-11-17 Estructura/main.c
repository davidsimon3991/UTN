#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int legajo;
    char nombre[30];
} eEmpleado;

int main()
{
    eEmpleado e1;
    e1.legajo = 123123;
    strcpy(e1.nombre,"Juan Pablo Serrucho");

    printf("%d -- %s", e1.legajo, e1.nombre);

    return 0;
}


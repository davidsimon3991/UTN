#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define C 3

typedef struct
{
    int legajo[C];
    int edad[C];
    char nombre[C][20];
    int estado[C];
} ePersona;

void init(ePersona[],int);
void Alta(ePersona[]);
void Mostrar(ePersona[]);

int main()
{
    ePersona persona[C];
    init(persona,C);

    char seguir = 's';
    int opcion;
    do
    {
        printf("1. Alta\n2.Baja\n3.Modificacion\n4.Mostrar\n5.Salir");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            Alta(persona);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            Mostrar(persona);
            break;
        case 5:
            seguir ='n';
            break;
        }
    }
    while(seguir=='s');
    return 0;
}
void init(ePersona per[],int tam)
{
for(int i=0;i<tam;i++)
    {
        per[i].estado=0;
    }
}
void Alta(ePersona empleado[])
{
    //ePersona empleado;
    int flag;
    flag =0;
    for(int i=0; i<C; i++)
    {
        if(empleado[i].estado==0)
        {
            printf("Ingrese legajo: ");
            scanf("%d",empleado[i].legajo);
            printf("Ingrese edad: ");
            scanf("%d",empleado[i].edad);
            printf("Ingrese nombre");
            fflush(stdin);
            gets(empleado[i].nombre);
            empleado[i].estado=1;
            flag =1;
            break;
        }

    }
    if(flag==0)
    {
        printf("No hay espacio\n");
    }
    return;


}
void Mostrar(ePersona empleado[])
{
    printf("\t[DATOS DEL EMPLEADO]\n\n");
    for(int i=0; i<C; i++)
    {
        if(empleado[i].estado ==1)
        {

            printf("\n%d\n", empleado[i].legajo);
            printf("%d\n", empleado[i].edad);
            printf("%s\n", empleado[i].nombre);
        }
    }
}

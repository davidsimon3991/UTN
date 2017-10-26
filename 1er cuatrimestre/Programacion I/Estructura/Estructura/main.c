#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

typedef struct
{
    int dia;
    int mes;
    int anio;
} efecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char apellido[30];
    float promedio;
    efecha fnac;
}
ealumno;


void mostrarDatos(ealumno);
void mostrarCurso(ealumno[],int);

int main()
{
    ealumno unAlumno;
    //ealumno otroAlumno;
    ealumno curso[MAX];
    //ealumno curso[MAX]={{111,"juan","perez",7,{4,11,1995}},{222,"juana","De Arco",10,{1,5,1994}}};
    for(int i=0; i<MAX; i++)
    {
        printf("ingrese legajo: ");
        scanf("%d",& curso.legajo);
        fflush(stdin);
        printf("ingrese nombre: ");
        gets(curso.nombre);
        printf("ingrese apellido: ");
        fflush(stdin);
        scanf("%s", curso.apellido);
        printf("ingrese promedio: ");
        scanf("%f",&curso.promedio);

        printf("ingrese dia de nacimiento: ");
        scanf("%d",& curso.fnac.dia);
        printf("ingrese mes: ");
        scanf("%d",& curso.fnac.mes);
        printf("ingrese anio: ");
        scanf("%d",& curso.fnac.anio);
    }


    //otroAlumno = unAlumno;
    //mostrarDatos(otroAlumno);
    mostrarCurso(curso, 3);





    return 0;
}
void mostrarDatos(ealumno alumno)
{
    printf("Datos del alumno:\n\n");
    printf("Legajo %d \n",alumno.legajo);
    printf("Nombre %s %s \n",alumno.nombre,alumno.apellido);
    printf("Promedio %.2f\n",alumno.promedio);
    printf("Fecha de nacimiento: %d/%d/%d",alumno.fnac.dia,alumno.fnac.mes,alumno.fnac.anio);
}
void mostrarCurso(ealumno cursada[], int cant)
{
    printf("Datos de la cursada:\n\n");
    for (int i = 0; i<cant; i++)
    {
        mostrarDatos(cursada[i]);
    }
}

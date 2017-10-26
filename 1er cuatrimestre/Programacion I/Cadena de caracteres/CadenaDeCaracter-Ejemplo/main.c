#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 20

void ingreso();
void nombreProlijo();


int main()
{

    nombreProlijo();

    return 0;
}
void ingreso()
{
    char nombre[MAX];
    printf("ingrese nombre:");
    gets(nombre);
    printf("\n\n\nsu nombre es: %s", nombre);
}
void nombreProlijo()
{
    char nombre2[MAX];
    printf("ingrese nombre: ");
    gets(nombre2);
    strlwr(nombre2);
    nombre2[0] = toupper(nombre2[0]);
    for(int i = 0; i<MAX; i++)
    {
        if(nombre2[i]==' ')
        {
            nombre2[i+1]=toupper(nombre2[i+1]);
        }
    }
    printf("su nombre es \"%s\"",nombre2);

}



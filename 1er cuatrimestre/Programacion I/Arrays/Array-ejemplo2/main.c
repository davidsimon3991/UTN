#include <stdio.h>
#include <stdlib.h>

#define TAM 5
#define CANT 4

int main()
{
    int numeros[TAM];
    int num;
    int indice;

    //carga secuencial
    for(int i=0; i<CANT; i++)
    {
        numeros[i] = 0;
    }
//carga de numeros
    for(int i = 0; i<CANT; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", & num);
        printf("ingrese posicion[0-4]: ");
        scanf("%d", & indice);
        numeros[indice]+= num;

    }
    //muestro array
    for(int i = 0; i<CANT; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}

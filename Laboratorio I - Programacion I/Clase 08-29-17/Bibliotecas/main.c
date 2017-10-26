#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "Caracteres.h"

int main()
{

    char letra;

    printf("Ingrese una letra: ");
    letra = getche();
    while(verificarLetra(letra)==0)
    {
        printf("Reingrese una letra: ");
        letra = getche();
    }

    return 0;
}



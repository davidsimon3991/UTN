#include "Caracteres.h"

int verificarLetra(char caracter)
{

    int esLetra = 1;
    caracter = tolower(caracter);
    if(caracter>122 || caracter<97)
    {
        esLetra = 0;
    }

    return esLetra;
}



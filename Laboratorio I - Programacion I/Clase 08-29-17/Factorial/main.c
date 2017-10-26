#include <stdio.h>
#include <stdlib.h>
int factorial(int);
int main()
{
    int numero = 6;

    int elFactorial = factorial(numero);

    printf("El factorial es: %d\n", elFactorial);
    return 0;
}

int factorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        return 1;
    }

    resultado = numero * factorial(numero-1);

    return resultado;


}

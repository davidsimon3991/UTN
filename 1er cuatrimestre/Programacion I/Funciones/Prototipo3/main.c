#include <stdio.h>
#include <stdlib.h>

int sumar(int,int);

int main()
{
    int rdo, num1, num2;
    printf("ingrese numero: ");
    scanf("%d",&num1);
    printf("ingrese otro numero: ");
    scanf("%d",&num2);
    rdo = sumar(num1,num2);
    printf("\n el resultado es: %d", rdo);

    return 0;
}

int sumar(int x, int y)
{
    int resultado;
    resultado = x+y;
    return resultado;
}

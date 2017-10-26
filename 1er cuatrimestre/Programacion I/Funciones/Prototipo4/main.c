#include <stdio.h>
#include <stdlib.h>

int sumar();

int main()
{
    int resultado;
    resultado = sumar();
    printf("\n el resultado es: %d", resultado);
    return 0;
}
int sumar()
{
    int num1,num2,rdo;
    printf("ingrese un numero: ");
    scanf("%d", & num1);
    printf("ingrese otro numero: ");
    scanf("%d", & num2);
    rdo = num1+num2;
    return rdo;
}

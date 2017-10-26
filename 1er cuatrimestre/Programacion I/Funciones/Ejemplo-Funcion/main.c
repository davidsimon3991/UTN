#include <stdio.h>
#include <stdlib.h>



int main()
{
    int num1, num2, resultado;

    printf("Ingrese un numero: ");
    scanf("%d", & num1);
    printf("Ingrese otro numero: ");
    scanf("%d", & num2);

    resultado = num1+num2;
    printf("El resultado es: %d \n", resultado);
    system("pause");

    return 0;
}

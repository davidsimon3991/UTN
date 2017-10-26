#include <stdio.h>
#include <stdlib.h>

void sumar();
int main()
{
    sumar();
    return 0;
}
void sumar()
{
    int num1, num2, resultado;

    printf("Ingrese un numero: ");
    scanf("%d", & num1);
    printf("Ingrese otro numero: ");
    scanf("%d", & num2);

    resultado = num1+num2;
    printf("El resultado es: %d \n", resultado);
    system("pause");


}


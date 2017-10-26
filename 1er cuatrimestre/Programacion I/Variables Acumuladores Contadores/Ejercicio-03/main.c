#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int var1, var2, rdo, potencia;

    printf("Ingrese el 1Åã numero: ");
    scanf("%d", & var1);
        while(var1 ==0)
            {
                printf("Debe ser distinto a 0: ");
                scanf("%d", & var1);
            }
    printf("Ingrese el 2Åã numero: ");
    scanf("%d", & var2);
        while(var2 ==0)
            {
                printf("Debe ser distinto a 0: ");
                scanf("%d", & var2);
            }

    rdo = var1 * var2;
    potencia = pow(var1,2);

    system("cls");

    printf("1Åã numero ingresado: %d\n", var1);
    printf("2Åã numero ingresado: %d\n", var2);
    printf("producto entre ambos numeros es: %d\n", rdo);
    printf("la potencia cuadrada de %d es: %d", var1, potencia);

    system("pause");
    return 0;
}

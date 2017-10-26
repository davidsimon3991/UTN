#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1, var2,rdo;
    printf("ingrese primer numero: ");
    scanf("%d", & var1);
    printf("ingrese segundo numero: ");
    scanf("%d", & var2);

    system("cls");

    rdo = var1 - var2;

    if(rdo <0)
    {
        printf("valor negativo. Resultado: %d \n", rdo);
    }
    else
    {
        printf("valor positivo. Resultado: %d \n", rdo);
    }

    system("pause");
    return 0;
}

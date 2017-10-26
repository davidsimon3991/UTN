#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int positivos = 0;
    int negativos = 0;

    for(int i =0; i<10; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&numero);
        if(numero>0)
        {
            positivos++;
        }
        else if(numero<0)
        {
            negativos++;
        }

    }
    printf("\nCantidad de nros positivos: %d\nCantidad de nros negativos: %d", positivos,negativos);

    return 0;
}

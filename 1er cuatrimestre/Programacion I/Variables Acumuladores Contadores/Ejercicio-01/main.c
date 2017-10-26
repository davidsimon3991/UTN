#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i;
    int total= 0;
    float promedio;


    for(i = 0; i<5;i++)
        {
            printf("ingrese numero: \n");
            scanf("%d",&numero);
            total += numero;
        }
    promedio = (float)total / 5;
    printf("el promedio es %.2f", promedio);


    return 0;
}

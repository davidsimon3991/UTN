#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numeros[5];
    printf("[    ARRAYS  ]\n\n");

    for(int i =0; i<5; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", & numeros[i]);
    }
    printf("\n\n[    ARRAYS  ]\n\n");
    for (int i = 0; i<5; i++)
    {
        printf("%d ", numeros[i]);
    }



    printf("\n\n[    ARRAYS INVERSO  ]\n\n");

    for(int i =4; i>=0; i--)
    {
        printf("%d ", numeros[i]);
    }






    return 0;
}


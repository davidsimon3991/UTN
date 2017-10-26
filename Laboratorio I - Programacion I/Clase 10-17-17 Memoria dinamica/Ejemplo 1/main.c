#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int * pint;
    int * paux;

    pint = (int*) calloc(T, sizeof(int*));
    for(int i=0; i<T; i++)
    {
        printf("%d\n",*(pint+i));
    }
    pint = (int*) malloc(sizeof(int)*T);/**< asigno espacio en memoria del heap para el puntero*/
    if(pint==NULL)
    {
        printf("\nNo hay espacio en memoria!!");
        exit(0);
    }
    else
    {

        for(int i=0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pint+i);
        }
        printf("\nNumeros ingresados\n");
        for(int i=0; i<T; i++)
        {
            printf("%d\n",*(pint+i));
        }
    }

    paux= (int*)realloc(pint,sizeof(int)*(T+5));/**< asigno mas memoria, se usa auxiliar para evitar perder datos*/

    if(paux==NULL)
    {
        printf("\nNo hay mas espacio para reasignar!");
    }
    else
    {
        pint = paux;
        for(int i=T; i<T+5; i++)
        {
            printf("Ingrese nuevos numeros:");
            scanf("%d", pint+i);
        }

        printf("\nNumeros ingresados\n");
        for(int i=0; i<T+5; i++)
        {
            printf("%d\n",*(pint+i));
        }
    }

    free(pint);/**< para liberar la asignacion del puntero a la dir de memoria del heap cuando ya no se lo utiliza*/
    free(paux);

    return 0;
}

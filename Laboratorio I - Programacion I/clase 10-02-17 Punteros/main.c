#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int*p;
    p=&n;

    printf("%d\n",p);
    printf("%d\n",p-1);
    printf("%d\n",p++);
    /*
    int numero=99;
    int*pInt;

    pInt = &numero;

    printf("Valor del numero: %d\n",numero);
    printf("Direcccion de memoria del numero: %p\n",&numero);
    printf("Direccion a la que apunta puntero:%p\n",pInt);
    printf("Direccion del puntero:%p\n",&pInt);
    printf("Valor que tiene a la direccion que apunta puntero:%d\n",*pInt);
    */

    return 0;
}

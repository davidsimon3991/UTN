#include <stdio.h>
#include <stdlib.h>

void ejemploDePuntero();
void ejemploArray();
void ejemploConAuxiliar();
int main()
{
    int opcion;
    printf("1. ejemplo de puntero\n");
    printf("2. ejemplo con array\n");
    printf("3. ejemplo con auxiliar\n");
    scanf("%d",&opcion);
    switch(opcion)
    {
    case 1:
        ejemploDePuntero();
        break;
    case 2:
        ejemploArray();
        break;
    case 3:
        ejemploConAuxiliar();
        break;
    }
    return 0;
}
void ejemploDePuntero()
{
    int*num;
    num=(int*)malloc(sizeof(int));
    if(num==NULL)
    {
        printf("no hay espacio en disco");
        exit(1);
    }
    printf("ingrese numero:");
    scanf("%d",num);

    printf("numero ingresado: %d", *num);
}
void ejemploArray()
{
    int*num;
    num=(int*)malloc(sizeof(int)*5);
    if(num==NULL)
    {
        printf("no hay espacio en disco");
        exit(1);
    }
    for(int i=0; i<5; i++)
    {
        printf("ingrese numero:");
        scanf("%d",num+i);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *(num+i));
    }

}
void ejemploConAuxiliar()
{
    int*num;
    int*aux;
    num=(int*)malloc(sizeof(int)*5);
    if(num==NULL)
    {
        printf("no hay espacio en disco");
        exit(1);
    }
    for(int i=0; i<5; i++)
    {
        printf("ingrese numero:");
        scanf("%d",num+i);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *(num+i));
    }

    aux = (int*)realloc(num,10*sizeof(int));
    if(aux!=NULL)
        num=aux;
    else
        printf("no hay espacio");

    for(int i=5; i<10; i++)
    {
        printf("ingrese numero:");
        scanf("%d",num+i);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\n", *(num+i));
    }
free(num);
}


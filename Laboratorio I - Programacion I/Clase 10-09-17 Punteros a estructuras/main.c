#include <stdio.h>
#include <stdlib.h>

int cargar(char*, int);
int mostrar(char*, int);
int ordenar(char*, int);
void swap(char*, char*);

int main()
{
    char variable[5];
    char* p=NULL;
    int cargo,muestro,ordeno;
    int opcion;
    p=variable;

    do
    {
        system("cls");
        printf("1.Alta\n2.Mostrar\n3.Ordenar\n0.Salir");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            cargo = cargar(p, 5);
            if(cargo)
            {
                printf("\nAlta exitosa");
            }
            else
            {
                printf("\nNo hay espacio en memoria!");
            }
            break;
        case 2:
            muestro = mostrar(variable,5);
            if(muestro==0)
            {
                printf("\nNo hay nada para mostrar");
            }
            break;
        case 3:
            ordeno=ordenar(variable,5);
            if(ordeno)
            {
                printf("\nOrdenado");
            }
            else
            {
                printf("\nNo se ordeno nada");
            }
            break;
        case 0:
            opcion=0;
            break;
        default:
            printf("\nOpcion no encontrada");
        }
        system("pause");
    }
    while(opcion!=0);

    return 0;
}


int cargar(char* letras, int t)
{
    int i;
    int retorno = 0;
    if(letras!=NULL)
    {
        for(i=0; i<t; i++)
        {
            printf("Ingrese una letra:" );
            fflush(stdin);
            scanf("%c", letras+i);
        }
        retorno=1;
    }

    return retorno;

}
int mostrar(char* letras, int t)
{
    int i;
    int retorno=0;
    if(letras!=NULL)
    {
        for(i=0; i<t; i++)
        {
            printf("%c", *(letras+i));
        }
        retorno=1;
    }
    return retorno;
}
int ordenar(char* letras, int t)
{
    int retorno=0;
    char auxChar;
    int i,j;
    for(i=0; i<t-1; i++)
    {
        for(j=i+1; j<t; j++)
        {
            if(*(letras+i)>*(letras+j))
            {
                swap(letras+i, letras+j);
                retorno=1;
            }
        }
    }
    return retorno;
}

void swap(char* letra1, char* letra2)
{
    char auxChar;
    auxChar = *letra1;
    *letra1 = *letra2;
    *letra2 = auxChar;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idSerie;
    char titulo[20];
    int temporadas;
    char genero[20];
    int estado;
} eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int estado;

} eCliente;

typedef struct
{
    int idCliente;
    int idSerie;
} eClientes_Series;

typedef struct//Para el punto 5
{
    int idSerie;
    int cont;
} eLoser;

void punto1(eSerie [],eCliente [],int, int );
void punto2(eSerie[],eCliente[],eClientes_Series[],int, int, int);
void punto3(eSerie[],eCliente[],eClientes_Series[],int, int, int);
void punto4(eSerie[],eCliente[],eClientes_Series[],int, int, int);


int main()
{
    eSerie series[5];
    eCliente clientes[10];
    eClientes_Series cys[20];

    cargarSeries(series);
    cargarClientes(clientes);
    cargarCliente_Serie(cys);

    int opcion;
    int seguir = 's';


    do
    {

        printf("\n\t[NERDFLIX]\n\n");
        printf("1.Mostrar todos los datos \n");
        printf("2.Mostrar clientes con sus respectivas series \n");
        printf("3.Cantidad de observadores de cada serie \n");
        printf("4.Cantidad de observadores por una serie en particular \n");
        printf("5.La serie menos popular \n");
        printf("6.Mostrar lo que miran los usuarios 'JUAN' \n");
        printf("7.Salir \n");
        printf("\nIngrese opcion: ");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            //1- mostrar cada uno
            punto1(series,clientes,5,10);
            break;
        case 2:
            //2- mostrar clientes con sus series
            punto2(series,clientes,cys,5, 10, 20);
            break;
        case 3:
            //3- por cada serie los clientes que la estan viendo
            punto3(series,clientes,cys,5,10,20);
            break;
        case 4:
            //4- todos los clientes que ven una serie en particular (El usuario ingresa el titulo)
            punto4(series,clientes,cys,5,10,20);
            break;
        case 5:
            //5- La serie menos popular
            break;
        case 6:
            //6- Todas las series que ven los clientes de nombre "Juan"
            break;
        case 7:
            seguir='n';
            break;
        default:
            system("cls");
            printf("\nOpcion no encontrada \n");
            break;
        }


    }
    while(seguir=='s');
    return 0;
}

void cargarSeries(eSerie series[])
{
    int idSerie[5]= {100,101,102,103,104};
    int estado[5]= {1,1,1,1,1};
    char titulo[5][30]= {"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]= {9,7,7,6,1};
    char genero[5][30]= {"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;
    for(i=0; i<5; i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }

}
void cargarClientes(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};

    int i;

    for(i=0; i<10; i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];

    }

}

void cargarCliente_Serie(eClientes_Series clientesSeries[])
{

    int cliente[20] = {1,1,1,2,2,3,4,4,5,5,5,7,8,8,8,9,10,10,10,10};
    int serie[20]= {101,102,103,104,103,101,101,102,104,101,101,101,101,102,103,102,101,103,102,104};
    int i;

    for(i=0; i<20; i++)
    {
        clientesSeries[i].idCliente=cliente[i];
        clientesSeries[i].idSerie = serie[i];
    }

}
void punto1(eSerie s[],eCliente c[],int tamS, int tamC)
{
    printf("\n[SERIES DISPONIBLES]\n");
    printf("Id \tTitulo \tTemporadas \tGenero\n");
    printf("------------------------------------------------------------\n");
    for(int i =0; i<tamS; i++)
    {
        printf("%d \t%s \t    %d \t\t%s \n", s[i].idSerie,s[i].titulo, s[i].temporadas, s[i].genero);
    }
    printf("\n[DATOS DE CLIENTES]\n");
    printf("Id \tNombre\n");
    printf("----------------------------------\n");
    for(int i =0; i<tamC; i++)
    {
        printf("%d \t%s \n", c[i].idCliente,c[i].nombre);
    }
    system("pause");
    system("cls");
}
void punto2(eSerie s[],eCliente c[],eClientes_Series cs[],int tamS, int tamC, int tamCS)
{
    for(int i =0; i< tamC; i++)
    {
        printf("\n%s esta mirando:\n", c[i].nombre);
        for(int j=0; j< tamCS; j++)
        {
            if(cs[j].idCliente == c[i].idCliente)
            {
                for(int k = 0; k<tamS; k++)
                {
                    if(cs[j].idSerie ==s[k].idSerie)
                    {
                        printf("%s\n", s[k].titulo);
                    }
                }
            }
        }
    }
    system("pause");
    system("cls");
}
void punto3(eSerie s[],eCliente c[],eClientes_Series cs[],int tamS, int tamC, int tamCS)
{
    for(int i =0; i< tamS; i++)
    {
        printf("\nClientes que miran %s:\n", s[i].titulo);
        for(int j=0; j< tamCS; j++)
        {
            if(cs[j].idSerie == s[i].idSerie)
            {
                for(int k = 0; k<tamC; k++)
                {
                    if(cs[j].idCliente ==c[k].idCliente)
                    {
                        printf("%s\n", c[k].nombre);
                    }
                }
            }
        }
    }
    system("pause");
    system("cls");

}
void punto4(eSerie s[],eCliente c[],eClientes_Series cs[],int tamS, int tamC, int tamCS)
{
    char auxSerie[10];
    printf("SERIES DISPONIBLES\n");
    for(int i = 0; i<tamS; i++)
    {
        printf("%s\n",s[i].titulo);
    }
    printf("ingrese serie: ");
    fflush(stdin);
    gets(auxSerie);

    for(int i =0; i< tamS; i++)
    {
        if(strcmp(auxSerie, s[i].titulo))
        {
            printf("hola\n");
        }

    }
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "Funciones.h"

#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTRO 4




void iniciarClientes(eCliente cl[],int tam)
{
    for(int i = 0; i<tam; i++)
    {
        cl[i].estado =0;
    }
}

void iniciarMarcas(eMarca m[])
{


}

void altaCliente(eCliente cl[],int tam)
{
    int flag =1;
    int existente;
    int idNuevo;
    char nombreNuevo[50];
    int tarjetaNueva;

    for(int i =0; i<tam; i++)
    {
        if(cl[i].estado == 0)
        {
            printf("ingrese ID:");
            scanf("%d",&cl[i].id);
            idNuevo = cl[i].id;
            existente = buscarCliente(cl,tam,idNuevo);

            if(existente ==-1)
            {
                printf("Ya existe un cliente con ese ID");
                system("pause");
            }
            else
            {
                printf("Ingrese nombre y apellido:");
                fflush(stdin);
                gets(nombreNuevo);
                ajustarNombre(nombreNuevo,50);
                strcpy(cl[i].nombreApellido,nombreNuevo);

                printf("Ingrese direccion: ");
                fflush(stdin);
                gets(cl[i].direccion);

                printf("Ingrese tarjeta:");
                scanf("%d",&tarjetaNueva);
                controlarTarjeta(tarjetaNueva);
                cl[i].tarjetaCredito = tarjetaNueva;

                cl[i].estado =1;
                flag=0;

            }
            break;
        }
    }
    if(flag)
    {
        printf("No hay espacio");
    }

}
int buscarCliente(eCliente cl[], int tam, int idAux)
{
    int flag=1;
    int encontrado =-1;
    for(int i = 0; i<tam; i++)
    {
        if(cl[i].estado==1 && idAux == cl[i].id)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        encontrado =0;
    }
    return encontrado;

}

char ajustarNombre(char x[], int ancho)
{
    strlwr(x);
    x[0]=toupper(x[0]);
    for(int i =0; i<ancho; i++)
    {
        if(x[i]==' ')
        {
            x[i+1]=toupper(x[i+1]);
        }
    }
    return x[ancho];
}

int controlarTarjeta(int tc)
{
    while(isalpha(tc))
    {
        printf("Error. Ingrese solo numeros: ");
        scanf("%d",&tc);
    }
    return tc;
}

void modificarCliente(eCliente cl[],int tam)
{
    int idBuscado;
    char rta;
    int flag =1;
    printf("Ingrese el id del cliente: ");
    scanf("%d",&idBuscado);

    for(int i =0; i<tam; i++)
    {
        if(cl[i].estado ==1 && idBuscado == cl[i].id)
        {
            printf("DATOS DEL CLIENTE\n Nombre y apellido:%s\tID:%d\tNumero deTarjeta:%d\n", cl[i].nombreApellido,cl[i].id,cl[i].tarjetaCredito);
            printf("desea modificar la tarjeta del cliente %s? S/N", cl[i].nombreApellido);
            rta = getche();
            rta = toupper(rta);
            if(rta=='S')
            {
                printf("Ingrese nueva tarjeta de credito: ");
                scanf("%d", &cl[i].tarjetaCredito);
                printf("La tarjeta ha sido modificada exitosamente");
            }
            else
            {
                printf("Accion cancelada. No se ha modificado la tarjeta del cliente");
            }
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("No existe cliente con el id %s",idBuscado);
    }

}

void mostrarCliente(eCliente cl[],int tam)
{
    system("cls");
    for(int i= 0; i<tam; i++)
    {
        if(cl[i].estado ==1)
        {
            printf("ID:%d\tNombre:%s\tDireccion:%s\tT.Credito:%d\n",cl[i].id,cl[i].nombreApellido,cl[i].direccion,cl[i].tarjetaCredito);
        }
    }

    system("pause");
}

void altaVehiculo(eAuto vh[],eCliente cl[],int tamVH,int tamCL)
{
    int flag=1;
    int idAux;
    int clienteEncontrado;
    for(int i =0; i<tamVH; i++)
    {
        for(int j=0; j<tamCL; j++)
        {
            if(vh[i].estado ==0)
            {
                printf("ingrese patente del auto: ");
                fflush(stdin);
                gets(vh[i].patente);

                printf("ingrese marca del auto: ");
                scanf("%d",&vh[i].marca);
                printf("ingrese ID del conductor:");
                scanf("%d",& idAux);
                clienteEncontrado = buscarCliente(cl,tamCL,idAux);

                if(clienteEncontrado ==-1)
                {
                    printf("ingrese hora de ingreso:");
                    scanf("%d",&vh[i].horaEntrada);
                    vh[i].estado =1;
                }
                else
                {
                    printf("Error. No hay cliente con ese ID. Accion cancelada.");
                    vh[i].estado =0;
                    system("pause");
                }

            }
            flag =0;
            break;
        }
    }
    if(flag)
    {
        printf("No hay vacante");
    }
}

void ordenarXnombre(eCliente cl[],int tam)
{
    char aux[20];
    char auxDir[70];
    int auxID;
    int auxTC;
    for(int i=0; i<tam-1; i++)
    {
        for(int j = i+1; j<tam; j++)
        {
            if(cl[i].estado==1 && cl[j].estado==1)

            {
                if(strcmp(cl[i].nombreApellido,cl[j].nombreApellido)>0)
                {
                    strcpy(aux,cl[i].nombreApellido);
                    strcpy(cl[i].nombreApellido,cl[j].nombreApellido);
                    strcpy(cl[j].nombreApellido,aux);

                    auxID = cl[i].id;
                    cl[i].id = cl[j].id;
                    cl[j].id= auxID;

                    strcpy(auxDir,cl[i].direccion);
                    strcpy(cl[i].direccion,cl[j].direccion);
                    strcpy(cl[j].direccion,auxDir);

                    auxTC = cl[i].tarjetaCredito;
                    cl[i].tarjetaCredito=cl[j].tarjetaCredito;
                    cl[j].tarjetaCredito=auxTC;
                }
            }
        }

    }
    printf("\n\t\t[LISTA ORDENADA POR NOMBRES]\n");
    for(int i =0; i<tam; i++)
    {
        if(cl[i].estado==1)
        {
           printf("ID:%d\tNombre:%s\tDireccion:%s\tT.Credito:%d\n",cl[i].id,cl[i].nombreApellido,cl[i].direccion,cl[i].tarjetaCredito);
        }
    }

}

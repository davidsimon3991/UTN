#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "lib.h"

void iniciarEstados(eCliente cliente[], eAlquiler alquiler[],int tamcl,int tamalq)
{
    for(int i=0; i<tamcl; i++)
    {
        cliente[i].inhabilitado=1;
        cliente[i].alquileres=0;
    }
    for(int i=0; i<tamalq; i++)
    {
        alquiler[i].alquilado=0;
    }
}

void hardcodeoClientes(eCliente cliente[],int tamcl)
{
    int dni[3]= {37999444,36444555,39123456};
    char nombres[][30]= {"Juan","Marcela","Viviana"};
    char apellidos[][30]= {"Palomo","Tower","Sarnosa"};

    for(int i=0; i<tamcl; i++)
    {
        cliente[i].inhabilitado=0;
        cliente[i].id=i;
        strcpy(cliente[i].apellido,apellidos[i]);
        strcpy(cliente[i].nombre,nombres[i]);
        cliente[i].dni = dni[i];
    }
}
void hardcodeoMaquinas(eMaquina maquina[],int tam)
{
    char nombres[][30]= {"Amoladora","Mezcladora","Taladro"};

    for(int i=0; i<tam; i++)
    {
        strcpy(maquina[i].nombre,nombres[i]);
        maquina[i].id=i;
    }
    for(int i=0; i<tam; i++)
    {
        printf("\n%d %s",maquina[i].id, maquina[i].nombre);
    }

}

void hardcodeoAlquileres(eAlquiler alquiler[],int tam)
{
    int idclientes[]= {1,1,2};
    int idmaquinas[]= {0,2,1};
    char operadores[][30]= {"Gustavo","Lucas","Adolfo"};
    int horas[]= {2,4,6};

    for(int i=0; i<tam; i++)
    {
        alquiler[i].idCliente = idclientes[i];
        alquiler[i].idEquipo = idmaquinas[i];
        strcpy(alquiler[i].operador,operadores[i]);
        alquiler[i].tiempoEstimado = horas[i];
        alquiler[i].tiempoReal=0;
        alquiler[i].alquilado=1;

    }
}
void altaCliente(eCliente cliente[],int tamcl)
{
    int flag=0;

    for(int i=0; i<tamcl; i++)
    {
        if(cliente[i].inhabilitado==1)
        {
            flag = 1;
            cliente[i].id=i;
            cliente[i].inhabilitado=0;
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(cliente[i].nombre);
            printf("Ingrese apellido:");
            fflush(stdin);
            gets(cliente[i].apellido);
            printf("Ingrese DNI:");
            scanf("%d",&cliente[i].dni);
            break;

        }
    }
    if(flag==0)
    {
        printf("\nNo hay espacio para mas clientes");
    }
}

void modificarCliente(eCliente clientes[],int tam)
{
    int flag =0;
    int auxInt;
    char auxChar;
    char auxNombre[30];
    char auxApellido[30];
    mostrarClientes(clientes,tam);

    printf("\nIngrese id del cliente a modificar: ");
    scanf("%d",&auxInt);

    for(int i=0; i<tam; i++)
    {
        if(clientes[i].inhabilitado==0 && clientes[i].id == auxInt)
        {
            flag =1;
            printf("\n%s %s %d", clientes[i].apellido, clientes[i].nombre, clientes[i].dni);

            printf("\nIngrese nuevo nombre:");
            fflush(stdin);
            gets(auxNombre);
            printf("\nIngrese nuevo apellido:");
            fflush(stdin);
            gets(auxApellido);
            printf("\nDesea modificarlo?S/N");
            auxChar = getch();
            auxChar = toupper(auxChar);

            if(auxChar=='S')
            {
                strcpy(clientes[i].nombre,auxNombre);
                strcpy(clientes[i].apellido,auxApellido);
                printf("\nCliente ha sido modificado");
            }
            else
            {
                printf("\nCliente  sin modificar");
            }
            break;

        }
    }
    if(flag==0)
    {
        printf("\nNo se encontro al cliente");
    }
}

void bajaCliente(eCliente cliente[],int tam)
{
    int flag =0;
    int auxInt;
    char auxChar;
    mostrarClientes(cliente,tam);

    printf("Ingrese el id del cliente:");
    scanf("%d",&auxInt);

    for(int i=0; i<tam; i++)
    {
        if(cliente[i].inhabilitado==0 && cliente[i].id == auxInt)
        {
            flag=1;
            printf("\n%s %s %d",cliente[i].apellido,cliente[i].nombre,cliente[i].dni);
            printf("Desea eliminar? S/N");
            auxChar = getch();
            auxChar = toupper(auxChar);

            if(auxChar=='S')
            {
                cliente[i].inhabilitado=1;
                printf("\nCliente ha sido dado de baja ");
            }
            else
            {
                printf("\nCliente  sin modificar");
            }
            break;

        }
    }

    if(flag==0)
    {
        printf("\nNo se encuentra el cliente");
    }
}


void mostrarClientes(eCliente cliente[],int tamcl)
{
    for(int i=0; i<tamcl; i++)
    {
        if(cliente[i].inhabilitado==0)
        {
            printf("%d %s %s %d\n", cliente[i].id,cliente[i].apellido,cliente[i].nombre,cliente[i].dni);
        }
    }
}

void mostrarMaquinas(eMaquina maquina[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%d %s\n", maquina[i].id,maquina[i].nombre);
    }
}
void mostrarAlquileres(eAlquiler alquiler[],eCliente cliente[],eMaquina maquina[],int tam_alq,int tam_cl,int tam_maq)
{
    for(int i=0; i<tam_alq; i++)
    {
        if(alquiler[i].alquilado==1)
        {
            for(int j=0; j<tam_cl; j++)
            {
                if(cliente[j].inhabilitado==0 && cliente[j].id == alquiler[i].idCliente)
                {
                    for(int k=0; k<tam_maq; k++)
                    {
                        if(maquina[k].id == alquiler[i].idEquipo)
                        {
                            printf("Cliente:%s %s \nMaquina:%s, Operador:%s \n Horas de alquiler: %d\n",cliente[j].nombre, cliente[j].apellido, maquina[k].nombre,alquiler[i].operador,alquiler[i].tiempoEstimado);
                        }
                    }
                }
            }
        }
        printf("\n");
    }
}


void mostrarClientesAlquilando(eAlquiler alquiler[],eCliente cliente[],eMaquina maquina[],int tam_alq,int tam_cl,int tam_maq)
{
    for(int i=0; i<tam_cl; i++)
    {
        if(cliente[i].inhabilitado==0)
        {
            printf("El cliente %s %s esta alquilando:\n",cliente[i].apellido,cliente[i].nombre);
            for(int j=0; j<tam_alq; j++)
            {
                if(alquiler[j].alquilado==1 && alquiler[j].idCliente == cliente[i].id)
                {
                    for(int k=0; k<tam_maq; k++)
                    {
                        if(alquiler[j].idEquipo == maquina[k].id)
                        {
                            printf("%s,\tHrs estimadas: %d\tHrs reales: %d\n",maquina[k].nombre, alquiler[i].tiempoEstimado,alquiler[j].tiempoReal);
                        }
                    }
                }
            }
        }
        printf("\n");
    }
}

void mostrarMayorAlquilante(eAlquiler alquiler[],eCliente cliente[], eMaquina maquina[],int tam_alq,int tam_cl, int tam_maq)
{
    int max;
    int flag=0;
    for(int i=0;i<tam_cl;i++)
    {
        if(cliente[i].inhabilitado==0)
        {
            for(int j=0;j<tam_alq;j++)
            {
                if(alquiler[j].idCliente == cliente[i].id)
                {
                    for(int k=0;k<tam_maq;k++)
                    {
                        if(alquiler[j].idEquipo == maquina[k].id)
                        {
                            cliente[i].alquileres++;
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<tam_cl;i++)
    {
        if(flag == 0 || cliente[i].alquileres>max)
        {
            max = cliente[i].alquileres;
            flag ==1;
        }
    }
    for(int i=0;i<tam_cl;i++)
    {
        if(max = cliente[i].alquileres)
        {
            printf("\n%s %s tiene %d alquileres\n", cliente[i].apellido, cliente[i].nombre,max);
            break;
        }
    }
}


void nuevoAlquiler(eAlquiler alquiler[],eCliente cliente[],eMaquina maquina[],int tam_alq,int tam_cl,int tam_maq)
{
    int flag=0;

    for(int i=0; i<tam_alq; i++)
    {
        if(alquiler[i].alquilado==0)
        {
            flag =1;
            alquiler[i].alquilado=1;

            mostrarClientes(cliente,tam_cl);

            printf("Ingrese id de cliente:");
            scanf("%d",& alquiler[i].idCliente);

            mostrarMaquinas(maquina,tam_maq);

            printf("Ingrese id de maquina:");
            scanf("%d", & alquiler[i].idEquipo);
            printf("Ingrese tiempo estimado de alquiler: ");
            scanf("%d",& alquiler[i].tiempoEstimado);
            printf("Ingrese nombre de operador:");
            fflush(stdin);
            gets(alquiler[i].operador);
            break;
        }
    }
    if(flag==0)
    {
        printf("\nNo se pueden hacer mas alquileres");
    }

}

void finalizarAlquiler(eAlquiler alquiler[],eCliente cliente[],eMaquina maquina[],int tam_alq,int tam_cl,int tam_maq)
{
    int flag =0;
    int auxInt;
    char auxChar[30];
    char opcion;
    mostrarAlquileres(alquiler,cliente,maquina,tam_alq,tam_cl,tam_maq);

    printf("\nIngrese apellido de cliente:");
    fflush(stdin);
    gets(auxChar);
    for(int i=0; i<tam_cl; i++)
    {
        if(cliente[i].inhabilitado==0 && stricmp(cliente[i].apellido,auxChar)==0)
        {
            for(int j=0; j<tam_alq; j++)
            {
                if(alquiler[j].alquilado==1 && alquiler[j].idCliente == cliente[i].id)
                {
                    for(int k=0; k<tam_maq; k++)
                    {
                        if(maquina[k].id == alquiler[j].idEquipo)
                        {
                            flag=1;
                            printf("\nIngrese horas reales del alquiler: ");
                            scanf("%d",&auxInt);

                            printf("\nDesea finalizar el alquiler?S/N:");
                            fflush(stdin);
                            opcion = getch();
                            opcion = toupper(opcion);
                            if(opcion=='S')
                            {
                                alquiler[j].alquilado==0;
                                alquiler[j].tiempoReal=auxInt;
                                printf("\nAlquiler finalizado");

                            }
                            else
                            {
                                printf("\nNo se modifico el alquiler");

                            }
                            break;
                        }
                    }
                }
            }
        }
    }

    if(flag ==0)
    {
        printf("\nNo se encuentra el alquiler");
    }
}


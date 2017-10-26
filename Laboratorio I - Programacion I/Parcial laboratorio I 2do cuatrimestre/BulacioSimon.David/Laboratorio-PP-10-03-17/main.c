#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    eCliente clientes[TAM_CL];
    eMaquina maquinas[TAM_MQ];
    eAlquiler alquileres[TAM_ALQ];

    iniciarEstados(clientes,alquileres,maquinas,TAM_CL,TAM_ALQ,TAM_MQ);
    hardcodeoClientes(clientes,3);
    hardcodeoMaquinas(maquinas,3);
    hardcodeoAlquileres(alquileres,3);

    char opcion='s';
    int numero;
    do
    {
        system("cls");
        printf("Maquinarias para todos");
        printf("\n1.Alta del cliente\n2.Modificar datos del cliente\n3.Baja del cliente\n");
        printf("\n4.Nuevo alquiler\n5.Fin del alquiler\n6.Informar\n7.Mostrar clientes\n8.Mostrar clientes y alquileres");
        printf("\n12Salir\n\n\tEliga una opcion: ");
        scanf("%d",&numero);

        switch(numero)
        {
        case 1:
            altaCliente(clientes,TAM_CL);
            break;
        case 2:
            modificarCliente(clientes,TAM_CL);
            break;
        case 3:
            bajaCliente(clientes,TAM_CL);
            break;
        case 4:
            nuevoAlquiler(alquileres,clientes,maquinas,TAM_ALQ,TAM_CL,TAM_MQ);
            break;
        case 5:
            finalizarAlquiler(alquileres,clientes,maquinas,TAM_ALQ,TAM_CL,TAM_MQ);
            break;
        case 6:
            mostrarClientesAlquilando(alquileres,clientes,maquinas,TAM_ALQ,TAM_CL,TAM_MQ);
            mostrarMayorAlquilante(alquileres,clientes,maquinas,TAM_ALQ,TAM_CL,TAM_MQ);
            promedioHoras(alquileres,TAM_ALQ);
            break;
        case 7:
            mostrarClientes(clientes,TAM_CL);
            break;
        case 8:
            mostrarAlquileres(alquileres,clientes,maquinas,TAM_ALQ,TAM_CL,TAM_MQ);
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            opcion='n';
            break;

        default:
            printf("\nNo existe esa opcion");
        }
    system("pause");
   } while(opcion=='s');


    return 0;
}

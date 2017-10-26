#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

/**<
Hacer un sistema para un estacionamiento de vehiculos importados.
El programa permitira el ingreso y egreso de autos, así como tambien de disponer de distintos informes de la gestion.
El maximo de autos que guarda es de 20.
Tiene que tener el siguiente menu:

    1- Alta de duenio:
        ingreso
            .idDuenio
            .nombre y apellido
            .direccion
            .numero tarjeta de credito

    2- Modificacion de duenio:
        el duenio notificara el cambio de Tcredito

    3- Ingreso auto:
        registro de la info del auto que entra al estacionamiento
            .patente(string)
            .marca
            .duenio(id numerico)
            .horario entrada(valor numerico solo horas de 24hs)
            (realizar todas la validaciones necesarias)

    4- Egreso del auto:
        calcular tiempo de estadia, a partir del ingreso de horario de salida.
        un auto no puede permanecer de un dia para el otro dentro del estacionamiento
        el egreso debe emitir ticket por pantalla informando:
            .nombre de duenio
            .patente del auto
            .marca
            .valor de estadia

        Los valores de estadia son:
        Marca           precio por hr
        Alpha romeo         $150
        Ferrari             $175
        Audi                $200
        Otros               $250

    5- Informar:
        .listado de autos estacionados con sus duenios, ordenado por hora de entrada y patente
        .todos los propietarios con auto audi
        .recaudacion total por marca
        .recaudacion total del estacionamiento


        nota: no se podra ingresar al punto 2,3,4 y 5 sin antes haber realizado el alta de un auto.

 */

int main()
{
    int opcion;
    char seguir='s';
    eCliente clientes[20];
    eAuto autos[20];
    eMarca marcas[4];
    iniciarClientes(clientes,20);
    iniciarMarcas(marcas);
    do
    {
        printf("[MODELO DE EXAMEN]\n");
        printf("1.Alta de duenio.\n");
        printf("2.Modificacion T.Credito.\n");
        printf("3.Ingreso del auto.\n");
        printf("4.Egreso del auto.\n");
        printf("5.Informe.\n");
        printf("6.Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            altaCliente(clientes,20);
            break;
        case 2:
            modificarCliente(clientes,20);
            break;
        case 3:
            altaVehiculo(autos,clientes,20,20);
            break;
        case 4:
            break;
        case 5:
            mostrarCliente(clientes,20);
            break;
        case 6:
            seguir='n';
            break;
        default:
            printf("Error. Opcion invalida\n");
            system("pause");
            break;
        }
        system("cls");
    }
    while(seguir=='s');
    return 0;
}

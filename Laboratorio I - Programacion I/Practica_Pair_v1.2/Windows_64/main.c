#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

#define TAM 3

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    FILE *p;
    ArrayList * lista = al_newArrayList();
    Employee * empleado1;
    Employee * empleado2;
    Employee * empleado3;

    empleado1=employee_new_withData(34,"Juan","Perez");
    empleado2=employee_new_withData(20,"Maria","Vallejos");
    empleado3=employee_new_withData(100,"Fernando","Machado");

    /*employee_print(empleado1);
    employee_print(empleado2);
    employee_print(empleado3);*/

    lista->add(lista, empleado1);
    lista->add(lista, empleado2);
    lista->add(lista, empleado3);

    lista->pop(lista,1);

    for(int i=0;i<lista->len(lista);i++)
    {
        Employee*e =(Employee*)lista->get(lista,i);
        employee_print(e);
    }

    parserEmployee(p, lista);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{
    printf("%d\t%s,%s\n", this->id,this->lastName,this->name);
}


Employee* employee_new(void)
{
    Employee* returnAux = NULL;

    returnAux = (Employee*) malloc(sizeof(Employee*));

    if(returnAux!=NULL)
    {
        returnAux->id=0;
        strcpy(returnAux->name,"Empleado nombre");
        strcpy(returnAux->lastName,"Empleado apellido");
        returnAux->isEmpty=0;
    }

    return returnAux;

}
Employee* employee_new_withData(int id,char* nombre [],char* apellido[])
{
    Employee* returnAux = NULL;

    returnAux = (Employee*) malloc(sizeof(Employee));

    if(returnAux!=NULL)
    {
        returnAux->id=id;
        strcpy(returnAux->name,nombre);
        strcpy(returnAux->lastName,apellido);
        returnAux->isEmpty=0;
    }

    return returnAux;
}

void employee_delete(Employee* this)
{
    this->isEmpty=1;
}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}



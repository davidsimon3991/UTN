#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "Funciones.h"

void iniciarProgramadores(eProgramador prog[],int tam)
{
    for(int i = 0; i<tam; i++)
    {
        prog[i].estado =0;
    }
}
void iniciarpyp(empleados_proyectos pyp[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        pyp[i].idEmpleado=0;
        pyp[i].idProyecto=-1;
        pyp[i].horasProyecto=0;
        pyp[i].estado=0;
    }

}
void cargarCategorias(eCategoria cat[])
{
    int idCat[3]= {1,2,3};
    char descripcion[3][30]= {"Junior","SemiSenior","Senior"};
    int precioxHora[3]= {50,100,200};

    for(int i=0; i<3; i++)
    {
        cat[i].id = idCat[i];
        strcpy(cat[i].descripcion, descripcion[i]);
        cat[i].pagoxHora = precioxHora[i];
    }
}
void cargarProyectos(eProyecto proy[])
{
    int id[3]= {1,2,3};
    char nombre[5][20]= {"Alfa","Beta","Gamma"};
    for(int i=0; i<3; i++)
    {
        proy[i].idProyecto = id[i];
        strcpy(proy[i].nombre,nombre[i]);
    }
}
void cargarEmpleados(eProgramador prog[])
{
    int id[5]= {10,20,30,40,50};
    char nombre[5][20]= {"Juan","pedro","lucas","maria","patricia"};
    char apellido[5][20]= {"perez","sanchez","mengano","fulano","sosa"};
    int idCat[5]= {1,1,2,3,3};
    int estado[5]= {1,1,1,1,1};

    for(int i=0; i<5; i++)
    {
        prog[i].id = id[i];
        strcpy(prog[i].nombre, nombre[i]);
        strcpy(prog[i].apellido, apellido[i]);
        prog[i].idCategoria=idCat[i];
        prog[i].estado=estado[i];
    }
}
void cargarPYP(empleados_proyectos pyp[])
{
    int idEmp[10]= {10,20,10,30,40,50,50,40,10,20};
    int idProy[10]= {1,2,1,3,2,3,1,2,3,3};
    int hrs[10]= {1,2,1,3,4,5,5,4,1,2};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};

    for(int i=0; i<10; i++)
    {
        pyp[i].idEmpleado = idEmp[i];
        pyp[i].idProyecto = idProy[i];
        pyp[i].horasProyecto = hrs[i];
        pyp[i].estado = estado[i];
    }
}

int buscarProgramador(eProgramador prog[], int tam, int idAux)
{
    int encontrado=-1;
    for(int i = 0; i<tam; i++)
    {
        if(prog[i].estado==1 && idAux == prog[i].id)
        {
            encontrado=1;
            break;
        }
    }
    return encontrado;

}
int buscarProyecto(eProyecto prog[], int tam, int idAux)
{
    for(int i = 0; i<tam; i++)
    {
        if(idAux == prog[i].idProyecto)
        {
            return i;
        }
    }
    return -1;

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

void altaProgramador(eProgramador pro[],eCategoria cat[],int tam, int tamCAT)
{
    int flag=1;
    int existente;
    int idNuevo;
    char nombreNuevo[50];
    char apellidoNuevo[50];


    for(int i = 0; i<tam; i++)
    {
        if(pro[i].estado == 0)
        {
            printf("ingrese ID:");
            scanf("%d",&idNuevo);
            existente = buscarProgramador(pro,tam,idNuevo);

            if(existente ==-1)
            {
                pro[i].id = idNuevo;
                printf("Ingrese nombre:");
                fflush(stdin);
                gets(nombreNuevo);
                ajustarNombre(nombreNuevo,50);
                strcpy(pro[i].nombre,nombreNuevo);

                printf("Ingrese apellido:");
                fflush(stdin);
                gets(apellidoNuevo);
                ajustarNombre(apellidoNuevo,50);
                strcpy(pro[i].apellido,apellidoNuevo);

                mostrarCategorias(cat,tamCAT);

                printf("\nIngrese categoria: ");
                scanf("%d",&pro[i].idCategoria);
                pro[i].estado=1;

            }
            else
            {
                printf("Ya existe un programador con ese ID");
                pro[i].estado =0;
                system("pause");
            }
            flag=0;
            break;
        }
    }

    if(flag)
    {
        printf("No hay espacio para mas programadores.");
        system("pause");
    }

}

void modificarProgramador(eProgramador pro[],eCategoria cat[],int tam, int tamCAT)
{
    int idBuscado;
    int flag =1;
    printf("Ingrese el id del programador: ");
    scanf("%d",&idBuscado);

    for(int i =0; i<tam; i++)
    {
        for(int i =0; i<tamCAT; i++)
        {
            if(pro[i].estado ==1 && idBuscado == pro[i].id)
            {
                printf("DATOS DEL EMPLEADO\n");
                printf("Nombre: %s\tApellido: %s\tID:%d\tCAT:%s\n",pro[i].nombre,pro[i].apellido,pro[i].id, cat[i].descripcion);
                printf("Ingrese nueva categoria:");
                scanf("%d",&pro[i].idCategoria);
                flag = 0;
            }
        }
        break;
    }
    if(flag)
    {
        printf("No existe cliente con el id %s",idBuscado);
    }
}

void borrarProgramador(eProgramador pro[],eCategoria cat[],int tam, int tamCAT)
{
    int idBuscado;
    char rta;
    int flag =1;
    printf("Ingrese el id del programador: ");
    scanf("%d",&idBuscado);

    for(int i =0; i<tam; i++)
    {
        if(pro[i].estado ==1 && idBuscado == pro[i].id)
        {
            printf("DATOS DEL CLIENTE\n");
            printf("Nombre: %s\tApellido: %s\tID:%d\tCAT:%d\n",pro[i].nombre,pro[i].apellido,pro[i].id, cat[i].descripcion);
            printf("desea eliminar al programador? S/N");
            rta = getche();
            rta = toupper(rta);
            if(rta=='S')
            {
                pro[i].estado =0;
                printf("eliminacion exitosa");
            }
            else
            {
                printf("Accion cancelada. No se ha eliminado al programador");
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

void asignarProgramador(eProgramador prog[],eProyecto proy[],empleados_proyectos pyp[],eCategoria cat[],int tamPG, int tamPY,int tamPYP, int tamCAT)
{
    int aux,aux2,flag=0;
    mostrarEmpleados(prog,tamPG);
    printf("\nIngrese ID programador");
    scanf("%d",&aux);

    for(int i=0; i<tamPG; i++)
    {
        if(prog[i].estado==1 && aux==prog[i].id)
        {
            mostrarProyectos(proy,tamPY);
            printf("\nIngrese ID proyecto: ");
            scanf("%d",&aux2);
            for(int j=0; j<tamPY; j++)
            {
                if(aux2==proy[j].idProyecto)
                {
                    for(int k=0; k<tamPYP; k++)
                    {
                        if(pyp[k].estado==0)
                        {
                            printf("Ingrese horas trabajadas en el proyecto %s: ",proy[j].nombre);
                            scanf("%d",&pyp[k].horasProyecto);
                            pyp[k].idEmpleado=aux;
                            pyp[k].idProyecto=aux2;
                            pyp[k].estado=1;
                            flag=1;
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }

    if(flag)
    {
        printf("\nHecho");
    }
    else
    {
        printf("\nNo se pudo asignar");
    }
    printf("\n");
    system("pause");
}

void listarProgramadores(empleados_proyectos pyp[],eProgramador pro[],eProyecto pj[], eCategoria cat[],int tamPYP,int tamPRO,int tamPJ, int tamCAT)
{
    int total=0;
    int flag=1;

    for(int i =0; i< tamPRO; i++)
    {
        for(int n=0; n<tamCAT; n++)
        {
            if(pro[i].estado==1 && pro[i].idCategoria==cat[n].id)
            {
                printf("\nEl %s %s %s esta trabajando en:",cat[n].descripcion, pro[i].nombre,pro[i].apellido);

                for(int j=0; j< tamPYP; j++)
                {
                    if(pyp[j].idEmpleado== pro[i].id)
                    {

                        for(int k = 0; k<tamPJ; k++)
                        {
                            if(pyp[j].idProyecto==pj[k].idProyecto)
                            {
                                printf("\nProyecto %s", pj[k].nombre);
                                total += pyp[j].horasProyecto;
                            }
                        }
                    }

                }
                total = total * cat[n].pagoxHora;
                printf("\nTotal a cobrar por total de proyectos: $%d\n",total);
                total=0;
            }
        }
    }

    printf("\n\n\n");
    system("pause");
}

void listarProyectos(empleados_proyectos pyp[],eProyecto proy[],eProgramador prog[], eCategoria cat[],int tamPYP,int tamPY, int tamPRO, int tamCAT)
{
    for(int n=0; n<tamPY; n++)
    {
        printf("\nEmpleados en proyecto %s:\n",proy[n].nombre);
        for(int i =0; i< tamPYP; i++)
        {
            if(pyp[i].estado==1 && pyp[i].idProyecto==proy[n].idProyecto)
            {
                for(int j=0; j< tamPRO; j++)
                {
                    if(pyp[i].idEmpleado== prog[j].id)
                    {
                        printf("%s\n ", prog[j].nombre);
                    }
                }
            }
        }
    }

    system("pause");
}

void listarProyectosxProgramador(empleados_proyectos pyp[],eProyecto proy[],eProgramador prog[],int tamPYP,int tamPY, int tamPG)
{
    int aux;
    int flag=1;

    mostrarEmpleados(prog,tamPG);
    printf("\ningrese ID:");
    scanf("%d",&aux);

    for(int i =0; i< tamPG; i++)
    {
        if(prog[i].estado==1 && aux==prog[i].id)
        {
            flag=0;
            printf("\n%s esta trabajando en los siguientes proyectos:",prog[i].nombre);
            for(int n=0; n<tamPYP; n++)
            {
                if(prog[i].id==pyp[n].idEmpleado)
                {
                    for(int j=0; j< tamPY-1; j++)
                    {
                        if(pyp[n].idProyecto== proy[j].idProyecto)
                        {
                            printf("\nProyecto %s", proy[j].nombre);
                        }
                    }
                }
            }
        }
    }
    if(flag)
    {
        printf("\nID desconocido");
    }
    printf("\n");
    system("pause");

}

void mostrarProyectoDemandante(empleados_proyectos pyp[],eProyecto proy[],eProgramador prog[], eCategoria cat[],int tamPYP,int tamPY, int tamPG, int tamCAT)
{
    int proyecto=0;
    int flag =0;
    int indice =0;
    //int aux;
    for(int i=0; i<tamPY; i++)
    {
        proy[i].contador =0;
        for(int j=0; j<tamPYP; j++)
        {
            if(pyp[j].idProyecto == proy[i].idProyecto)
            {
                for(int k=0; k<tamPG; k++)
                {
                    if(prog[k].id == pyp[j].idEmpleado && pyp[j].estado ==1)
                    {
                        proy[i].contador++;
                        flag=0;
                    }
                }
            }
        }
        if(proy[i].contador > proyecto)
        {
            proyecto = proy[i].contador;
            indice =i+1;
        }
    }
    if(flag ==1)
    {
        printf("\nNo hay demanda de proyectos");
        //return 0;
    }
    printf("\nEl proyecto demandante es: nro ");
    for(int i=0; i<tamPY; i++)
    {
        if(proy[i].contador == proyecto && proyecto !=0)
        {
            printf(" %d,", proy[i].idProyecto);
        }
    }
    printf("con %d programadores\n", proyecto);

    system("pause");
}

void mostrarCategorias(eCategoria cat[],int tamCAT)
{
    for(int i =0; i<tamCAT; i++)
    {
        printf("%d: %s\t",cat[i].id, cat[i].descripcion);
    }
}
void mostrarEmpleados(eProgramador prog[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        if(prog[i].estado==1)
        {
            printf("\nID:%d\tNombre:%s\tCategoria:%d",prog[i].id,prog[i].nombre,prog[i].idCategoria);
        }
    }
}
void mostrarProyectos(eProyecto proy[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("\nID:%d\tProyecto:%s",proy[i].idProyecto,proy[i].nombre);

    }
}
void mostrarpyp(empleados_proyectos pyp[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        if(pyp[i].estado==1)
        {
            printf("\nEmpleado:%d--Proyecto:%d",pyp[i].idEmpleado,pyp[i].idProyecto);
        }
    }
    system("pause");
}
void listarRemuneracion(empleados_proyectos pyp[],eProgramador prog[],eProyecto proy[], eCategoria cat[],int tamPYP,int tamPRO,int tamPY, int tamCAT)
{
    int monto=0;
    for(int i=0; i<tamPRO; i++)
    {
        if(prog[i].estado==1)
        {
            printf("\n%s %s cobra por cada proyecto los siguientes montos:\n", prog[i].nombre,prog[i].apellido);
            for(int j=0; j<tamPYP; j++)
            {
                if(pyp[j].estado==1 && pyp[j].idEmpleado== prog[i].id)
                {
                    for(int k=0; k<tamCAT; k++)
                    {
                        for(int n=0; n<tamPY; n++)
                        {
                            if(pyp[j].idProyecto==proy[n].idProyecto && prog[i].idCategoria == cat[k].id)
                            {
                                monto = pyp[j].horasProyecto * cat[k].pagoxHora;
                                printf("Proyecto %s, monto $%d\n", proy[n].nombre, monto);
                                monto =0;
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
}

void listarRemuneracionxProyecto(empleados_proyectos pyp[],eProyecto proy[],eProgramador prog[], eCategoria cat[],int tamPYP,int tamPY, int tamPRO, int tamCAT)
{
    int total=0;
    int monto=1;
    for(int n =0; n< tamPY; n++)
    {
        printf("\nEmpleados en proyecto %s:\n",proy[n].nombre);
        for(int i=0; i<tamPYP; i++)
        {
            if(pyp[i].estado==1 && pyp[i].idProyecto==proy[n].idProyecto)
            {
                for(int j=0; j< tamPRO; j++)
                {
                    if(pyp[i].idEmpleado== prog[j].id)
                    {
                        for(int k=0; k<tamCAT; k++)
                        {
                            if(prog[j].idCategoria==cat[k].id)
                            {
                                monto = pyp[i].horasProyecto*cat[k].pagoxHora;
                                printf("%s cobra $%d\n", prog[j].nombre, monto);
                                total+=monto;
                                monto =0;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n");
    system("pause");
}

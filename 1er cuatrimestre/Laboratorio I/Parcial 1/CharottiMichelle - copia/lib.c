#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "lib.h"

void estado(eProgramador program[],eProyecto proyec[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        program[i].estado=0;
        proyec[i].estado=0;
    }
}

void agregarProgramador(eProgramador program[],eCategorias cate[],int tam)
{
    int i,j;
    int flag=0,flagDig;
    int estados,id;
    int cant;

    for(i=0; i<tam; i++)
    {
        if(program[i].estado==0)
        {
            printf("\ningrese ID: ");
            scanf("%d",&id);

            estados = buscarID(program,tam,id);
            if(estados != -1)
            {
                printf("\nExiste una persona con ese ID!!!\n\n");
                continue;
            }
            else
            {
                program[i].id = id;
            }

            printf("ingrese nombre: ");
            fflush(stdin);
            gets(program[i].nombre);

            flagDig = 0;
            cant = strlen(program[i].nombre);
            for(j=0; j<cant; j++)
            {
                while(isdigit(program[i].nombre[j]))
                {
                    flagDig = 1;
                    cant = strlen(program[i].nombre);
                    break;
                }
            }
            if(flagDig ==1)
            {
                printf("\nERROR.Contiene numeros.\nReingrese nombre: ");
                fflush(stdin);
                gets(program[i].nombre);
            }

            strlwr(program[i].nombre);
            program[i].nombre[0]=toupper(program[i].nombre[0]);
            for(j=0; j<strlen(program[i].nombre); j++)
            {
                if(isspace(program[i].nombre[j]))
                {
                    program[i].nombre[j+1]=toupper(program[i].nombre[j+1]);
                }
            }


            printf("ingrese apellido: ");
            fflush(stdin);
            gets(program[i].apellido);

            flagDig = 0;
            cant = strlen(program[i].apellido);
            for(j=0; j<cant; j++)
            {
                while(isdigit(program[i].apellido[j]))
                {
                    flagDig = 1;
                    cant = strlen(program[i].apellido);
                    break;
                }
            }
            if(flagDig ==1)
            {
                printf("\nERROR.Contiene numeros.\nReingrese apellido: ");
                fflush(stdin);
                gets(program[i].apellido);
            }

            strlwr(program[i].apellido);
            program[i].apellido[0]=toupper(program[i].apellido[0]);
            for(j=0; j<strlen(program[i].apellido); j++)
            {
                if(isspace(program[i].apellido[j]))
                {
                    program[i].apellido[j+1]=toupper(program[i].apellido[j+1]);
                }
            }

            printf("\n1.Junior, 2.SemiSenior, 3.Senior\n");
            printf("ingrese categoria 1-2-3: ");
            scanf("%d",&program[i].idCategoria);

            while(program[i].idCategoria<0 || program[i].idCategoria>3)
            {
                printf("Error.Reingrese numero del 1 al 3: ");
                scanf("%d",&program[i].idCategoria);
            }
            program[i].idCategoria=cate[i].id;

            flag=1;
            program[i].estado=1;
            break;

        }
    }

    if(flag==0)
    {
        printf("\nNo hay espacio\n");
    }
}


int buscarID(eProgramador prog[],int tam,int id)
{
    int i;
    int estado=-1;

    for(i=0; i<tam; i++)
    {
        if(prog[i].id == id)
        {
            estado= i;
            break;
        }
    }
    return estado;
}

void modificar(eProgramador program[],eCategorias cate[],int tam)
{
    int flag=0;
    int i;
    int auxInt;
    char respuesta;

    printf("Ingrese id del programador:");
    scanf("%d",&auxInt);

    for(i=0; i<tam; i++)
    {
        if(program[i].estado==1&& auxInt==program[i].id)
        {
            printf("%d - %s - %s - %d\n", program[i].id,program[i].nombre,program[i].apellido,program[i].idCategoria);
            printf("Ingrese la nueva categoria: ");
            scanf("%d",&auxInt);
            printf("Esta seguro de realizar la modificacion? s/n: ");
            respuesta=getch();
            if(respuesta=='s')
            {
                program[i].idCategoria=auxInt;
                program[i].idCategoria=cate[i].id;
            }
            else
            {
                printf("ACCION CANCELADA.");
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("EL ID NO EXISTE.");
    }
}

void borrarProgramador(eProgramador program[],eProyecto proyec[],eIDs proyProgram[],int tamProy,int tam)
{
    int flag=0;
    int i;
    int auxID;
    char respuesta;
    int j;
    printf("\ningrese ID a eliminar: ");
    scanf("%d",&auxID);

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tamProy; j++)
        {
            if(program[i].estado==1 && auxID==program[i].id)
            {
                proyProgram[i].idProgramador=program[i].id;
                proyProgram[j].idProyecto=proyec[j].id;
                printf("%d  %s  %s  %d  \n",program[i].id,program[i].nombre,program[i].apellido,program[i].idCategoria);
                printf("\nEsta seguro de eliminar? s/n: ");
                respuesta=tolower(getche());
                if(respuesta=='s')
                {
                    if(proyec[j].estado==1)
                    {
                        proyec[j].estado=0;
                    }
                    program[i].estado=0;
                }
                else
                {
                    printf("\nACCION CANCELADA.\n");
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        printf("\nEL ID YA NO EXISTE.\n");
    }
}

void asignarProgramador(eProgramador program[],eProyecto proyec[],eCategorias cate[],eIDs proyecProgram[],int tam,int tamProy)
{
    int i;
    int aux;
    int flag=0;
    char respuesta;

    printf("Ingrese id del programador:");
    scanf("%d",&aux);

    for(i=0; i<tam; i++)
    {
        if(program[i].estado==1 && aux==program[i].id)
        {
            flag=1;
            program[i].idCategoria=cate[i].id;
            printf("ID - NOMBRE - APELLIDO - CATEGORIA\n");
            printf("%d - %s - %s - %d\n", program[i].id,program[i].nombre,program[i].apellido,program[i].idCategoria);
            aux=program[i].id;

        }
    }
    if(flag==1)
    {
        printf("\n1.Proyecto A,\n2.Proyecto B,\n3.Proyecto C,\n4.Proyecto D,\n5.Proyecto E,\n6.Proyecto F,\n7.Proyecto G,\n8.Proyecto H.\n");
        printf("Ingrese el proyecto a asignar: ");
        scanf("%d",&aux);
        while(aux<0 || aux>8)
        {
            printf("Error.Reingrese numero del 1 al 8: ");
            scanf("%d",&aux);
        }

        for(i=0; i<tamProy; i++)
        {

            if(proyec[i].estado==1&&aux==proyec[i].id)
            {
                aux=proyec[i].id;
                proyec[i].id= proyecProgram[i].idProyecto;

                printf("Ingrese hora a trabajar: ");
                scanf("%d",&program[i].horaTrabajo);

                while(program[i].horaTrabajo<=0||program[i].horaTrabajo>24)
                {
                    printf("Error.Reingrese hora");
                    scanf("%d",&program[i].horaTrabajo);
                }

                printf("Desea seguir asignando proyectos? s/n\n");
                fflush(stdin);
                respuesta=tolower(getche());

                if(respuesta == 'n')
                {
                    break;
                }
            }
        }
    }
    else
    {
        printf("ID NO EXISTENTE.");
    }
}

void cargarProgramador(eProgramador program[])
{
    int idProgramador[5]= {100,101,102,103,104};
    char nombre[5][20]= {"Juan","Roberto","Maria","Nicolas","Jose"};
    char apellido[5][20]= {"Perez","Gonzales","Gimenes","Lopez","Garcia"};
    int idCatedoria[5]= {1,2,2,3,2};
    int estado[5]= {1,1,1,1,1};
    int hrsTrabajo[5]= {5,4,5,6,4};

    int i;
    for(i=0; i<5; i++)
    {
        program[i].id = idProgramador[i];
        strcpy(program[i].nombre, nombre[i]);
        strcpy(program[i].apellido, apellido[i]);
        program[i].idCategoria = idCatedoria[i];
        program[i].estado = estado[i];
        program[i].horaTrabajo=hrsTrabajo[i];
    }
}

void cargarProyectos(eProyecto proyecto[])
{
    int id[8] = {1,2,3,4,5,6,7,8};
    char nombres[8][20]= {"ProyectoA","ProyectoB","ProyectoC","ProyectoD","ProyectoE","ProyectoF","ProyectoG","ProyectoH"};
    int estado[8]= {1,1,1,1,1,1,1,1};
    int i;

    for(i=0; i<8; i++)
    {
        proyecto[i].id = id[i];
        strcpy(proyecto[i].nombre, nombres[i]);
        proyecto[i].estado = estado[i];
    }

}

void cargarProgramador_Proyecto(eIDs ProgramProyet[])
{

    int proyecto[10] = {1,2,6,3,6,1,4,7,5,8};
    int programador[10]= {100,100,101,102,102,103,103,103,104,104};
    int i;

    for(i=0; i<10; i++)
    {
        ProgramProyet[i].idProgramador=programador[i];
        ProgramProyet[i].idProyecto = proyecto[i];
    }

}

void listadoProgramadores(eProgramador program[],eCategorias cate[],eProyecto proyec[],eIDs proyectProgram[],int tam, int tamProy)
{
    int i,j,k;
    int aux;
    float pago;




    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)

        {
            if(program[i].estado==1 && program[j].estado==1 )
            {
                if(proyectProgram[i].idProgramador<proyectProgram[j].idProgramador)
                {
                    aux=proyectProgram[i].idProgramador;
                    proyectProgram[i].idProgramador=proyectProgram[j].idProgramador;
                    proyectProgram[j].idProgramador=aux;
                }
            }
        }
    }
    printf("ID\tNOMBRE\tAPELLIDO\tCATEGORIA\n");
    for(i=0; i<tam; i++)
    {
        if(program[i].estado==1)
        {
            //  program[i].idCategoria=cate[i].id;

            pago=program[i].horaTrabajo*cate[i].pagoXhora;
            printf("\n%d\t%s\t%s \t%s\n",program[i].id,program[i].nombre,program[i].apellido,cate[i].descripcion);

            printf("\tPAGO POR PROYECTO:\t%.2f\n",pago);
            for(j=0; j<tam; j++)
            {
                if(proyectProgram[j].idProgramador==program[i].id)
                {

                    for(k=0; k<tamProy; k++)
                    {

                        if(proyectProgram[j].idProyecto==proyec[k].id)
                        {
                            printf("\t\t%s\n",proyec[k].nombre);
                        }
                    }

                }
            }
        }
    }
}

void listaTodosLosProyectos(eProyecto proyec[],eProgramador program[],eIDs proyProgram[],int tam,int tamProy)
{
    int i,j,k;
    printf("ID\tPROYECTO\tPROGRAMADOR\n");


    for(i=0; i<tamProy; i++)
    {
        if(proyec[i].estado==1)
        {
            printf("%d\t%s\n",proyec[i].id,proyec[i].nombre);

            for(j=0; j<tamProy; j++)
            {
                if(proyProgram[j].idProyecto==proyec[i].id)
                {

                    for(k=0; k<tam; k++)
                    {
                        if(proyProgram[j].idProgramador==program[k].id)

                        {
                            printf("\t\t%s %s\n",program[k].nombre,program[k].apellido);
                        }
                    }

                }
            }
        }
    }
}


void listarProyectosDeProgramador(eProgramador program[],eCategorias cate[],eProyecto proyec[],eIDs proyecProgram[],int tam,int tamProy)
{
    int i,j,k;
    int flag=0;

    printf("ID\tNOMBRE\tAPELLIDO\tCATEGORIA\n");

    for(i=0; i<tam; i++)
    {
        if(program[i].estado==1 )
        {
            proyecProgram[i].idProgramador=program[i].id;
            printf("%d\t%s %s\t%s\n",program[i].id,program[i].nombre,program[i].apellido,cate[i].descripcion);
        }
    }
    for(i=0; i<tam; i++)
    {
        if(program[i].estado==1 )
        {

            printf("\nIngrese Id del programador: ");
            scanf("%d",&program[i].id);

            for(j=0; j<tamProy; j++)
            {
                if(proyecProgram[j].idProgramador==program[i].id)
                {

                    for(k=0; k<tamProy; k++)
                    {

                        if(proyecProgram[j].idProyecto==proyec[k].id)
                        {
                            printf("\t\t%s\n",proyec[k].nombre);
                        }
                    }
                    flag=1;
                }
            }


            break;
        }
    }
    if(flag==0)
    {
        printf("EL ID NO EXISTE.\n");
    }

}

void proyectoDemandante(eProgramador program[],eProyecto proyec[],eIDs proyProgram[],int tam,int tamProy)
{
    int i,j,k;
    int max;
    int flag=0;

    for(i=0; i<tamProy; i++)
    {
        proyec[i].cont=0;
        if(proyec[i].estado==1)
        {

            for(j=0; j<tamProy; j++)
            {
                if(proyProgram[j].idProyecto==proyec[i].id)
                {

                    for(k=0; k<tam; k++)
                    {
                        if(proyProgram[j].idProgramador==program[k].id)
                        {
                            proyec[k].cont++;
                        }
                    }

                }
            }
        }
    }

    for(i=0;i<tamProy;i++)
    {
        if(flag==0||proyec[i].cont>max)
        {
            max=proyec[i].cont;
            flag=1;
        }
    }
 printf("Proyecto mas demandado: \nID\tNOMBRE\n");
     for(i=0;i<tamProy;i++)
    {
        if(proyec[i].cont==max)
        {
             for(j=0;j<tamProy;j++)
    {
    if(proyec[j].id==proyProgram[i].idProyecto){
           printf("%d\t%s\n",proyec[i].id,proyec[i].nombre);

           }
    }}
break;
    }
}



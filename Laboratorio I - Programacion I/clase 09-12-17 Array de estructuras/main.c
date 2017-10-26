#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAM 3

typedef struct
{
    int legajo;
    char nombre[50];
    float peso;
    char sintoma[30];
    int estado;
} ePaciente;

void hardcodeoDePacientes(ePaciente[], int);
void mostrarPaciente(ePaciente);
void mostrarTodosLosPacientes(ePaciente[], int);
void cargarPaciente(ePaciente[], int);
void borrarPaciente(ePaciente[],int);
void modificarPaciente(ePaciente[],int);
void ordenarPacientesMayoraMenor(ePaciente[],int);
void ordenarPacientesMenoraMayor(ePaciente[],int);


int main()
{

    ePaciente listaPacientes[TAM];
    int opcion;

    hardcodeoDePacientes(listaPacientes,TAM);
    do
    {
        system("cls");
        printf("1.Alta\n2.Baja\n3.Modificacion\n4.Listar pacientes");
        printf("\n5.Ordenar Descendentemente\n6.Ordenar Ascendentemente\n0.Salir\nEliga opcion: ");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            cargarPaciente(listaPacientes,TAM);
            break;
        case 2:
            borrarPaciente(listaPacientes, TAM);
            break;
        case 3:
            modificarPaciente(listaPacientes,TAM);
            break;
        case 4:
            mostrarTodosLosPacientes(listaPacientes, TAM);
            break;
        case 5:
            ordenarPacientesMayoraMenor(listaPacientes,TAM);
            break;
        case 6:
            ordenarPacientesMenoraMayor(listaPacientes,TAM);
            break;
        case 0:
            opcion = 0;
            break;
        default:
            printf("Opcion incorrecta");
        }
        system("pause");
    }
    while(opcion!=0);


    return 0;
}

void hardcodeoDePacientes(ePaciente lp[], int tam)
{
    int legajos[3]= {111,222,333};
    char nombres[3][50]= {"Alberto","Marta","Juan"};
    int pesos[3]= {80,55,67};
    char sintomas[3][30]= {"Migraña","Cancer","Autismo"};
    int estados[3]= {1,1,1};

    for(int i =0; i<tam; i++)
    {
        lp[i].legajo=legajos[i];
        strcpy(lp[i].nombre,nombres[i]);
        lp[i].peso=pesos[i];
        strcpy(lp[i].sintoma,sintomas[i]);
        lp[i].estado = estados[i];
    }
}

void mostrarPaciente(ePaciente paciente)
{
    if(paciente.estado==1)
    {
        printf("\nLegajo: %d Nombre: %s Peso: %.2fkg Sintoma: %s", paciente.legajo, paciente.nombre, paciente.peso,paciente.sintoma);
    }
}

void mostrarTodosLosPacientes(ePaciente lista[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPaciente(lista[i]);
        }
    }
}

void cargarPaciente(ePaciente lista[], int tam)
{
    int i;
    int flag=0;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            flag=1;
            lista[i].estado=1;
            printf("Ingrese legajo: ");
            scanf("%d", &lista[i].legajo);
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("Ingrese peso: ");
            scanf("%f", &lista[i].peso);
            printf("Ingrese sintoma: ");
            fflush(stdin);
            gets(lista[i].sintoma);
            break;
        }
    }
    if(flag==0)
    {
        printf("\nNo hay espacio para mas pacientes");
    }
}

void borrarPaciente(ePaciente paciente[],int tam)
{
    int auxInt;
    float auxFloat;
    char opcion;
    int flag =0;

    printf("Ingrese legajo de paciente a eliminar:");
    scanf("%d",&auxInt);
    for(int i=0; i<tam; i++)
    {
        if(paciente[i].estado==1)
        {
            if(paciente[i].legajo==auxInt)
            {
                flag =1;
                mostrarPaciente(paciente[i]);
                printf("\nDesea eliminar el paciente? S/N:");
                fflush(stdin);
                opcion = getche();
                opcion = toupper(opcion);
                if(opcion=='S')
                {
                    paciente[i].estado =0;
                    printf("\nPaciente eliminado");
                }
                else
                {
                    printf("\nAccion cancelada");
                }
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nNo se encuentra el paciente");
    }
}

void modificarPaciente(ePaciente paciente[],int tam)
{
    int auxInt;
    float auxFloat;
    char opcion;
    int flag =0;

    printf("Ingrese legajo de paciente a modificar:");
    scanf("%d",&auxInt);
    for(int i=0; i<tam; i++)
    {
        if(paciente[i].estado==1)
        {
            if(paciente[i].legajo==auxInt)
            {
                flag =1;
                mostrarPaciente(paciente[i]);
                printf("\nIngrese nuevo peso: ");
                scanf("%f", &auxFloat);
                printf("\nPeso original: %.2f --> Peso nuevo: %.2f", paciente[i].peso, auxFloat);
                printf("\nDesea hacer la modificacion? S/N:");
                fflush(stdin);
                opcion = getche();
                opcion = toupper(opcion);
                if(opcion=='S')
                {
                    paciente[i].peso=auxFloat;
                    printf("\nPeso modificado");
                }
                else
                {
                    printf("\nAccion cancelada");
                }
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nNo se encuentra el paciente");
    }
}

void ordenarPacientesMayoraMenor(ePaciente lp[],int tam)
{
    int contador=0;
    ePaciente eAux;

    for(int i=0; i<tam-1; i++)
    {
        if(lp[i].estado==1)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(lp[j].estado==1)
                {
                    if(lp[i].legajo<lp[j].legajo)
                    {
                        eAux = lp[i];
                        lp[i]=lp[j];
                        lp[j]=eAux;
                        contador++;
                    }
                }
            }
        }
    }
    printf("\nCantidad de ordenamientos: %d", contador);
}
void ordenarPacientesMenoraMayor(ePaciente lp[],int tam)
{
    int contador=0;
    ePaciente eAux;

    for(int i=0; i<tam-1; i++)
    {
        if(lp[i].estado==1)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(lp[j].estado==1)
                {
                    if(lp[i].legajo>lp[j].legajo)
                    {
                        eAux = lp[i];
                        lp[i]=lp[j];
                        lp[j]=eAux;
                        contador++;
                    }
                }
            }
        }
    }
    printf("\nCantidad de ordenamientos: %d", contador);
}

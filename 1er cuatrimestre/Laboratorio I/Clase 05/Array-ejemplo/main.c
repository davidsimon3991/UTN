#include <stdio.h>
#include <stdlib.h>
#define MAX 3

void mostrarArray(int[],float[], int[]);
void mostrarMayor(float[]);

int legajos[5];
float salarios[5];
int edades[5];
float aux;
int legajoAux;
int auxAsc;
int auxEdad;
int auxSalario;
int encontrado;
float menor;

int main()
{
    for(int i =0; i< MAX; i++)
    {
        printf("ingrese legajo: ");
        scanf("%d", & legajos[i]);

        printf("ingrese salario: ");
        scanf("%f",& aux);
        salarios[i]=aux;

        printf("ingrese edad: ");
        scanf("%d",&edades[i]);

    }

    system("cls");

    printf("\n[ARRAYS PARALELOS]\n\n");
    //ordenar ascendente
    for(int i=0;i<MAX-1;i++)
        {
            for(int j=i+1;j<MAX;j++)
                {
                if(legajos[i]>legajos[j])
                    {
                        auxAsc = legajos[i];
                        legajos[i] =legajos[j];
                        legajos[j]=auxAsc;
                        auxSalario = salarios[i];
                        salarios[i]=salarios[j];
                        salarios[j]=auxSalario;
                        auxEdad = edades[i];
                        edades[i]=edades[j];
                        edades[j]=auxEdad;
                    }
                }
        }
        printf("array ordenado ascendentemente en base a legajos\n");
        for(int j=0;j<MAX;j++)
            {
                    printf("%d\t%.2f\t%d\n",legajos[j],salarios[j],edades[j]);
            }


    mostrarArray(legajos,salarios, edades);
    mostrarMayor(salarios);








    return 0;
}

void mostrarArray(int x[],float y[], int z[])
{
    printf("Legajos\tSueldos\tEdades\n");
    for(int i =0; i<MAX; i++)
    {
        printf("%d \t%.2f \t%d\n", x[i], y[i], z[i]);
    }
}
void mostrarMayor(float y[])
{
    float mayor;
    for(int i =0; i<MAX; i++)
    {
        if(i==0 || y[i]>mayor)
        {
            mayor = y[i];
        }
    }
    printf("\n\n [MAYOR SALARIO] \n\n");
    printf("%.2f", y);
}
void BuscarRegistro()
{
    printf("\n\n\n\n ingrese legajo a buscar: ");
    scanf("%d",& legajoAux);
    encontrado=0;
    for(int i=0; i<MAX; i++)
    {
        if(legajoAux == legajos[i])
        {
            printf("legajo: %d\tsalario: %.2f\tedad: %d ", legajos[i],salarios[i],edades[i]);
            encontrado=1;
            break;
        }
    }
    if(encontrado==0)
    {
        printf("Registro no encontrado");
    }
}


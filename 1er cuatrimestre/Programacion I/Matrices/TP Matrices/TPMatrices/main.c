#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void iniciarMatriz(float[][13],int);
void ingresarRecaudacion(float [][13], int);
int validarDatos(float[][13],int,int,int);
void mostrar(float [][13], int);

int main()
{
    char seguir='s';
    int opcion;
    float colectivos[4][13];
    iniciarMatriz(colectivos,4);
    do
    {
        printf("1.Ingresar recaudacion.\n");
        printf("2.Mostrar recaudacion total.\n");
        printf("5.Salir");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            ingresarRecaudacion(colectivos,4);
            break;
        case 2:
            mostrar(colectivos,4);
            break;
        case 5:
            seguir='n';
            break;
        default:
            printf("Error. Opcion invalida");
            break;
        }
    }
    while(seguir=='s');
    return 0;
}

void iniciarMatriz(float m[][13],int f)
{
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<13; j++)
        {
            m[i][j]=0;
        }
    }
}
void ingresarRecaudacion(float mat[][13], int f)
{
    char continuar='s';
    int linea;
    int colectivo;
    do
        {
            printf("Ingrese linea:");
            scanf("%d",& linea);
            printf("Ingrese nro colectivo: ");
            scanf("%d",&colectivo);
            printf("Ingrese recaudacion: ");
            scanf("%f",& mat[linea][colectivo]);
            printf("Continuar? S/N");
            fflush(stdin);
            scanf("%c",&continuar);
        }
    while(continuar=='s');

}
void mostrar(float mat[][13], int f)
{
    for(int i =0; i<12; i++)
    {
        for(int j =0; j<f-1; j++)
        {
            mat[3][12]+= mat[i][j];
        }

    }
    for(int i =0; i<13; i++)
    {
        for(int j =0; j<f; j++)
        {
            printf("%.2f \t", mat[j][i]);
        }
        printf("\n");
    }
}

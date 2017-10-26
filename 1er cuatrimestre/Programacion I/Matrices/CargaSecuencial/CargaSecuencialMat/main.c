#include <stdio.h>
#include <stdlib.h>


void mostrarxFilas(int [][5],int);

int main()
{
    int mat[4][5];
    for(int i =0; i<4; i++)
    {
        for(int j =0; j<5; j++)
        {
            printf("ingrese numero:");
            scanf("%d",& mat[i][j]);
        }
    }
    mostrarxFilas(mat,4);


    return 0;
}

void mostrarxFilas(int mat[][5],int f)
{
    for(int i =0; i<f; i++)
    {
        for(int j =0; j<5; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf(("\n"));
    }
}


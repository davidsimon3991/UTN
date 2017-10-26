#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int numeros[TAM]= {2,5,10,16,1};
    int numeros2[TAM]= {};
    for(int i =0; i<TAM; i++)
    {
        numeros2[i]=1;
    }
    for(int i =0; i<TAM; i++)
    {
        printf("%d ", numeros[i]);
    }
    for (int i=0; i<TAM; i++)
    {
        numeros2[i] *=numeros[i]*2;
    }
    for(int i =0; i<TAM; i++)
    {
        printf("%d ", numeros2[i]);
    }
    return 0;
}

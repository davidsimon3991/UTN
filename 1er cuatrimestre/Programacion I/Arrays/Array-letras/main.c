#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define CANT 3

int main()
{
    char letras[TAM]={"#"};
    char letra;
    int indice;

    for(int i=0;i<TAM;i++)
        {
            printf("ingrese letra: ");
            fflush(stdin);
            letras[i]=getchar();
            //scanf("%c", & letras[i]);

        }
        for(int i =0; i<TAM;i++)
            {
                printf("%c ", letras[i]);
            }



    return 0;
}

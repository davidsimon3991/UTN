#include <stdio.h>
#include <stdlib.h>

/**<  Agregar al siguiente programa [DESCARGAR], la funcionalidad subrayada.

Solicite dos valores numericos al usuario distintos de cero
Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor
Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero */

int main(int argc, char *argv[]) {

	int a;
	int b;
	int resultado;
    do
        {
        printf("\nIngrese un numero distinto a cero: ");
        scanf("%d",&a);
        }
    while(a==0);
    do
    {
       printf("\nIngrese otro numero distinto a cero: ");
        scanf("%d",&b);
    }
	while(b==0);

	resultado=a-b;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado==0 || resultado <0){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");

    system("pause");
	return 0;
}

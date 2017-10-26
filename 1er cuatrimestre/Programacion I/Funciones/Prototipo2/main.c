#include <stdio.h>
#include <stdlib.h>

void sumar(int,int);
int main()
{
    int num1,num2;

    printf("ingrese un numero: ");
    scanf("%d", & num1);
    printf("ingrese otro numero: ");
    scanf("%d", & num2);

    sumar(num1,num2);
    return 0;
}
void sumar(int x, int y)
{
    int rdo;
    rdo = x+y;
    printf("la suma es: %d", rdo);
}


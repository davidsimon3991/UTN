#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int factoreo(int);
int main()
{
    int num, i, factorial = 1;

    printf("ingrese numero\n");
    scanf("%d", &num);
    system("cls");
    factorial = factoreo(num);
    printf("el factorial de %d es: %d \n",num, factorial);
    return 0;
}

int factoreo(int x)
{
    int i;
    int fact = 1;
    for (i = x; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
void validarNum(int x)
{
    while(!(isdigit(x)))
    {
        printf("ERROR. solo ingrese un numero: ");
        scanf("%d", & x);
    }
    return x;
}


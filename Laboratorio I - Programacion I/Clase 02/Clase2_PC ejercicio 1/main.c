#include <stdio.h>
#include <stdlib.h>

/**<  Realizar un programa que solicite cinco numeros e imprima por pantalla el promedio, el maximo y el minimo. */
int main()
{
    int num;
    int acumulador=0;
    float promedio=0;
    int max,min;
    int flag=0;
    for(int i =0;i<5;i++)
    {
     printf("ingrese un numero:");
     scanf("%d",&num);
     acumulador+= num;
     if(flag ==0)
        {
            max=num;
            min=num;
            flag=1;
        }
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
     }
    promedio= (float)acumulador /5;

    printf("Nro maximo: %d\nNro minimo: %d\nPromedio: %.2f\n", max,min,promedio);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char flag;
    char flag2 = 1;
    int total= 0;
    int divisor = 0;
    int pares =0;
    int impares = 0;
    int sum_pares =0;
    int sum_impares = 0;
    int bucket1 =0;
    int bucket2 = 0;
    int bucket3 = 0;
    int acumAntecedentes =0;
    int i;

    int max, minImpar;
    float promedio =0;


    do
        {
            printf("ingrese numero: ");
            scanf("%d", &num);
            while(num <=0)
                {
                    printf("Error.ingrese numero positivo: ");
                    scanf("%d", &num);


                }
                if (flag2 == 1)
                    {
                        minImpar = num;
                        max = num;
                        flag2 = 0;
                    }
                if (num < minImpar && num %2 !=0)
                    {
                        minImpar = num;
                    }
                if (num > max)
                    {
                        max = num;
                    }

                if (num % 2 == 0)
                    {
                        pares++;
                        sum_pares += num;
                    }
                else
                    {
                        impares++;
                        sum_impares += num;
                    }


                    if(num >3 && num <15)
                        {
                            bucket1++;
                        }
                    else if(num >16 && num < 29)
                        {
                            bucket2++;
                        }
                    else
                        {
                            bucket3++;
                        }




            total += num;
            divisor++;
            //fflush(stdin);

            printf("continuar? Y/N: \n ");
            flag = tolower(getche());
            system("cls");


        }
    while(flag != 'n');

    for (i = sum_impares; i >1; i--)
        {
            acumAntecedentes = sum_impares - i;
            printf("impar ingresado: %d \n", acumAntecedentes);
        }

    promedio = (float)total / divisor;

    printf("Suma total de numeros acumulados: %d \n", total);
    printf("Maximo: %d || Minimo impar: %d \n" , max, minImpar);
    printf("Total de nros pares: %d || Total de nros impares: %d \n", pares, impares);
    printf("Suma de nros pares: % d || Suma de nros impares: %d \n" , sum_pares, sum_impares);
    printf("Promedio: %.2f \n \n", promedio);
    printf("nros entre 3-15: %d \n", bucket1);
    printf("nros entre 16-29: %d \n", bucket2);
    printf("nros despues de 30: %d \n", bucket3);
    //printf("Hello world!\n");
    return 0;
}

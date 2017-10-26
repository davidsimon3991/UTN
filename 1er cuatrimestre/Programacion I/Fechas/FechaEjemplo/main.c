#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void ejemplo_uno();

int esBisiesto(int anio);//calcular si es año bisiesto
int diasDesdeElComienzo();// dias pasados hasta la fecha de hoy (final)
int diasHastaElFinal(int, int, int); //(int dia, int mes, int año) fecha de origen (origen)
int diasxAnios(int, int); // (int origen int final) calcular diferencia entre origen y final
int main()
{
    /*SYSTEMTIME fechaOrigen;
    printf("Ingrese fecha de origen:");
    scanf("%d %d %d", &fechaOrigen.wDay,&fechaOrigen.wMonth,&fechaOrigen.wYear);
    printf("%02d/%02d/%02d", fechaOrigen.wDay,fechaOrigen.wMonth,fechaOrigen.wYear);*/

    int total=0;
    total = diasDesdeElComienzo();
    printf("%d",total);
    return 0;
}
void ejemplo_uno()
{
    SYSTEMTIME hoy;
    GetLocalTime(&hoy);
    printf("Hora: %02d:%02d:%02d \nFecha: %02d/%02d/%02d", hoy.wHour,hoy.wMinute,hoy.wSecond,hoy.wDay,hoy.wMonth,hoy.wYear);
}

int esBisiesto(int anio)
{
    int flag =0;
    if ( ((anio%4==0) && (anio%100!=0)) || (anio%400==0) )
    {
        flag=1;
    }
    return flag;
}
int diasDesdeElComienzo()
{
    SYSTEMTIME hoy;
    GetLocalTime(&hoy);
    int meses[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int dias;
    int total=0;

    if(esBisiesto(hoy.wYear))
    {
        meses[2]=29;
    }
    for(int i = hoy.wMonth +1; i< 13; i++)
    {
        total += meses[i];
    }
    if(esBisiesto(hoy.wYear))
    {
        dias= 366;
    }
    else
    {
        dias=365;
    }
    total += (meses[hoy.wMonth] - hoy.wDay+1);
    dias-=total;
    return dias;
}
int diasHastaElFinal(int dia, int mes, int anio)
{
    int total =0;

    return total;
}

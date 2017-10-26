#include <stdio.h>
#include <stdlib.h>

void ejemplodeRead();
void ejemploConCadena();
void ejemploEscribir();
int main()
{
    int opcion;
    printf("1. leer archivo caracter por caracter\n");
    printf("2. leer archivo caracter con cadena de caracteres\n");
    printf("3. escribir en archivo\n");
    scanf("%d",&opcion);

    switch(opcion)
    {
    case 1:
        ejemplodeRead();
        break;
    case 2:
        ejemploConCadena();
        break;
    case 3:
        ejemploEscribir();
        break;
    }

    return 0;
}
void ejemplodeRead()
{
    FILE*f;
    char x;
    f=fopen("prueba.txt","r");
    if(f==NULL)
    {
        printf("ERROR. No se encontro el archivo");
        exit(1);
    }
    while(x!=EOF)
    {
        x=fgetc(f);
        printf("%c",x);
    }
    fclose(f);
}
void ejemploConCadena()
{
    FILE*f;
    char cadena[50];
    f=fopen("prueba.txt","r");
    if(f==NULL)
    {
        printf("ERROR. No se encontro el archivo");
        exit(1);
    }
    while(!feof(f))
    {
        fgets(cadena,50,f);
        printf("%s",cadena);
    }
    fclose(f);
}
void ejemploEscribir()
{
    FILE*f;
    f=fopen("prueba.txt","w
            ");
    if(f==NULL)
    {
        printf("ERROR. No se encontro el archivo");
        exit(1);
    }
    fprintf(f,"Hola mundo");
    fclose(f);
}

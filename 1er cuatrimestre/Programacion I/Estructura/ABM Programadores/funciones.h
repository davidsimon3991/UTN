#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    int id;
    char nombre[50];
    int idCategoria;
    int estado;
    float sueldo;

}EProgramador;

typedef struct{
int id;
char descripcion[20];
}eCategoria;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EProgramador lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EProgramador lista[], int dni);

#endif // FUNCIONES_H_INCLUDED

void Estados(EProgramador[],int);

void ingresarDato(EProgramador[],int);

void borrarUnDato(EProgramador[],int);

void ordenPorNombre(EProgramador[],int);

void graficoEdad(EProgramador[],int);

void categoria(int);

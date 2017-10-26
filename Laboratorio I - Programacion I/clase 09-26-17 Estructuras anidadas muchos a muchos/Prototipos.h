#define TAM 10
#define TAMC 30
#define TAMIC 40
#define TAM_HARD 5
#define TAM_HARD2 9
#define TAM_HARD3 10

typedef struct
{
    int id;
    char nombre[30];
    char nacionalidad[20];
    int estado;
} eInterprete;

typedef struct
{
    int idCancion;
    char titulo[30];
    int duracion;
    int estado;
} eCancion;

typedef struct
{
    int idInterprete;
    int idCancion;
    int estado;
}eInterpretesCanciones;

//hardcodeos
void inicializacion(eInterpretesCanciones[],eInterprete[],eCancion[],int,int,int);
void IngresoInterprete(eInterprete[],int);
void IngresoCancion(eCancion[],int);
void IngresoInterpretesCanciones(eInterpretesCanciones[],int);
//ABM interpretes
void altaInterprete(eInterprete[],int);
void bajaInterprete(eInterprete[],int);
void modificarInterprete(eInterprete[],int);
//ABM canciones
void altaCancion(eCancion[],int);
void bajaCancion(eCancion[],int);
void modificarCancion(eCancion[],int);
//muestras
void mostrarMuchosMuchos(eInterpretesCanciones[],eInterprete[],eCancion[],int,int,int);
void mostrarArtistas(eInterprete[],int);
void mostrarSoloCanciones(eCancion[],int);
void mostrarCanciones(eInterpretesCanciones[],eInterprete[],eCancion[],int,int,int);
void mostrarCancionesdeUSA(eInterpretesCanciones[],eInterprete[],eCancion[],int,int,int);
void mostrarporInterpretes(eInterpretesCanciones[],eInterprete[],eCancion[],int,int,int);
void mostrarCancionesdeInterprete(eInterpretesCanciones[],eInterprete[],eCancion[],int,int,int);


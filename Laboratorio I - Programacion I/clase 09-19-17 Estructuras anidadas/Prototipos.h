#define TAM 10
#define TAMC 30
#define TAM_HARD 5
#define TAM_HARD2 8

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
    int interprete;
    int duracion;
    int estado;
} eCancion;

//hardcodeos
void inicializacion(eInterprete[],eCancion[],int,int);
void IngresoInterprete(eInterprete[],int);
void IngresoCancion(eCancion[],int);
//ABM interpretes
void altaInterprete(eInterprete[],int);
void bajaInterprete(eInterprete[],int);
void modificarInterprete(eInterprete[],int);
//ABM canciones
//muestras
void mostrarArtistas(eInterprete[],int);
void mostrarCanciones(eInterprete[],eCancion[],int,int);
void mostrarCancionesdeUSA(eInterprete[],eCancion[],int,int);
void mostrarporInterpretes(eInterprete[],eCancion[],int,int);
void mostrarCancionesdeInterprete(eInterprete[],eCancion[],int,int);


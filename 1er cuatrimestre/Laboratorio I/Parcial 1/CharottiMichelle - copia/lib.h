typedef struct{
int id;
char nombre[20];
char apellido[20];
int idCategoria;
int estado;
int horaTrabajo;
}eProgramador;

typedef struct
{
    int id;
    char descripcion[20];
    int pagoXhora;
}eCategorias;

typedef struct
{
    int id;
    char nombre[20];
    int estado;
    int cont;
}eProyecto;

typedef struct
{
  int idProgramador;
  int idProyecto;
}eIDs;

void estado(eProgramador[],eProyecto[],int);
void cargarProgramador(eProgramador[]);
void cargarProyectos(eProyecto proyecto[]);
void cargarProgramador_Proyecto(eIDs[]);

void agregarProgramador(eProgramador[],eCategorias[],int);
int buscarID(eProgramador[],int,int);
void modificar(eProgramador[],eCategorias[],int);
void borrarProgramador(eProgramador[],eProyecto[],eIDs[],int,int);
void asignarProgramador(eProgramador[],eProyecto[],eCategorias[],eIDs[],int,int);
void listadoProgramadores(eProgramador[],eCategorias[],eProyecto[],eIDs[],int,int);
void listaTodosLosProyectos(eProyecto[],eProgramador[],eIDs[],int,int);
void listarProyectosDeProgramador(eProgramador[],eCategorias[],eProyecto[],eIDs[],int,int);
void proyectoDemandante(eProgramador[],eProyecto[],eIDs[],int,int);


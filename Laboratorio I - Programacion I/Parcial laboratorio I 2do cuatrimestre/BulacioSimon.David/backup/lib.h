#define TAM_CL 5
#define TAM_MQ 3
#define TAM_ALQ 3


typedef struct
{
 int id;
 int dni;
 char nombre[30];
 char apellido[30];
 int inhabilitado;
 int alquileres;
}eCliente;
typedef struct
{
    int id;
    char nombre[30];
}eMaquina;

typedef struct
{
    char idCliente;
    int idEquipo;
    int tiempoEstimado;
    int tiempoReal;
    char operador[30];
    int alquilado;
}eAlquiler;

void iniciarEstados(eCliente[], eAlquiler[],int,int);

void hardcodeoClientes(eCliente[],int);
void hardcodeoMaquinas(eMaquina[],int);
void hardcodeoAlquileres(eAlquiler[],int);


void altaCliente(eCliente[],int);
void modificarCliente(eCliente[],int);
void bajaCliente(eCliente[],int);

void mostrarClientes(eCliente[],int);
void mostrarMaquinas(eMaquina[],int);
void mostrarAlquileres(eAlquiler[],eCliente[],eMaquina[],int,int,int);
void mostrarClientesAlquilando(eAlquiler[],eCliente[],eMaquina[],int,int,int);
void mostrarMayorAlquilante(eAlquiler[],eCliente[],eMaquina[],int,int,int);

void nuevoAlquiler(eAlquiler[],eCliente[],eMaquina[],int,int,int);
void finalizarAlquiler(eAlquiler[],eCliente[],eMaquina[],int,int,int);



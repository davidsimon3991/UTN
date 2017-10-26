typedef struct
{
    int id;
    char nombreApellido[50];
    char direccion[70];
    int tarjetaCredito;
    int estado;
}eCliente;

typedef struct
{
    char patente[7];
    int marca;
    int idCliente;
    int horaEntrada;
    int estado;
}eAuto;

typedef struct
{
int idAuto;
int idPersona;
char marca[20];
}eMarca;

void iniciarClientes(eCliente[],int);

void iniciarMarcas(eMarca[]);

void altaCliente(eCliente[],int);

int buscarCliente(eCliente [], int, int);

char ajustarNombre(char[],int);

int controlarTarjeta(int);

void modificarCliente(eCliente[],int);

void mostrarCliente(eCliente[],int);

void altaVehiculo(eAuto[],eCliente[],int,int);

void ordenarXnombre(eCliente[],int);

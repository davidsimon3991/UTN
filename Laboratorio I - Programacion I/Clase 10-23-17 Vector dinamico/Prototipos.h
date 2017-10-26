
typedef struct
{
    int legajo;
    char nombre[50];
    int nota;
}eRecursante;

eRecursante* newRecursante();
eRecursante* newRecursante_info(int,char*,int);
eRecursante* newVector();
eRecursante* asignarMasEspacio(eRecursante*);

void altaRecursante(eRecursante*,int);
void mostrarRecursantes(eRecursante*,int);

void hardcoreo(eRecursante*);
void mostrar(eRecursante*);


typedef struct
{
    int legajo;
    char nombre[50];
    int nota;
}eRecursante;

eRecursante* newRecursante();
eRecursante* newRecursante_info(int,char*,int);
eRecursante* asignarMasEspacio(eRecursante*);

void hardcoreo(eRecursante*);
void mostrar(eRecursante*);

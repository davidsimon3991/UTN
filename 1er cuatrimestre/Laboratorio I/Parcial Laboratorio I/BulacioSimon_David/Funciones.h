typedef struct
{
    int id;
    char nombre[20];
    char apellido[20];
    int idCategoria;
    int estado;
}eProgramador;

typedef struct
{
    int idProyecto;
    char nombre[20];
    int contador;
}eProyecto;

typedef struct
{
    int id;
    char descripcion[20];
    int pagoxHora;
}eCategoria;

typedef struct
{
    int idEmpleado;
    int idProyecto;
    int horasProyecto;
    int estado;
}empleados_proyectos;


void iniciarProgramadores(eProgramador[],int);
/** \brief Inicializa en 0 los estados de programador
 *
 */

void iniciarpyp(empleados_proyectos[],int);
/** \brief Inicializa en 0 las variables de empleados_proyectos
 *
 * \return
 *
 */

void cargarCategorias(eCategoria[]);
/** \brief Establece las categorias de programadores
 *
 * \param idCat contiene los id de categorias
 * \param descripcion contiene los nombres de categorias
 * \param precioxHora valor que un programador cobra por hora en un proyecto
 * \return
 *
 */

void cargarProyectos(eProyecto[]);
/** \brief Establece los proyectos determinados
 *
 * \param id contiene los id de cada proyecto
 * \param nombre establece el nombre de cada proyecto
 * \return
 *
 */
void cargarEmpleados(eProgramador[]);
void cargarPYP(empleados_proyectos[]);

int buscarProgramador(eProgramador[], int, int);
/** \brief busqueda de programador en struct eProgramador por id
 *
 * \param encontrado devuelve -1 si no encuentra coincidencia, i cuando encuentra programador
 * \return
 *
 */

int buscarProyecto(eProyecto [], int , int );
/** \brief busqueda de proyecto en struct eProyecto por id
 *
 * \param idAux devuelve -1 si no encuentra coincidencia, i cuando encuentra proyecto
 * \return
 *
 */

char ajustarNombre(char[],int);
/** \brief arregla el nombre ingresado
 *
 * \param x ajusta el nombre obtenido respetando mayusculas
 * \return
 *
 */

void altaProgramador(eProgramador[],eCategoria[],int,int);
/** \brief agrega un nuevo programador
 *
 * \param flag 1 si no encuentra espacio para el alta, 0 cuando hay espacio
 * \param existente busca si ya existe un id
 * \param idNuevo auxiliar para la existente
 * \param nombreNuevo auxiliar para ajustar el nombre ingresado
 * \param apellidoNuevo auxiliar para ajustar el apellido ingresado
 * \return
 *
 */

void modificarProgramador(eProgramador[],eCategoria[],int,int);
/** \brief modifica la categoria de un programador
 *
 * \param idBuscado compara el valor obtenido con el id del programador
 * \param flag  0 determina que se hizo la modificacion 1 determina que no se modifico al programador
 * \return
 *
 */
void borrarProgramador(eProgramador[],eCategoria[],int,int);
/** \brief da de baja a un programador
 *
 * \param idBuscado compara el valor obtenido con el id programador
 * \param flag 0 determina que no se dio de baja 1 confirma la baja
 * \param rta s se confirma la baja !=s se cancela la baja
 * \return
 *
 */

void asignarProgramador(eProgramador[],eProyecto[],empleados_proyectos[],eCategoria[],int, int,int,int);
/** \brief asigna un programador a un proyecto
 *
 * \param aux obtiene valor a comparar con id de programador
 * \param aux2 obtiene valor a comparar con id de proyecto
 * \param flag 1 que no se asigno 0 que se asigno
 * \return
 *
 */

void listarProgramadores(empleados_proyectos [],eProgramador [],eProyecto [], eCategoria [],int ,int ,int , int );
/** \brief muestra los proyectos en el que trabaja cada programador, y cuanto cobra por horas trabajadas en los proyectos
 *
 * \param total calcula el producto de la cantidad de horas trabajadas por el precio determinado por categoria
 * \return
 *
 */

void listarProyectos(empleados_proyectos [],eProyecto [],eProgramador [], eCategoria[],int, int ,int , int );
/** \brief muestra los empleados que hay por cada proyecto
 *
 * \return
 *
 */

void listarProyectosxProgramador(empleados_proyectos [],eProyecto [],eProgramador [],int ,int , int );
/** \brief muestra los proyectos en el que esta determinado programador
 *
 * \param aux obtiene el valor para buscar id de programador
 * \param flag 1 determina que no hubo coincidencia 0 que encontro programador
 * \return
 *
 */

void mostrarProyectoDemandante(empleados_proyectos[],eProyecto[],eProgramador[], eCategoria[],int,int, int, int);
/** \brief muestra cual es el proyecto con mas programadores
 *
 * \param
 * \param
 * \return
 *
 */

void mostrarCategorias(eCategoria [],int );
/** \brief muestra en pantalla todas las categorias disponibles
 *
 * \return
 *
 */

void mostrarEmpleados(eProgramador[],int);
/** \brief muestra en pantalla todos los programadores
 *
 * \return
 *
 */

void mostrarProyectos(eProyecto[],int);
/** \brief muetras en pantalla todos los proyectos
 *
 * \return
 *
 */

 void mostrarpyp(empleados_proyectos[],int);
 /** \brief muestra en pantalla todos los proyectos y programadores relacionados
  *
  * \return
  *
  */

void listarRemuneracion(empleados_proyectos[],eProgramador[],eProyecto[], eCategoria[],int,int,int,int);

void listarRemuneracionxProyecto(empleados_proyectos pyp[],eProyecto proy[],eProgramador prog[], eCategoria cat[],int tamPYP,int tamPY, int tamPRO, int tamCAT);

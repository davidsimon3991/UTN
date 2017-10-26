using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejemplo1
{
    //Encapsulamiento. Ocultar al exterior del objeto, los implementos de tal(los que no son publicos no se ven afuera)
    //Abstraccion.  
    //Herencia. una clase hereda de otra ciertos atributos
    //Polimorfismo. muchas formas de realizar un mismo metodo.
    class Persona/*define la clase estructural o estatica. Es el molde de los objetos. Se determinan atributos(campos de estructura en C)*/
    {
        String _nombre; /* todos los atributos normalmente empiezan con _ (guion bajo)*/
        int _edad;
        //Sobrecarga: tener metodos de mismo nombre, pero distinta firma(los parametros que recibe o no)
        public Persona()
        {

        }
        public int Edad //get set para obtener un valor, que se asociara al atributo _edad
        {
            get
            {
                return _edad;
            }
            set
            {
                this._edad = value;
            }
        }
        public void setEdad(int edad)
        {
            if (edad > 40)
            {
                this._edad = edad;
            }
        }
        

        public Persona(string nombre, int edad) //Constructor, que por defecto no devuelve nada
        {            
                this._nombre = nombre;
                this._edad = edad;                        
        }
        public Persona(string nombre)
        {
            this._nombre = nombre;
        }
        /* Hay Metodos, que son componentes de comportamiento o dinamico. (punteros a funciones en C)*/
        public void mostrarPersona()
        {
            Console.WriteLine("Su nombre es: {0}, y su edad es {1}", this._nombre,this._edad);
            /* THIS es palabra reservada del objeto que estamos tratando actual. En este caso de la clase Persona*/
        }
        public override string ToString()
        {
            return "Edad"+ _edad + " nombre " + _nombre;
        }
    }
}

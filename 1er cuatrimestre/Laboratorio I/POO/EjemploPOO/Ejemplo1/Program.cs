using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejemplo1
{
    class Program
    {
        static void Main(string[] args) /* funcion principal del programa, contenida en la clase Program */
        {
            /* String nombre, apellido;
            int edad;
            Console.WriteLine("ingrese nombre: ");
            nombre = Console.ReadLine(); // es como un get
            Console.WriteLine("ingrese apellido: ");
            apellido = Console.ReadLine();
            Console.WriteLine("ingrese edad: ");
            edad = int.Parse(Console.ReadLine());// parsear de entero a string
            Console.WriteLine("Su nombre es {0} \nSu apellido es {1}\nSu edad es {2} años", nombre, apellido, edad); // es como un getch
            Console.ReadLine();*/
            List<Persona> misPersonas; // en C seria un arrayList* misPersonas;
            misPersonas = new List<Persona>(); // en C seria misPersonas = al_newArrayList();
            Persona auxP;
            
            Persona unaPersona; //Declaro un objeto de clase Persona, asi obtiene sus atributos (en C es Persona* unaPersona)
            unaPersona = new Persona("Juan",15); // constructor (en C es unaPersona = miConstructorPersona();)
            Persona otraPersona;
            otraPersona = new Persona("German", 41);
            Persona tercerPersona;
            tercerPersona = new Persona("Maria", 19);

            misPersonas.Add(unaPersona);
            misPersonas.Add(otraPersona);
            misPersonas.Add(tercerPersona);

            /*for (int i = 0; i < misPersonas.Count; i++)
            {
                auxP = misPersonas.ElementAt(i);
                auxP.mostrarPersona();
            }*/
            foreach (Persona p in misPersonas)//lo mismo que el for
            {
                p.mostrarPersona();
            }
                /* unaPersona.Edad = 41; // get set de Edad en Persona
                //unaPersona.setEdad(50); // en C setEdad(unaPersona, 50);
                unaPersona.mostrarPersona();

                Object otraPersona; // Object es generico. En C seria como un void* otraPersona
                otraPersona = new Persona("Luis",15);
                ((Persona)otraPersona).setEdad(23);//casteo de clases
                otraPersona.ToString();*/
                Console.Read();
            

        }
    }
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author alumno
 */
public class Alumno 
{
 
            int legajo;
            String nombre;
            int nota;
        void estudiar(String materia)
        {
            System.out.println("Estudio "+ materia);
        }        
        void mostrar()
        {
            System.out.println(this.legajo+"\t"+ this.nombre +"\t"+ this.nota);
        }
        
}

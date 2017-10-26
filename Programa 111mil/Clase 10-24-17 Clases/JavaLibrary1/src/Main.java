
import java.util.ArrayList;
import java.util.Comparator;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author alumno
 */
public class Main {

    
    public static void main(String[] args) {
        ArrayList<Alumno> listaAlumnos = new ArrayList<>();        
    Comparator<Alumno> comparator = new Comparator<Alumno>() {
    public int compare( Alumno a, Alumno b ) 
    {
        int resultado = Integer.compare( a.legajo, b.legajo);
        if ( resultado != 0 )
        {
            return resultado;
        }
        
        return resultado;
    }
};
        Alumno l1 = new Alumno();
        Alumno l2 = new Alumno();
        Alumno l3 = new Alumno();
        
        l1.legajo=111;
        l1.nombre="Juan";
        l1.nota=8;
        l2.legajo=222;
        l2.nombre="Amalia";
        l2.nota=5;
        l3.legajo=210;
        l3.nombre="Jorge";
        l3.nota=5;
        listaAlumnos.add(l1);
        listaAlumnos.add(l2);
        listaAlumnos.add(l3);
        
        System.out.println("Legajo\tNombre\tNota");
        for(Alumno a : listaAlumnos)
        {
            a.mostrar();            
        }
        
        
                
        
    }
    
}


//import java.io.Console;
import java.util.Scanner;

public class NewMain 
{    
    public static void main(String[] args)
    {   
        PreguntasRespuestas.main();
        int tam=10;
        int [] vector = new int[tam];
        int opcion=0;
        boolean flag=true;
        Scanner lector = new Scanner(System.in);
        vector = Desarrollos.inicializarVector(tam);
        
        do
        {
            
            System.out.println("1.Cargar vector\n2.Mostrar vector");
            System.out.println("3.Mostrar solo positivos\n4.Mostrar solo negativos");
            System.out.println("5.Ordenar ascendentemente\n6.Ordenar Negativos y positivos\n9.Salir");
            opcion = Integer.parseInt(lector.nextLine());
            switch(opcion)
            {
                case 1:
                    vector = Desarrollos.cargarVector(tam);
                    break;
                case 2:
                    Desarrollos.mostrarVector(vector, tam);
                    break;
                case 3:
                    Desarrollos.mostrarPositivos(vector, tam);
                    break;
                case 4:
                    Desarrollos.mostrarNegativos(vector, tam);
                    break;
                case 5:
                    Desarrollos.mostrarOrdenadosAsc(vector, tam);
                    break;
                case 6:
                    Desarrollos.mostrarNegPos(vector, tam);
                    break;
                case 7:
                    Desarrollos.cargarVectorC();
                    break;
                case 9:
                    flag=false;
                    break;
                default:
                    System.out.println("Opcion no encontrada:");                    
            }           
        }while(flag);      
    }
    
    
    
}

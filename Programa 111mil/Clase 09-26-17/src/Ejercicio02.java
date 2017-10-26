
import java.util.Random;
import java.util.Scanner;


public class Ejercicio02 
{
    public static void Menu()
    {
     int opcion;
     int tam =100;
     int numerosAleatorios[] = new int [tam];     
     Scanner lector = new Scanner(System.in);     
     
     
     VectorAleatorios(numerosAleatorios,tam);
     do
     {
         System.out.println("1.Mostrar pares e impares\n2.Sumatorias y productos");
         System.out.println("3.Mostrar ordenados de menor a mayor()\n4.Mostrar primos\n5.Modificar\n6.Salir");
         opcion = lector.nextInt();
         switch(opcion)
         {
             case 1:
                 mostrar(numerosAleatorios,tam);
                 break;                     
             case 2:
                 sumatoria(numerosAleatorios,tam);
                 break;
             case 3:
                 ordenarAsc(numerosAleatorios,tam);
                 break;
             case 4:
                 break;
             case 5:
                 break;
             default:
                 System.out.println("Opcion invalida!");
         } 
     }while(opcion!=6);
    }
    public static void VectorAleatorios(int numerosAleatorios[],int tam)
    {            
        for(int i=0; i<tam; i++)
        {
           numerosAleatorios[i]=(int)Math.floor(Math.random()*10 +1); 
        }
        for(int i=0;i<tam;i++)
        {
            System.out.println(numerosAleatorios[i]);
        }
    }
    public static void mostrar(int na[],int tam)
    {    
        System.out.println("PARES");
        for(int i=0;i<tam;i++)
        {
            if(na[i]%2==0)
            {
                System.out.println(na[i]);
            }            
        }
        System.out.println("\nIMPARES");
        for(int i=0;i<tam;i++)
        {
            if(na[i]%2!=0)
            {
                System.out.println(na[i]);
            }            
        }
    }
    public static void sumatoria(int na[],int tam)
    {
        int sumatoria=0;
        for(int i=0;i<tam;i++)
        {
            sumatoria+= na[i];
        }
        System.out.println("Sumatoria: "+ sumatoria);
    }
    public static void ordenarAsc(int na[],int tam)
    {
        int auxInt;
        for(int i=0;i<tam-1;i++)
        {
            for(int j=i+1;j<tam;j++)
            {
                if(na[i]>na[j])
                {
                    auxInt = na[i];
                    na[i]=na[j];
                    na[j]=auxInt;
                }
            }
        }        
        for(int i=0;i<tam;i++)
        {
            System.out.println(na[i]);
        }
    }
    
    
}

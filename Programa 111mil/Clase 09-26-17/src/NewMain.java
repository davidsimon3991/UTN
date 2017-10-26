
import static java.lang.Math.random;
import java.util.Random;
import java.util.Scanner;


public class NewMain
{   
    public static void main(String[] args)
    {        
        Ejercicio02.Menu();
        int miNumero, numeroRandom, intentos=0;
        
        Random rnd = new Random();
        Scanner lector = new Scanner(System.in);       
        numeroRandom = (int) Math.floor(rnd.nextDouble()*100+1);        
        
        for(int i=1;i<=3;i++)
        {            
            System.out.println("Ingrese un numero: ");        
            miNumero = lector.nextInt();
            if(miNumero == numeroRandom)
            {                
                System.out.println("Adivinaste en el intento nro:" + intentos);
                break;
            }
            else if(miNumero < numeroRandom)
            {
                System.out.println("Te falta");
            }
            else
            {
                System.out.println("Te pasaste");
            }
            System.out.println("Tu numero: \n"+miNumero);
            System.out.println("Numero random: \n"+numeroRandom);
        }
        
        
        
        
    }
    
}

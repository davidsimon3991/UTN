import java.io.InputStreamReader;
import java.io.Reader;
import java.util.Scanner;

public class IteracionFor 
{
	public static void Ejercicio01()
	{		
		for(int i =0; i< 10; i++)
		{
			System.out.println(i+1);
		}
	}
	public static void Ejercicio02()
	{
		for(int i=10;i>0;i--)
		{
			System.out.println(i);
		}
	}
	public static void Ejercicio03()
	{
		int valor;
		Scanner lector = new Scanner(System.in);
		System.out.println("Ingrese cantidad de repeticiones: ");
		valor = Integer.parseInt(lector.nextLine());
		
		for(int i = 0; i<valor; i++)
		{
			System.out.println("UTN-FRA");			
		}
	}
	public static void Ejercicio04()
	{
		String opcion="Y";
		Scanner lector = new Scanner(System.in);		
		for(;;)
		{
			System.out.println("Salir? Y/N");
			opcion=lector.nextLine().toUpperCase();			
			if(opcion.equals("Y"))
			{
				System.out.println("DONE");
				break;
			}
		}
		
	}
	public static void Ejercicio05()
	{
		int numero;
		Scanner lector = new Scanner(System.in);
		for(;;)
		{
			System.out.println("Ingrese numero 9 para finalizar:");
			numero = Integer.parseInt(lector.nextLine());
			if(numero==9)
			{
				System.out.println("DONE");
				break;
			}
		}		
	}
	public static void Ejercicio06()
	{
		int numero;
		int pares = 0;
		Scanner lector = new Scanner(System.in);
		System.out.println("ingrese numero de iteraciones a realizar:");
		numero = Integer.parseInt(lector.nextLine());
		for(int i=0; i<numero; i++)
		{
			if(i%2==0)
			{
				System.out.println(i);
				pares++;
			}
		}
		System.out.println("Total de pares: "+ pares);
	}
	public static void Ejercicio07()
	{
		int numero;
		int divisores=0;
		Scanner lector = new Scanner(System.in);
		System.out.println("Ingrese numero de iteraciones a realizar:");
		numero = Integer.parseInt(lector.nextLine());
		for(int i = 1; i<numero; i++)
		{
			if(numero % i == 0)
			{
				System.out.println(i);
				divisores++;
			}
		}
		System.out.println("Total de divisores de "+numero+": "+divisores);
	}
	public static void Ejercicio08()
	{
		int numero;
		int primos=0;
		Scanner lector = new Scanner(System.in);
		System.out.println("Ingrese numero de iteraciones a realizar:");
		numero = Integer.parseInt(lector.nextLine());
		
		for(int i=1; i<numero; i++)
		{
			boolean esPrimo=true;
			for(int j=2; j<i; j++)
			{
				if(i % j == 0)
				{
					esPrimo = false;
				}
			}
			if(esPrimo)
			{
				System.out.println(i);
				primos++;
			}
		}
		
		System.out.println("Total de primos:"+primos);
	}

}

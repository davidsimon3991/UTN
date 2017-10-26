import java.io.InputStreamReader;
import java.io.Reader;
import java.util.Scanner;

import com.sun.xml.internal.bind.v2.runtime.Name;

public class EjerciciosWhile
{
	public static void Ejercicio01()
	{
		/*Enunciado:
		al ejecutar, mostrar 10 repeticiones con números ASCENDENTE, desde el 1 al 10.*/
		int nro = 0;		
		while(nro <10)
		{
			nro++;			
			System.out.println(nro);
		}
	}
	
	public static void Ejercicio02()
	{
		/*al ejecutar mostrar 10 repeticiones con números DESCENDENTES, desde el 10 al 1.*/
		int nro =10;
		while(nro>0)
		{
			System.out.println(nro);
			nro--;
			
		}
	}
	
	public static void Ejercicio03()
	{		
		/*al presionar el botón pedir la CLAVE (ayuda: es utn750)*/
		Scanner lector = new Scanner(System.in);
		String clave = null;
		
		System.out.println("Ingrese clave:");
		clave = lector.nextLine();
		
		while(clave.equals("utn")==false)
		{
			System.out.println("Clave incorrecta, reingrese: ");
			clave = lector.nextLine();
		}
		System.out.println("Clave correcta");
	}
	
	public static void Ejercicio04()
	{		
		/*pedir un número entre 0 y 9 inclusive.*/
		int nro;
		Scanner lector = new Scanner(System.in);
		System.out.println("ingrese numero entre 0 y 9");
		nro = Integer.parseInt(lector.nextLine());
		while(nro <0 || nro >9)
		{
			System.out.println("Solo numeros entre 0 y 9");
			nro = Integer.parseInt(lector.nextLine());
		}
		System.out.println("Ingresaste: "+ nro);		
	}
	
	public static void Ejercicio05()
	{
		/*pedir un sexo 'f' para femenino, 'm' para masculino.*/
		String sexo;
		Scanner lector=new Scanner(System.in);
		System.out.println("Ingrese F o M:");
		sexo = lector.nextLine();
		while(sexo.equals("f")==false && sexo.equals("m")==false)
		{
			System.out.println("Solo ingrese F o M");
			sexo = lector.nextLine().toLowerCase();
		}
		System.out.println("Ingreso: "+ sexo);
	}
	
	public static void Ejercicio06()
	{
		/*pedir 5 números e informar la suma acumulada y el promedio. */
		int numero=0;
		int cont=0;
		float promedio;
		Scanner lector = new Scanner(System.in);
		while(cont<5)
		{			
			System.out.println("Ingrese un numero:");
			numero += Integer.parseInt(lector.nextLine());
			cont++;
		}
		promedio = (float) numero/cont;
		System.out.println("Total ingresado: "+ numero);
		System.out.println("\nPromedio:"+promedio);
	}
	
	public static void Ejercicio07()
	{
		/*pedir números hasta que el usuario quiera e informar la suma acumulada y el promedio.*/
		int numero=0;
		String rta="Y";		
		Scanner lector = new Scanner(System.in);
		while(rta.equals("Y"))
		{
			System.out.println("ingrese un numero:");
			numero += Integer.parseInt(lector.nextLine());
			System.out.println("Continuar? Y/N");
			rta = lector.nextLine().toUpperCase();			
		}
		System.out.println("Total ingresado: "+ numero);
	}
	
	public static void Ejercicio08()
	{
		
		/*pedir números hasta que el usuario quiera
		 * sumar los que son positivos y multiplicar los negativos.*/
		int numero;
		int positivos =0;
		int negativos =0;
		String rta ="Y";
		Scanner lector = new Scanner(System.in);
		
		while(rta.equals("Y"))
		{
			System.out.println("Ingrese numero positivo o negativo:");
			numero = Integer.parseInt(lector.nextLine());
			if(numero <0)
			{
				negativos+=numero;
			}
			else
			{
				positivos += numero;
			}
			System.out.println("Continuar?Y/N");
			rta = lector.nextLine().toUpperCase();
		}
		System.out.println("Total de positivos: "+ positivos + "\nTotal de negativos: "+ negativos);
	}
	
	public static void Ejercicio09()
	{
		/*pedir números hasta que el usuario quiera
		 * mostrar el número máximo y el número mínimo.*/
		int numero;
		int max = 0;
		int min = 0;		
		boolean flag=true;
		String rta ="Y";
		Scanner lector = new Scanner(System.in);
		
		while(rta.equals("Y"))
		{
			System.out.println("Ingresar numero");
			numero = Integer.parseInt(lector.nextLine());
			if(flag == true || numero>max)
			{
				max = numero;				
			}
			if(flag == true || numero<min)
			{
				min = numero;
				flag=false;
			}
			
			System.out.println("Continuar? Y/N");
			rta = lector.nextLine().toUpperCase();
		}
		
		System.out.println("Maximo: "+max+"\nMinimo:"+min);		
		
	}
	
	public static void Ejercicio10()
	{
		/*pedir números hasta que el usuario quiera, mostar:
			1-Suma de los negativos.
			2-Suma de los positivos.
			3-Cantidad de positivos.
			4-Cantidad de negativos.
			5-Cantidad de ceros
			6-Cantidad de números pares.
			7-Promedio de positivos.
			8-Promedios de negativos.
			9-Diferencia entre positivos y negativos, (positvos-negativos).*/
		int numero;
		int negativo = 0;
		int positivo = 0;
		int totalNeg = 0;
		int totalPos = 0;
		int totalCeros = 0;
		int totalPares = 0;
		float promedioPos;
		float promedioNeg;
		int diferencia;
		
		String rta ="Y";
		Scanner lector = new Scanner(System.in);		
		
		while(rta.equals("Y"))
		{
			System.out.println("Ingrese numero positivo o negativo:");
			numero = Integer.parseInt(lector.nextLine());
			if(numero<0)
			{
				negativo += numero;
				totalNeg++;
			}
			else if(numero>0)
			{
				positivo+=numero;
				totalPos++;
			}
			else
			{
				totalCeros++;
			}
			if(numero%2==0)
			{
				totalPares++;
			}
						
			System.out.println("Continuar?Y/N");
			rta = lector.nextLine().toUpperCase();
		}
		
		promedioPos = (float) positivo/totalPos;
		promedioNeg = (float) negativo/totalNeg;
		diferencia = positivo + negativo;
		
		System.out.println("Sumatoria de positivos:"+positivo);
		System.out.println("Sumatoria de negativos:"+negativo);
		System.out.println("Total de positivos ingresados:"+totalPos);
		System.out.println("Total de negativos ingresados:"+totalNeg);
		System.out.println("Total de ceros ingresados: "+totalCeros);
		System.out.println("Total de pares ingresados:"+totalPares);
		System.out.println("Promedio de positivos:"+promedioPos);
		System.out.println("Promedio de negativos:"+promedioNeg);
		System.out.println("Diferencia positivos - negativos:"+diferencia);
		
		
	}

}

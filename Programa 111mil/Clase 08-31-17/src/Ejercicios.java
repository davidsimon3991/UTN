import java.util.Scanner;

public class Ejercicios {

	public static void Ejercicio01()
	{
		/*Algoritmo que pida dos numeros y los sume*/
		int num1, num2, resultado;
		Scanner lector = new Scanner(System.in);
		
		System.out.println("Ingrese un numero: ");
		num1 = Integer.parseInt(lector.nextLine());
		System.out.println("ingrese otro numero: ");
		num2 = Integer.parseInt(lector.nextLine());
		
		resultado = num1 + num2;
		
		System.out.println("la suma es : "+ resultado);				
	}
	public static void Ejercicio02()
	{
		/*Algoritmo para logearse*/
		String usuario;
		String clave;
		Scanner lector = new Scanner(System.in);
		
		System.out.println("Ingrese usuario: ");
		usuario = lector.nextLine();
		System.out.println("Ingrese clave: ");
		clave = lector.nextLine();
		
		if(usuario.equals("alumno")  && clave.equals("1234"))
		{
			System.out.println("Ha ingresado bien");
		}
		else
		{
			System.out.println("Usuario y/o clave incorrecto");
		}
		
	}
}

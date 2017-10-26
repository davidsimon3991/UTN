import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		/* Ejemplo1
		  String aux;
		String nombre;
		int edad;		
		Scanner lector = new Scanner(System.in);		
		
		System.out.println("Ingrese su nombre: ");
		nombre = lector.nextLine();
		System.out.println("Ingrese su edad: ");
		aux = lector.nextLine();
		edad = Integer.parseInt(aux);
		
		System.out.println("Su nombre es: "+ nombre);
		System.out.print("Su edad es: "+ edad);*/

		
		int numero=0;
		int i=0;
		Scanner lector = new Scanner(System.in);
		while(i<10)
		{
			System.out.println("Ingrese un numero");
			numero += Integer.parseInt(lector.nextLine());
			i++;
		}
		System.out.println("\ningreso total: "+ numero);
		System.out.println("\nHa llegado al limite de ingresos");
	}

}


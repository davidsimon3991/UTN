import java.util.Scanner;

public class main
{	
	public static void main(String[] args)
	{				
		int opcion;
		Scanner lector = new Scanner(System.in);
		System.out.println("1-Ejercicio01");
		System.out.println("2-Ejercicio02");
		System.out.println("3-Ejercicio03");
		System.out.println("4-Ejercicio04");
		System.out.println("5-Ejercicio05");
		System.out.println("6-Ejercicio06");
		System.out.println("7-Ejercicio07");
		System.out.println("8-Ejercicio08");
		System.out.println("9-Ejercicio09");
		System.out.println("10-Ejercicio10");
		System.out.println("11-Exit");
		System.out.println("Eliga opcion:");
		opcion = Integer.parseInt(lector.nextLine());
		
		switch(opcion)
		{
		case 1:
			EjerciciosWhile.Ejercicio01();
			break;
		case 2:
			EjerciciosWhile.Ejercicio02();
			break;

		}
	}
	

}


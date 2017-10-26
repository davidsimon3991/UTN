import java.io.InputStreamReader;
import java.io.Reader;
import java.util.Scanner;


public class Vectores
{	
	public static void inicializarVector()
	{		
		int[] vecNumeros = new int[10];		
		
		for(int i=1;i<10;i++)
		{
			vecNumeros[i]+=i;
		}
		for(int i=0; i<10; i++)
		{
			System.out.println(vecNumeros[i]+1);
		}		
	}
	public static void Productos()
	{
		int idProducto;
		String nombre;
		int stock;
		float precio;
		
		float precioVta;		
		float max = 0;
		float min = 0;
		float total;
		boolean flag=true;
		
		Scanner lector = new Scanner(System.in);
		
		for(int i=0; i<3;i++)
		{
			System.out.println("Ingrese id producto: ");
			idProducto=Integer.parseInt(lector.nextLine());
			System.out.println("Ingrese nombre: ");
			nombre = lector.nextLine();
			System.out.println("Ingrese Stock: ");
			stock = Integer.parseInt(lector.nextLine());
			System.out.println("Ingrese precio: ");
			precio = Integer.parseInt(lector.nextLine());
			
			if(flag==true || precio>max)
			{
				max=precio;
			}
			if (flag ==true || precio<min)
			{
				min=precio;
				flag=false;
			}
						
			total = stock * precio;
			precioVta = (float) (total * 1.3);
			
			System.out.println("--------------------------------------------------");
			System.out.println("Producto: "+ nombre + " |ID: "+idProducto);
			System.out.println("Venta total +30%: $"+precioVta);
			System.out.println("Venta total: $"+ total);
			System.out.println("Precio maximo: $"+ max + " |Precio minimo: $"+min);
			if(stock>10)
			{
				System.out.println("Stock mayor a 10: "+stock+" unidades");
			}			
		}		
	}
	public static void Productos2()
	{
		int idProd, stock = 0;
		double precio, total = 0, max, min;
		String nombre, nombreMayoraDiez;
		Scanner s =new Scanner (System.in);
		for(int i=0;i<20;i++)
		{
			idProd = i;
			System.out.println("ingrese nombre producto:");
			nombre = s.nextLine();
			System.out.println("Ingrese precio:");
			precio = Double.parseDouble(s.nextLine());
			nombre = "Producto Nº "+ i;
			stock +=i;
			precio = precio *1.3;
			total += precio * stock;
			if(stock>10)
			{
				nombreMayoraDiez= nombre;
			}
			
			
		}
	}
	public static void Productos3()
	{		
		//hardcodeo de vector
			//int vector[]={1,2,3,4};
		// declarado normal
		int cant =5;
		int[] vector = new int [100];
		String[] nombres = new String[cant];
		int[] edades = new int[cant];
		
		Scanner s = new Scanner(System.in);
		
		for(int i=0;i<100;i++)
		{
			vector[i]=i+1;
		}
		for(int i=0;i<cant;i++)
		{
			System.out.println("Ingrese nombre:");			
			nombres[i]=s.nextLine();
			System.out.println("Ingrese edad:");
			edades[i]=Integer.parseInt(s.nextLine());
			
		}
		/*for(int i=0;i<100;i++)
		{
			System.out.println("Indice "+i+"--------->"+vector[i]);
		}*/
		for(int i=0;i<cant;i++)
		{
			System.out.println(nombres[i]+" tiene "+ edades[i]+" años");					
		}
		
	}
	public static void Productos4()
	{
		int indice=3;
		int[]ids= new int[indice];
		String[]nombres= new String[indice];
		int[] stocks=new int[indice];
		double[] precios= new double[indice];
		
		double[] preciosVta = new double[indice];
		double[] totales= new double[indice];
		int[] stocksAltos= new int[indice];
		
		boolean flag=true;
		double max = 0, min = 0;
		
		Scanner s = new Scanner(System.in);
		
		for(int i=0;i<indice;i++)
		{
			ids[i]=i;
			System.out.println("Ingrese nombre de producto:");
			nombres[i]=s.nextLine();
			System.out.println("Ingrese stock:");
			stocks[i]=Integer.parseInt(s.nextLine());
			System.out.println("Ingrese precio bruto:");
			precios[i]=Double.parseDouble(s.nextLine());
			
			if(flag==true | precios[i]>max)
			{
				max=precios[i];
			}
			if(flag==true| precios[i]<min)
			{
				min=precios[i];
				flag=false;
			}
			preciosVta[i]= precios[i]*1.3;
			totales[i]= stocks[i]*precios[i];
			if(stocks[i]>10)
			{
				stocksAltos[i]=stocks[i];
			}
		}
		for(int i=0 ;i<indice; i++)
		{
			System.out.println("--------------------------------------------------------");
			System.out.println("Producto: "+ nombres[i]+" - id: "+ids[i]);
			System.out.println("Precio vta +30%: $"+preciosVta[i]);
			System.out.println("Precio bruto: $"+precios[i]);
			if(stocksAltos[i]>10)
			{
				System.out.println("Tiene "+stocksAltos[i]+" unidades");
			}
			else
			{
				System.out.println("Stock inferior a 10 unidades");
			}
				
			
		}
		System.out.println("--------------------------------------------------------");
		System.out.println("Precio maximo: $"+max+" Precio minimo: $"+min);
		
	}
}

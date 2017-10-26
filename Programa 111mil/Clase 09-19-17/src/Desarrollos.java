import java.util.Scanner;


public class Desarrollos 
{
    public static int[] inicializarVector(int tam)
    {        
        int[] vector = {4,3,-9,7,-3,5,4,9,1,20};      
                
        return vector;
    }
    public static int[] cargarVector(int tam)
    {        
        int[] vector = new int[tam];
        Scanner lector = new Scanner(System.in);
        
        for(int i=0;i<tam;i++)
        {
            System.out.println("Ingrese un numero: ");
            vector[i] = lector.nextInt();
            //vector[i] = Integer.parseInt(lector.nextLine());
        }
        return vector;
    }
    public static void mostrarVector(int vector[],int tam)
    {
        for(int i =0;i<tam;i++)
        {
            System.out.println(i+1+": "+vector[i]);
        }
    }
    public static void mostrarPositivos(int vector[],int tam)
    {
        for(int i =0;i<tam;i++)
        {
            if(vector[i] >0)
            {
                System.out.println(i+1+": "+vector[i]);
            }            
        }
    }
    public static void mostrarNegativos(int vector[],int tam)
    {
        for(int i =0;i<tam;i++)
        {
            if(vector[i] <0)
            {
                System.out.println(i+1+": "+vector[i]);
            }            
        }
    }
    public static void mostrarOrdenadosAsc(int vector[],int tam)
    {
        int auxInt;
        int cont=0;
        for(int i =0;i<tam-1;i++)
        {
            for(int j=i+1;j<tam;j++)
            {
                if(vector[i]>vector[j])
                {
                    auxInt = vector[i];
                    vector[i] = vector[j];
                    vector[j]= auxInt;
                    cont++;                   
                }
            }                        
        }        
        mostrarVector(vector, tam);
        System.out.println("Ordenamientos: "+ cont);
    }
public static void mostrarNegPos(int vector[],int tam)
{
    int auxInt;
    for(int i=0;i<tam-1;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(vector[i] < 0 && vector[i] > vector[j])
            {
                auxInt = vector[i];
                vector[i] = vector[j];
                vector[j] = auxInt;
            }
        }
    }
    System.out.println("---------Negativos---------");
    mostrarNegativos(vector, tam);
    
    for(int i=0;i<tam-1;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(vector[i] > 0 && vector[i] < vector[j])
            {
                auxInt = vector[i];
                vector[i] = vector[j];
                vector[j] = auxInt;
            }
        }
    }
    System.out.println("---------Positivos---------");
    mostrarPositivos(vector, tam);
}

public static void cargarVectorC()
{
   int tam =10;
   int[] A = {4,3,-9,7,-3,5,4,-9,1,15};
   int[] B = {1,7,9,-5,-2,10,-4,-19,7,13};
   int[] C = new int[tam];
   
   for(int i =0;i<tam;i++)
   {
       if(A[i]>=B[i])
       {
           C[i] = A[i];
       }
       else
       {
           C[i]=B[i];
       }       
 }
   for(int i=0;i<tam;i++)
   {
       System.out.println(i+1+": "+C[i]);
   }
}
}

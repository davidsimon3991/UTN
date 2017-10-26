import java.util.Scanner;
/*
    Crear 4 vectores de strings de 10 elementos:
    (Preguntas, RespuestasCorrectas, Puntajes, RespuestasParticipante)
    
    Realizar un menú de opciones que permita:
        a.Cargar las preguntas con las respuestas correctas.
        b.Jugar: El participante deberá responder a cada una de las preguntas
        c.Mostrar puntuación, sabiendo que cada pregunta correcta vale 10 puntos.
    */ 
public class PreguntasRespuestas
{
    public static void main()
    {
        int tam=3;
        String []preguntas = new String[tam];
        String [] respuestasCorrectas = new String[tam];
        String [] respuestasJugador = new String[tam];
        int [] puntuacion = new int[tam];
        
        inicializarPuntuacion(puntuacion,tam);
        
        int opcion=0;
        boolean flag=true;
        Scanner lector = new Scanner(System.in);        
        
        do
        {            
            System.out.println("1.Cargar preguntas\n2.Jugar");
            System.out.println("3.Mostrar puntuacion\n4.Salir");            
            opcion = lector.nextInt();
            switch(opcion)
            {
                case 1:
                    cargarPreguntas(preguntas,respuestasCorrectas,tam);
                    break;
                case 2:
                   jugar(preguntas,respuestasJugador,tam);
                    break;
                case 3:
                   mostrarPuntuacion(respuestasCorrectas,respuestasJugador, puntuacion,tam);
                    break;
                case 4:
                    flag = false;
                    break;                
                default:
                    System.out.println("Opcion no encontrada:");                    
            }           
        }while(flag);
       
    }
    public static void inicializarPuntuacion(int puntuacion[],int tam)
    {
        for(int i=0;i<tam;i++)
        {
            puntuacion[i]=0;
        }
    }
            public static void cargarPreguntas(String preguntas[],String respuestasCorrectas[],int tam)
            {
                    Scanner lector = new Scanner(System.in);
                    for(int i=0;i<tam;i++)
                        {
                            System.out.println("Ingrese pregunta "+i+1+":");
                            preguntas[i] = lector.nextLine();                            
                            System.out.println("Ingrese su respuesta: ");
                            respuestasCorrectas[i] = lector.nextLine();
                            
                        }
            }
            public static void jugar(String preguntas[],String respuestasJugador[],int tam)
            {
                Scanner lector = new Scanner(System.in);
                for(int i=0;i<tam;i++)
                {                    
                    System.out.println(preguntas[i]);
                    respuestasJugador[i]=lector.nextLine();
                }
            }
            public static void mostrarPuntuacion(String respuestasCorrectas[],String respuestasJugador[],int puntuacion[],int tam)
            {
                int total=0;
                int rtas=0;
                for(int i=0;i<tam;i++)
                {
                    if(respuestasJugador[i].equals(respuestasCorrectas[i]))
                    {
                        puntuacion[i]=10;
                    }
                }
                for(int i=0;i<tam;i++)
                {
                    total+=puntuacion[i];
                    if(puntuacion[i]==10)
                    {                        
                        rtas++;
                    }
                }
                System.out.println("Puntuacion total: "+total+"\nRespuestas correctas: "+rtas);
            }
    
}

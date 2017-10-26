function Mostrar()
{

	
	var negativo = 0;
	var positivo = 0;
	var promedioPositivos, promedioNegativos, diferencia;

	// contadores
	var _negativos = 0;
	var _positivos = 0;
	var _ceros = 0;
	var _pares = 0;

	/* 
	Enunciado:
		Al presionar el botón pedir números hasta que el usuario quiera, mostar:
	1-Suma de los negativos.	2-Suma de los positivos.
	3-Cantidad de positivos.	4-Cantidad de negativos.
	5-Cantidad de ceros.		6-Cantidad de números pares.
	7-Promedio de positivos.	8-Promedios de negativos.
	9-Diferencia entre positivos y negativos, (positvos-negativos).
	*/

		//declarar contadores y variables 
	
	
	do
	{
		numero = parseInt(prompt("ingrese numero"));
		while(isNaN(numero))
		{
			numero = parseInt(prompt("ERROR. Reingrese numero"));
		}

		if (numero > 0)
		{
			positivo += numero;
			_positivos++;
			
		}
		else if (numero <0)
		{
			negativo += numero;
			_negativos++;
			
		}
		else
		{
			_ceros ++;
		}		

		
		if (numero % 2 == 0)
		{
			_pares ++;
		}
		

	}while(confirm("continuar?"));
	
	if (_positivos !=0)
		{
			promedioPositivos = positivo / _positivos;
		}
		if (_negativos != 0)
		{
			promedioNegativos = negativo / _negativos;
		}		
		
		diferencia = positivo + negativo; 

	
document.write("Suma de positivos: " + positivo + "</br>");
document.write("Suma de negativos: " +  negativo +"</br>");
document.write("Total de positivos: " + _positivos + "</br>");
document.write("Total de negativos: " +  _negativos +"</br>");
document.write("Total de ceros: " + _ceros + "</br>");
document.write("Total de pares: " + _pares + "</br>");
document.write("Promedio de positivos: " +  promedioPositivos +"</br>");
document.write("Promedio de negativos: " + promedioNegativos + "</br>");
document.write("Diferencia entre positivos y negativos " + diferencia + "</br>");



}//FIN DE LA FUNCIÓN
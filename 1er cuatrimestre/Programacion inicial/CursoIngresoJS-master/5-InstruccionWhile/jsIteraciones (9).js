function Mostrar()
{

	//var contador=0;
	var numero;
	var max = 1;
	var min = 0;
	var flag = true;
	
	

	do 
	{
		numero = parseInt(prompt("ingrese numero"));
		while(isNaN(numero))
		{
			numero = parseInt(prompt("ERROR. Reingrese numero"));
		}
		if (numero > max)
		{
			max = numero;

		}
		if (numero < min)
		{
			min = numero;
			flag = false;			
		}

	}
	while(confirm("continuar?"));
	if(flag)
	{
		min = numero;
	}


		document.getElementById("maximo").value = max;
		document.getElementById("minimo").value = min;


}//FIN DE LA FUNCIÓN
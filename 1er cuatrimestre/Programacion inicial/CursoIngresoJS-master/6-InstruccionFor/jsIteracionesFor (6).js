function Mostrar()
{
	var _totalPares=0;
	var numero = parseInt(prompt("Ingrese numero"));
		while(isNaN(numero))
		{
			numero = parseInt(prompt("ERROR. Reingrese numero"));
		}

	for (i=0;i < numero ;i++)
	{		
		if (i % 2 == 0)
		{
			_totalPares++;
		}
		
	}

	document.write("Total de números pares: " + _totalPares  );



}//FIN DE LA FUNCIÓN
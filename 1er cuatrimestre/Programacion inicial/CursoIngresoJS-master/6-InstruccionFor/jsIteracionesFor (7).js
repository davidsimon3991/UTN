function Mostrar()
{
	var numero = parseInt(prompt("ingrese un numero"));

	for (i=1; i < numero /2; i++ )
	{
		if (numero % i == 0)
		{
			document.write(numero + " tiene el divisor " +  i, ", </br>");
		}
	}




}//FIN DE LA FUNCIÓN
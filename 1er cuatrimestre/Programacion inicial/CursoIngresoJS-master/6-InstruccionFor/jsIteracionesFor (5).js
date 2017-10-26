function Mostrar()
{

	for (i=0; ;i++)
	{
		i = parseInt(prompt("Ingrese numero"));
		while(isNaN(i))
		{
			i = parseInt(prompt("ERROR. Reingrese numero"));
		}
		if (i == 9)
		{
			break;
		}
		document.write(i + "</br>");

	}




}//FIN DE LA FUNCIÓN
function Mostrar()
{
	var numero = parseInt(prompt("ingrese numero"));
	var primo = true;

	for (i = 2; i < numero / 2; i++)
	{
		if (numero % i ==0)
		{
			primo = false;
		}		


	}
	if (primo)
	{
		alert(numero + " ES un número primo");
	}
	else
	{
		alert(numero + " NO es un número primo");
	}




}//FIN DE LA FUNCIÓN
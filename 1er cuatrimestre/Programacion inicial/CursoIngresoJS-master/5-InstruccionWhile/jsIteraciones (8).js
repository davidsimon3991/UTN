function Mostrar()
{
	var numero;
	var contador=0;
	var positivo=0;
	var negativo=1;
	var flag = true;
	
	var respuesta = true;

	do
	{
		numero = parseInt(prompt("ingrese un valor positivo"));

		while(isNaN(numero))
			{
				numero = parseInt(prompt("ERROR. ingrese NUMERO "));
			}
		if (numero >= 0)
		{
			positivo += numero;
		}
		else if(numero <0)
		{
			negativo *= numero;
			flag = false;
		}		
				
		;

	}	
	while (confirm("continuar?"));

	if (flag)
	{
		negativo = 0;
	}



document.getElementById('suma').value=positivo;
document.getElementById('producto').value=negativo;

}//FIN DE LA FUNCIÓN
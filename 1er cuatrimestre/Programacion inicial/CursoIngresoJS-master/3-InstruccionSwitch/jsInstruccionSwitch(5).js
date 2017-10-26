function Mostrar()
{
//tomo la edad  
var laHora = parseInt(document.getElementById("hora").value);

//alert (laHora);
	
	switch (laHora)
	{
		case 7: case 8: case 9: case 10: case 11:
		default:
			{
				if (laHora >= 7 && laHora <= 11)
					alert("es de mañana")
				break;
			}		
	}



}//FIN DE LA FUNCIÓN
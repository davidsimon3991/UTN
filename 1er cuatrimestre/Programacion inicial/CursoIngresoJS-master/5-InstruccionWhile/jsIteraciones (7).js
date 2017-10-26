function Mostrar()
{
	var numero;
	var contador=0;
	var acumulador=0;
	var respuesta = "y";
	
	

while (respuesta == "y" || respuesta == "Y")
{	
	numero = parseInt(prompt("Ingrese numero"));	

	while (isNaN(numero))
	{
		numero = parseInt(prompt("ERROR. Ingrese numero"));						
	}	
	acumulador = acumulador + numero;
	contador++;	
	respuesta = prompt("continuar? Y/N");
}

document.getElementById('suma').value=acumulador;
document.getElementById('promedio').value=acumulador/contador;

}//FIN DE LA FUNCIÓN
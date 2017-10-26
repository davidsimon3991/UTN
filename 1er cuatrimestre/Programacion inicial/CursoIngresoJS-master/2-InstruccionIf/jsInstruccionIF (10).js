0function Mostrar()
{
	//Genero el número RANDOM entre 1 y 10 
	var nota;
	nota = Math.round(Math.random() *10);

	if (nota >= 9)
	{
		alert (nota + ": EXELENTE");		
	}
	else if (nota >= 4)
	{
		alert (nota + ": APROBADO");
	}
	else 
	{
		alert (nota + ": DESAPROBADO");
	}

	//Math.random();	= es solo para mostrar un numero entre 0 y 1, sin contar el 1
	//Math.round(Math.random()*10); = para mostrar un numero entre 0 y 10, sin contar el 10
	//Math.round((Math.random()*10)+1); = lo mismo que el anterior

}//FIN DE LA FUNCIÓN
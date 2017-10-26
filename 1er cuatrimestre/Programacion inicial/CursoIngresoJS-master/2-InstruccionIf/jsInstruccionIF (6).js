function Mostrar()
{
//tomo la edad  
var edad;
edad = parseInt(document.getElementById("edad").value);

if (edad < 13)
{
	alert("Usted es un niño");
}
else if (edad >17)
{
	alert("Usted es un adulto");
}
else 
{
	alert("Usted es adolescente");
}


/*		//OPCION B


if (!(edad <13 || edad > 17))
{
	alert ("usted es ADOLESCENTE");
}
else if (edad > 17)
{
	alert ("usted es ADULTO");
}
else 
{
	alert("usted es NIÑO");
}

*/



}//FIN DE LA FUNCIÓN
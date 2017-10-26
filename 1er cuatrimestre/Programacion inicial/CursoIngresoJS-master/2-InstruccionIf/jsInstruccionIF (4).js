function Mostrar()
{
//tomo la edad  
var edad;
edad = document.getElementById("edad").value;

if (edad >=13 && edad <=17)
{
	alert ("usted es un adolescente");	
}
else if(edad >=18)
{
	alert("adulto");
}
else
{
	alert("niño");
}

}//FIN DE LA FUNCIÓN
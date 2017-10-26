function Mostrar()
{
//tomo la edad  
var age, relationship;

age =parseInt(document.getElementById("edad").value); 
relationship = document.getElementById("estadoCivil").value;

	if (age <18 && relationship != "Soltero")
	{
		alert("es muy chico para NO ser soltero");
	}


}//FIN DE LA FUNCIÓN
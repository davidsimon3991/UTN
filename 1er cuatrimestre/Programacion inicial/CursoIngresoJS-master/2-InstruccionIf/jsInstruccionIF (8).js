function Mostrar()
{
//tomo la edad  
var age,relationship;

age = document.getElementById("edad").value;
relationship = document.getElementById("estadoCivil").value;

if (age >= 18 && relationship == "Soltero")
{
	alert("Es soltero y no es menor");
}

	


}//FIN DE LA FUNCIÓN
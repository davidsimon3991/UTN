/*Debemos lograr tomar nombre y edad por ID y mostrarlos concatenados 
ej.: "Usted se llama José y tiene 66 años" 	*/
function Mostar()
{	
	var name;
	var age;
	name = document.getElementById("elNombre").value ;
	age = document.getElementById("laEdad").value;

	alert("Su nombre es "+ name + ", y tiene " + age + " años.");
} 


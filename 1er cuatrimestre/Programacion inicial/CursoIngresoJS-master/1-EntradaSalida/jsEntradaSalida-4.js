/* 
	Debemos lograr tomar un dato por 'PROMPT' 
	y lo muestro por 'getElementById' al presionar el botón 'MOSTRAR'
*/
function Mostar()
{
	var name;
	name = prompt ("ingrese nombre");
	document.getElementById("elNombre").value = name;


}


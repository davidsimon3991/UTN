/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostar el resulto por medio de "ALERT"
ej.: "la Resta es 750"*/ 
var num1, num2;
var resultado;





function sumar()
{	
	num1 = document.getElementById("numeroUno").value;
	num2 = document.getElementById("numeroDos").value;

	num1 = parseInt(num1);
	num2 = parseInt(num2);

	resultado = num1 + num2;
	alert ("la suma de "+num1+" y "+num2+ " da como resultado: "+ resultado);
}

function restar()
{
	num1 = document.getElementById("numeroUno").value;
	num2 = document.getElementById("numeroDos").value;

	num1 = parseInt(num1);
	num2 = parseInt(num2);

	resultado = num1 - num2;
	alert("la resta de "+num1+" y "+num2+ " da como resultado: "+ resultado);
}

function multiplicar()
{ 
	num1 = document.getElementById("numeroUno").value;
	num2 = document.getElementById("numeroDos").value;

	num1 = parseInt(num1);
	num2 = parseInt(num2);
	
	resultado = num1 * num2;
	alert("la multiplicación de "+num1+" y "+num2+ " da como resultado: "+ resultado);
}

function dividir()
{
	num1 = document.getElementById("numeroUno").value;
	num2 = document.getElementById("numeroDos").value;

	num1 = parseInt(num1);
	num2 = parseInt(num2);
	
	resultado = num1 / num2;
	
	if (num2 == 0)
	{
		alert ("COMO VAS A DIVIDIR POR CERO LA CONCHA DE TU MADRE");
	}
	else
	 {
		alert("la división de "+num1+" y "+num2+ " da como resultado: "+ resultado);
	}
}


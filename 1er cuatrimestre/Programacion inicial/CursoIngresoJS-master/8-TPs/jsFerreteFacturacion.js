/*1.	Para el departamento de facturación:
A.	Ingresar tres precios de productos y mostrar la suma de los mismos.
B.	Ingresar tres precios de productos y mostrar el promedio de los mismos.
C.	ingresar tres precios de productos  y mostrar precio final (más IVA 21%).
*/

//var num1, num2, num3;
var rdo = 0;
var prom = 0;
var num1, num2, num3;



function Sumar () 
{
	num1 = parseInt(document.getElementById("PrecioUno").value);
	num2 = parseInt(document.getElementById("PrecioDos").value);
	num3 = parseInt(document.getElementById("PrecioTres").value);
	rdo = num1 + num2 + num3;
	alert("la suma es: " + rdo);
	
}
function Promedio () 
{
	num1 = parseInt(document.getElementById("PrecioUno").value);
	num2 = parseInt(document.getElementById("PrecioDos").value);
	num3 = parseInt(document.getElementById("PrecioTres").value);
	prom = (num1 + num2 + num3) /3;
	alert ("el promedio es: "+ prom) 
	
}
function PrecioFinal () 
{
	num1 = parseInt(document.getElementById("PrecioUno").value);
	num2 = parseInt(document.getElementById("PrecioDos").value);
	num3 = parseInt(document.getElementById("PrecioTres").value);
	precioConIVA = (num1+num2+num3)*1.21;
	alert("precio (con IVA inculído): " + precioConIVA);
	
}
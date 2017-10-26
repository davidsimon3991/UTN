/*2.	Para el departamento de Construcción:
A.	 Mostrar la cantidad de alambre a comprar  si se ingresara el largo y el ancho de un terreno rectangular y se debe alambra con tres hilos de alambre.
B.	Mostrar la cantidad de alambre a comprar  si se ingresara el radio  de un terreno circular y se debe alambra con tres hilos de alambre.
C.	Para hacer un contrapiso de 1m x 1m se necesitan 2 bolsas de cemento y 3 de cal, debemos mostrar cuantas bolsas se necesitan de cada uno para las medidas que nos ingresen.
*/
var largo, ancho, radio;
var _rectangulo, _circulo, _contrapiso;

function Rectangulo () 
{
	largo = document.getElementById("Largo").value;
	ancho = document.getElementById("Ancho").value;	
	_rectangulo = 3*((largo*2)+(ancho*2));
	alert("se necesitan " + _rectangulo + " mts. de alambre");

}
function Circulo () 
{
    radio = document.getElementById("Radio").value;
    _circulo = 3 * (2 * (3.14 * radio));
    alert("se neceitan " + _circulo + " mts. de alambre");
}
function Materiales () 
{
    ancho = document.getElementById("Ancho").value;
    largo = document.getElementById("Largo").value;
    _rectangulo = (largo*2)+(ancho*2);
    _cal = 3 * ancho;
    _cemento = 2 * largo;
    alert("se necesitan " + _cal + " bolsas de cal, "+ " y " + _cemento +" bolsas de cemento, para una superficie de "+ _rectangulo +"mts 2");
}
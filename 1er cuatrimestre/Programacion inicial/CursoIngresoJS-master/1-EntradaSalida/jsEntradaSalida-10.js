/*Debemos lograr tomar el importe por ID.
Transformarlo a entero (parseInt), luego
mostrar el importe con un Descuento del 25 %
en el cuadro de texto "RESULTADO"*/
function MostrarAumento()
{
	var _precio, _descuento;
	_precio = document.getElementById("importe").value;

	_precio = parseInt(_precio);
	_descuento = parseFloat(_descuento);

	_descuento = (_precio * 25) /100;

	document.getElementById("resultado").value = _precio - _descuento;

	alert("el descuento de " + _precio + " es de " + _descuento  );

}

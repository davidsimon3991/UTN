/*Debemos lograr tomar el importe por ID ,
transformarlo a entero (parseInt), luego
mostrar el importe con un aumento del 10 %
en el cuadro de texto "RESULTADO".*/
function MostrarAumento()
{
	var _sueldo, _adicional;
	
	_sueldo = document.getElementById("sueldo").value;	

	_sueldo = parseInt(_sueldo);
	_adicional = parseFloat(_sueldo);

	_adicional = (_sueldo * 10) / 100;

	document.getElementById("resultado").value = _sueldo + _adicional;

	alert ("Su sueldo ha obtenido un aumento de " + _adicional);
	

}

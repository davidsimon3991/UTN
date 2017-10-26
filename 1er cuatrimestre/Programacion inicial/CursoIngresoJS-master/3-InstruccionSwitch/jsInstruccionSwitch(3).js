function Mostrar()
{
//tomo la edad  
var mesDelAño = document.getElementById("mes").value;

switch (mesDelAño)
{
	case "Febrero":
	{
		alert("este mes tiene 28 dias");
		break;
	}
	default:
	alert("Este mes tiene 30 días o más");
	break;	
}

/*if (mesDelAño !="Febrero")
	{
		alert("Este mes tiene 30 días o más");
	}
//alert (mesDelAño);
*/	
	


}//FIN DE LA FUNCIÓN
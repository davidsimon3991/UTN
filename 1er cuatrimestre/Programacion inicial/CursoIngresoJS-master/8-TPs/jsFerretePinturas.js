/*3.	Para el departamento de Pinturas:
A.	Al ingresar una temperatura en Fahrenheit debemos mostrar la temperatura en Centígrados con un mensaje concatenado (ej.: " 32 Fahrenheit son 0 centígrados").
B.	Al ingresar una temperatura en Centígrados debemos mostrar la temperatura en Fahrenheit (ej.: "0  centígrados son 32 Fahrenheit ").
*/

var centigrados, fahrenheit, temperatura;
function FahrenheitCentigrados () 
{
    temperatura = document.getElementById("Temperatura").value;
    centigrados = ((temperatura - 32) * 5) / 9;
    alert(temperatura + "°F es igual a " + centigrados + "C°");

}

function CentigradosFahrenheit () 
{
    temperatura = document.getElementById("Temperatura").value;
    fahrenheit = ((temperatura * 9) / 5) + 32;
    alert(temperatura + "°C es igual a " + fahrenheit + " °F");
}

/*4.	Para el departamento de iluminación:
Tomando en cuenta que todas las lámparas están en oferta al mismo precio de $35 pesos final.
A.	Si compra 6 o más  lamparitas bajo consumo tiene un descuento del 50%. 
B.	Si compra 5  lamparitas bajo consumo marca "ArgentinaLuz" se hace un descuento del 40 % y si es de otra marca el descuento es del 30%.
C.	Si compra 4  lamparitas bajo consumo marca "ArgentinaLuz" o “FelipeLamparas” se hace un descuento del 25 % y si es de otra marca el descuento es del 20%.
D.	Si compra 3  lamparitas bajo consumo marca "ArgentinaLuz"  el descuento es del 15%, si es  “FelipeLamparas” se hace un descuento del 10 % y si es de otra marca un 5%.
E.	Si el importe final con descuento suma más de $120  se debe sumar un 10% de ingresos brutos en informar del impuesto con el siguiente mensaje:
 ”Usted pago X de IIBB.”, siendo X el impuesto que se pagó. 

 */
function CalcularPrecio () 
{
    var precio, precioFinal, descuento;
    var flag = true;

    var cantLamparas = document.getElementById("Cantidad").value;
    var marca = document.getElementById("Marca").value;

    

    switch (marca, cantLamparas)
    {
        case "ArgentinaLuz": case "5":
            descuento = 0.5;
            break;

        case "ArgentinaLuz","4":        
            descuento = 0.75;
            break;

        default:
            descuento = 1;
            break;
            
    }

    precio = 35 * cantLamparas;
    precioFinal = precio * descuento;
    /*if (precioFinal > 120)
    {
        precioFinal = precioFinal * 0.1;
        ib = precioFinal - precio;
        alert("pagaste IB:"+ib);
    }*/
    
    document.getElementById("precioDescuento").value = precioFinal;
    
    
}

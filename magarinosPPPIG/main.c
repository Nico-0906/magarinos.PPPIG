#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precio);

int main()
{
    float precioSinDescuento = 100.10;
    float precioConDescuento;

    precioConDescuento = aplicarDescuento(precioSinDescuento);

    printf("El precio con descuento es %.2f ", precioConDescuento);

    return 0;
}

float aplicarDescuento(float precio){
    float retorno;
    float descuento;

    descuento = (5 * precio) / 100;
    retorno = precio - descuento;

    return retorno;
}

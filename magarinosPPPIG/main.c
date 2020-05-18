#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char caracter);

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
    char cadenaContar[20] = {"Buenas tardes"};
    int cantidadDeA;

    cantidadDeA = contarCaracteres(cadenaContar, 'a');

    printf("La cantidad de A en la cadena es %d \n", cantidadDeA);

    descuento = (5 * precio) / 100;
    retorno = precio - descuento;

    return retorno;
}

int contarCaracteres(char cadena[], char caracter){
    int retorno = 0;

    for(int i = 0; cadena[i] != '\0' ; i++){
        if(cadena[i] == caracter){
            retorno++;
        }
    }

    return retorno;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMNOTE 5

typedef struct{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

}eNotebook;

void ordenarMarcaPrecio(eNotebook notebooks[], int tam);
float aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char caracter);

int main()
{
    eNotebook notebooks[TAMNOTE] = {{100, "Intel", "Dell", 70500.50}, {101, "AMD", "Bangho", 50366.30}, {102, "Intel", "Comodore", 25500.10}, {103, "AMD", "Dell", 25500.20}, {104, "Intel", "Bangho", 30000.50}};

    printf("*****Antes de ordenar******\n\n");
    printf("ID        PROCESADOR      MARCA      PRECIO\n");
    for(int i = 0 ; i < TAMNOTE; i++){
        printf("%d    %10s     %10s     %8.2f\n", notebooks[i].id, notebooks[i].procesador, notebooks[i].marca, notebooks[i].precio);
    }

    ordenarMarcaPrecio(notebooks, TAMNOTE);

    printf("\n*****Despues de ordenar*****\n\n");
    printf("ID        PROCESADOR      MARCA      PRECIO\n");
    for(int i = 0 ; i < TAMNOTE; i++){
        printf("%d    %10s     %10s     %8.2f\n", notebooks[i].id, notebooks[i].procesador, notebooks[i].marca, notebooks[i].precio);
    }

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

void ordenarMarcaPrecio(eNotebook notebooks[], int tam){
    eNotebook auxNotebook;

        for(int i = 0; i < tam - 1 ; i++){
            for(int j = i + 1; j < tam ; j++){
                if(strcmp(notebooks[i].marca, notebooks[j].marca) > 0 ){
                    auxNotebook = notebooks[i];
                    notebooks[i] = notebooks[j];
                    notebooks[j] = auxNotebook;


                }
            }
        }

        for(int i = 0; i < tam - 1 ; i++){
            for(int j = i + 1; j < tam ; j++){
                if(strcmp(notebooks[i].marca, notebooks[j].marca) == 0 && notebooks[i].precio < notebooks[j].precio){
                    auxNotebook = notebooks[i];
                    notebooks[i] = notebooks[j];
                    notebooks[j] = auxNotebook;
                }
            }
        }

}

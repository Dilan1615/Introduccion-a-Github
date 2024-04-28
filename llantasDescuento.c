/*Calcular el total que una persona debe pagar en una llantera, si el precio de cada llanta es de $800
si se compran menos de 5 llantas, y de $700 si se compran 5 hasta 8, y de 8 en adelante existe o
descuento del 30% a partir del precio inicia*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");

    int llantas;
    float precio;

    printf("Cuantas llantas desea comprar: ");
    scanf("%d", &llantas);

    if (llantas < 5){
        precio = llantas * 800;
    }else if (llantas >=5 && llantas <=8 ){
        precio = llantas * 700;    
    }else{
        precio = llantas * 700 * 0.7;
    }
    printf("El precio de %d llantas es de: %.2f\n", llantas, precio);

    
    return 0;
}
/*Calcular el total que una persona debe pagar en una llantera, si el precio de cada llanta es de $800
si se compran menos de 5 llantas, y de $700 si se compran 5 o más.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");
    int llantas;
    int precio;

    printf("Cuantas llantas desea comprar: ");
    scanf("%d", &llantas);

    if (llantas < 5){
        precio = llantas * 800;
    }else if (llantas >=5){
            precio = llantas * 700;
    }
    
    printf("El precio de %d llantas es de: %d", llantas, precio);

    return 0;

}
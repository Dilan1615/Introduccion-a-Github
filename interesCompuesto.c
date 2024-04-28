#include <stdlib.h>
#include <stdio.h>

#define TAMANIO 10
int main(){
    system("@cls||clear");

    int arreglo [TAMANIO];

    printf("Ingresa 10 numero enteros");
    for (int i = 0; i < TAMANIO; i++){
        printf("\n Arreglo[%d]: ", i);
        scanf("%d", &arreglo[i]);
    }
    
    printf("El arreglo ingresado es: ");
    for (int j = 0; j < TAMANIO; j++){
        printf("\n Arreglo[%d]=%d",j,arreglo[j]);
    }
    
    
    
    return 0;
}
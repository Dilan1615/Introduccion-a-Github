#include <stdio.h>
#include<stdlib.h>

int main (){
    system ("@cls||clerar");

    int numero;

    printf("Ingrese el numero, para saber si es par o impar: ");
    scanf("%d", &numero);
    getchar();

    if (numero%2 == 0){
        printf("El %d, es un numero par", numero);
    }else{
        printf("El %d, es un numero impar", numero);
    }

    return 0;
}
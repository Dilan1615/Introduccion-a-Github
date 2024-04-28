#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");

    int tabla, resultado;

    printf("Ingrese el numero de la tabla que quiere: ");
    scanf("%d", &tabla);

    for (int i = 0; i <= 12 ; i++){
        resultado = tabla * i;
        printf("%d * %d = %d \n ", tabla, i, resultado);
    }
    
    return 0;
}
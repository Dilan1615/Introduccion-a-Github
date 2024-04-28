#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");

    int edad;

    printf("Ingrese su edad, para saber su periodo de vida: ");
    scanf("%d",&edad);

    if (edad >=0 && edad <= 1){
        printf("El periodo de vida es de recien nacido");
    }else if (edad >=1 && edad <= 5){
        printf("El periodo de vida es de un infante");
    }else if (edad >=6 && edad <= 12){
        printf("El periodo de vida es de la niniez");
    }else if (edad >= 13 && edad <= 17){
        printf("El periodo de vida es de un adolescente");
    }else if (edad >=18 && edad <= 64){
        printf("El periodo de vida es de adulto");
    }else if (edad >=65){
        printf("El periodo de vida es de la tercera edad");
    }else{
        printf("Ingrese una edad real");
    }

    return 0;
}
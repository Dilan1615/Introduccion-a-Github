#include <stdio.h>
#include <stdlib.h>

int main (){
    system ("@cls||clear");
    int anio;

    printf("Ingrese el anio para comprobar si es bisiesto o no: ");
    scanf("%d", &anio);

    if (anio % 4 == 0 && anio % 100 != 0){
        printf("El anio %d, es bisiesto", anio);
    }else{
        printf("El anio %d, no es bisiesto", anio);
    }
    
    return 0;
}
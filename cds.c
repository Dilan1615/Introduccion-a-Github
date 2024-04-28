#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**Calcular el número de CD’s exactos necesarios para realizar una copia de seguridad de la
información almacenada cuya capacidad se conoce en GigaBytes. Un CD virgen su capacidad de
almacenamiento es de 700 MegaBytes y un GigaByte es igual a 1024 MegaBytes.
*/
// 2cds = 1gb

int main (){
    system("@cls||clear");
    int copia;
    float cd;

    printf("Ingrese el numero de GB que desea guardar: ");
    scanf("%d", &copia);
    
    copia = copia*1024;
    cd = copia /700;

    cd = ceil(cd); // ayuda a redondear hacia arriba

    printf("El numero de cds necesarios es de: %.0f", cd);
    
    return 0;

}
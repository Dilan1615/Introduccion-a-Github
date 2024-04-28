#include <stdio.h>
#include <stdlib.h>


float areaTriangulo(float base, float altura);

int main(){
    system("@cls||clear");

    float altura, base, area;

    printf("Ingrese el area y la base del cuadrado\n");

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Base: ");
    scanf("%f", &base);
    
    area = areaTriangulo(base,altura);
    printf("El area del triangulo es: %.2f",area);

    return 0;
}

float areaTriangulo(float base, float altura){
    float area;

    area = (base * altura)/ 2;
    return area;
}
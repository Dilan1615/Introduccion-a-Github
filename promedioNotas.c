#include <stdio.h>
#include <stdlib.h>

struct Notas{
    float trabajosExtraClase;
    float leccionesParticpaciones;
    float aprendizaje;
    float evaluaciones;
};


int main(){
    system("@cls||clear");
    struct Notas notas;
    float promedio;

    printf("Ingrese sus notas para calcular su promedio \n");
    printf("Trabajos en clase y extra clase (0-1.0): ");
    scanf("%f", &notas.trabajosExtraClase);

    printf("Lecciones y participaciones(0.0-1.0): ");
    scanf("%f", &notas.leccionesParticpaciones);

    printf("Aprendizaje autonomo (0.0-1.0): ");
    scanf("%f", &notas.aprendizaje);

    printf("Promedio de evaluaciones (0.0-7.0): ");
    scanf("%f", &notas.evaluaciones);

    promedio = notas.trabajosExtraClase + notas.leccionesParticpaciones + notas.aprendizaje + notas.evaluaciones;
    
    if (promedio >=0.0 && promedio <= 2.39){
        printf("Su promedio de, %.2f", promedio);
        printf("\nEstado: Reprovado");
    }else if (promedio >=2.40 && promedio <= 6.99){
        printf("Su promedio de, %.2f", promedio);
        printf("\nEstado: En Suspenso");
    }else if (promedio >=7.0 && promedio <= 10.00){
        printf("Su promedio de, %.2f", promedio);
        printf("\nEstado: Aprovado");
    }else if(promedio <10.00 ){
        printf("Ingrese correctamente sus notas");
    }
    
    return 0;
}
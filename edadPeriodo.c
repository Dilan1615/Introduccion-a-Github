#include <stdio.h>
#include <stdlib.h>

struct Nacimiento {
    int anio;
    int mes;
    int dia;
};

struct Actual {
    int anio;
    int mes;
    int dia;
};

struct Edad {
    int anio;
    int mes;
    int dia;
};

int main() {
    system("@cls||clear");

    struct Nacimiento nacimiento;
    struct Actual actual;
    struct Edad edad;

    printf("Ingrese su fecha de nacimiento:\n");
    printf("Anio: ");
    scanf("%d", &nacimiento.anio);

    printf("Mes: ");
    scanf("%d", &nacimiento.mes);

    printf("Dia: ");
    scanf("%d", &nacimiento.dia);

    printf("Ingrese la fecha actual:\n");
    printf("Anio: ");
    scanf("%d", &actual.anio);

    printf("Mes: ");
    scanf("%d", &actual.mes);

    printf("Dia: ");
    scanf("%d", &actual.dia); 

    edad.anio = actual.anio - nacimiento.anio;
    edad.mes = actual.mes - nacimiento.mes;
    edad.dia = actual.dia - nacimiento.dia;

    if (edad.mes < 0 || (edad.mes == 0 && edad.dia < 0)) {
        edad.anio--;
        edad.mes += 12;
    }

    printf("Tu edad es: %d anos, %d meses, %d dias\n", edad.anio, edad.mes, edad.dia);

    if (edad.anio >=0 && edad.anio <= 1){
        printf("El periodo de vida es de recien nacido");
    }else if (edad.anio >=1 && edad.anio <= 5){
        printf("El periodo de vida es de un infante");
    }else if (edad.anio >=6 && edad.anio <= 12){
        printf("El periodo de vida es de la niniez");
    }else if (edad.anio >= 13 && edad.anio <= 17){
        printf("El periodo de vida es de un adolescente");
    }else if (edad.anio >=18 && edad.anio <= 64){
        printf("El periodo de vida es de adulto");
    }else if (edad.anio >=65){
        printf("El periodo de vida es de la tercera edad");
    }else{
        printf("Ingrese una edad real");
    }

    return 0;
}
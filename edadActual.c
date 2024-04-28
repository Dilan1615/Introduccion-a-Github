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

    return 0;
}

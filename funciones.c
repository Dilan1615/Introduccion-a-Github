#include <stdio.h>

// Función para solicitar la entrada al usuario
float solicitarEntrada(char *mensaje) {
    float entrada;
    printf("%s", mensaje);
    scanf("%f", &entrada);
    return entrada;
}

// Función para calcular el área de un triángulo
float calcularAreaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

// Función para mostrar el resultado
void mostrarResultado(float area) {
    printf("El área del triángulo es: %.2f\n", area);
}

int main() {
    float base, altura;

    base = solicitarEntrada("Ingrese la base del triángulo: ");
    altura = solicitarEntrada("Ingrese la altura del triángulo: ");

    float area = calcularAreaTriangulo(base, altura);

    mostrarResultado(area);

    return 0;
}

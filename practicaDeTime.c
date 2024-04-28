#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main (){
    system ("@cls||clear");
    time_t fecha;
    time(&fecha);

    struct tm * fechaActual = localtime(&fecha);
     printf("Fecha y hora actual:\n");
    printf("Anio: %d\n", fechaActual->tm_year + 1900);
    printf("Mes: %d\n", fechaActual->tm_mon + 1); // Sumamos 1 ya que tm_mon comienza en 0
    printf("Dia: %d\n", fechaActual->tm_mday);
    printf("Hora: %d\n", fechaActual->tm_hour);
    printf("Minuto: %d\n", fechaActual->tm_min);
    printf("Segundo: %d\n", fechaActual->tm_sec);

    return 0;

}
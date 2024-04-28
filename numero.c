#include <stdio.h>

int main (){
    system ("@cls||clerar");
    int dia;
    printf ("Ingrese un numero del dia de la semana: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf ("El dia ingresado es el Lunes");
        break;
    case 2:
        printf ("El dia ingresado es el Martes");
        break;
    case 3:
        printf ("El dia ingresado es el Miercoles");
        break;
    case 4:
        printf ("El dia ingresado es el Jueves");
        break;
    case 5:
        printf ("El dia ingresado es el viernes");
        break;
    case 6:
        printf ("El dia ingresado es el Sabado");
        break;        
    case 7:
        printf ("El dia ingresado es el Domingo");
        break;
    default:
        printf("El dia que ingresaste no exite");
        break;
    }

    getchar( );
    return 0;
}
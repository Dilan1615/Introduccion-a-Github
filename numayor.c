#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");
    int num1, num2;

    printf("Ingrese dos numeros para saber cual es el mayor de ellos\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("EL numero mayor es el: %d", num1);
    }else if (num2 > num1){
        printf("EL numero mayor es el: %d", num2);
    }else{
        printf("Ambos numeros son iguales");
    }
    

    return 0;
}

#include <stdio.h>

int main(void) {
    const double LIMITE_BAJO = 18.5;
    const double LIMITE_ALTO = 25.0;
    double peso, altura, imc = 0.0;
    int num1, num2, resto = 0;

    printf("Ingrese el peso (en kg): ");
    scanf("%lf", &peso);
    printf("Ingrese la altura (en metros): ");
    scanf("%lf", &altura);
    printf("Ingrese dos numeros enteros para calcular su resto, separados por un espacio: ");
    scanf("%d %d", &num1, &num2);

    if (altura > 0) {
        imc = peso / (altura * altura);
    } else {
        imc = 0.0;
    }

    if (num2 != 0) {
        resto = num1 % num2;
    } else {
        resto = 0;
    }

    printf("\nOperacion realizada: Calculo de IMC y evaluacion de rango en empresa de transporte\n");
    printf("El IMC calculado es: %.2lf\n", imc);
    printf("Calculo de resto adicional (%d %% %d): %d\n", num1, num2, resto);

    if (imc >= LIMITE_BAJO && imc <= LIMITE_ALTO) {
        printf("Estado de peso: Dentro del rango normal\n");
    } else {
        printf("Estado de peso: Fuera del rango normal\n");
    }

    return 0;
}

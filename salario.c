#include <stdio.h>

int main(void) {
    int HORAS_NORMALES = 40;
    double FACTOR_EXTRA = 1.5;
    int horas, salario_entero = 0;
    double pago_hora, salario = 0.0;

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas);

    printf("Ingrese el pago por hora: ");
    scanf("%lf", &pago_hora);

    if (horas > HORAS_NORMALES) {
        salario = (HORAS_NORMALES * pago_hora) + ((horas - HORAS_NORMALES) * pago_hora * FACTOR_EXTRA);
    } else {
        salario = horas * pago_hora;
    }

    salario_entero = salario;

    printf("Operacion realizada: Calculo de salario con recargo por horas extras\n");
    printf("El salario total es: $%.2lf\n", salario);

    if (salario_entero % 2 == 0) {
        printf("Evaluacion de paridad: La parte entera del salario (%d) es un numero PAR.\n", salario_entero);
    } else {
        printf("Evaluacion de paridad: La parte entera del salario (%d) es un numero IMPAR.\n", salario_entero);
    }
    return 0;
}
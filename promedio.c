#include <stdio.h>

int main(void) {
    double nota1, nota2, nota3, promedio_ponderado = 0.00;
    int p1, p2, p3 = 0;
    int CONSTANTE = 100; // Constante para el cálculo del promedio ponderado

    // Entrada de datos
    printf("Ingrese la nota 1, 2 y 3; separadas por espacios: \n");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    printf("Ingrese los porcentajes correspondientes a cada nota: \n");
    scanf("%d %d %d", &p1, &p2, &p3);

    if ((p1 + p2 + p3) != CONSTANTE) {
        printf("Error: La suma de los porcentajes debe ser igual a 100.\n");
        return 1;
    } else {
        promedio_ponderado = (nota1 * p1 + nota2 * p2 + nota3 * p3) / CONSTANTE;
        }
    
    // Característica del ejercicio: Agregue el tipo de operación realizada 
    printf("Operacion realizada: Calculo de promedio ponderado de calificaciones en un taller mecanico\n");
    printf("Nota 1: %.2lf, Porcentaje 1: %.2d%%\n", nota1, p1);
    printf("Nota 2: %.2lf, Porcentaje 2: %.2d%%\n", nota2, p2);
    printf("Nota 3: %.2lf, Porcentaje 3: %.2d%%\n", nota3, p3);

    printf("Promedio Ponderado: %.2lf\n", promedio_ponderado);

    // Característica del ejercicio: Agregue el valor del promedio ponderado (Si es positivo o negativo)
    if (promedio_ponderado > 0) {
        printf("Estado del resultado: Positivo\n");
    } else {
        if (promedio_ponderado < 0) {
            printf("Estado del resultado: Negativo\n");
        } else {
            printf("Estado del resultado: Neutro (Cero)\n");
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    double NOTA_MIN = 7.0;
    int DIVISOR = 3;
    char nombre[50];
    double nota1, nota2, nota3, promedio, inverso = 0.0;

    printf("Ingrese el nombre del estudiante: ");
    scanf(" %[^\n]s", nombre);
    printf("Ingrese la nota 1: ");
    scanf("%lf", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%lf", &nota2);
    printf("Ingrese la nota 3: ");
    scanf("%lf", &nota3);

    printf("\nOperacion realizada: Calculo de promedio y estado academico\n");
    printf("Estudiante: %s\n", nombre);

    if (nota1 >= 0.0 && nota1 <= 10.0) {
        if (nota2 >= 0.0 && nota2 <= 10.0) {
            if (nota3 >= 0.0 && nota3 <= 10.0) {
                promedio = (nota1 + nota2 + nota3) / DIVISOR;

                if (promedio >= NOTA_MIN) {
                    printf("Estado: Aprobado\n");
                } else {
                    printf("Estado: Reprobado\n");
                }

                if (promedio != 0.0) {
                    inverso = 1.0 / promedio;
                } else {
                    inverso = 0.0;
                }

                printf("Promedio obtenido: %.2lf\n", promedio);
                printf("El inverso del promedio es: %.4lf\n", inverso);
            } else {
                printf("Error: La nota 3 esta fuera del rango permitido (0 a 10).\n");
            }
        } else {
            printf("Error: La nota 2 esta fuera del rango permitido (0 a 10).\n");
        }
    } else {
        printf("Error: La nota 1 esta fuera del rango permitido (0 a 10).\n");
    }

    return 0;
}

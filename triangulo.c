#include <stdio.h>

int main(void) {
    int DIVISOR = 2;
    double base, altura, area, minimo = 0.0;

    printf("Ingrese la base del triangulo: ");
    scanf("%lf", &base);

    printf("Ingrese la altura del triangulo: ");
    scanf("%lf", &altura);

if (base > 0 && altura > 0) {
        area = (base * altura) / DIVISOR;

        minimo = base;
        if (altura < minimo) {
            minimo = altura;
        }
        if (area < minimo) {
            minimo = area;
        }
        printf("\nOperacion realizada: Calculo de area de triangulo y valor minimo.\n");
        printf("El area calculada es: %.2lf\n", area);
        printf("El valor minimo de todas las variables utilizadas es: %.2lf\n", minimo);
    } else {
        printf("\nError: La base y la altura deben ser mayores que cero para evitar resultados negativos.\n");
    }

    return 0;
}

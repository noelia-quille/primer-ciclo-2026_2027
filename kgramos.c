#include <stdio.h>
#include <math.h>

int main() {
    int FACTOR_CONV = 1000;
    double kg, gramos, raiz = 0.0;

    printf("Ingrese el peso en kilogramos: ");
    scanf("%lf", &kg);

    printf("Operacion realizada: Conversion de kg a gramos y calculo de raiz\n");

    if (kg >= 0.0) {
        gramos = kg * FACTOR_CONV;
        raiz = sqrt(fabs(gramos));
        printf("%.2lf kg equivalen a %.2lf gramos\n", kg, gramos);
        printf("La raiz cuadrada del valor absoluto es: %.2lf\n", raiz);
    } 

    else {
        printf("Error: El peso en kilogramos debe ser mayor o igual a cero.\n");
        printf("No se pudieron procesar los resultados debido a un valor invalido.\n");
    }

    return 0;
}

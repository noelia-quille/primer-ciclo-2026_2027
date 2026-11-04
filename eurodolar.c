#include <stdio.h>
#include <math.h> // Necesario para la función logaritmo10

int main(void) {
    const double TASA_CAMBIO = 1.08;
    double euros;
    double dolares = 0.0;
    double log_dolares = 0.0;

    printf("Ingrese el monto en euros: ");
    scanf("%lf", &euros);

    dolares = euros * TASA_CAMBIO;

    printf("\nOperacion realizada: Conversion de moneda y calculo logaritmico\n");

    if (euros > 0) {
        log_dolares = log10(dolares);
        printf("%.2lf euros equivalen a %.2lf dolares\n", euros, dolares);
        printf("Logaritmo base 10 de los dolares calculados: %.4lf\n", log_dolares);
    } else {
        log_dolares = 0.0;
        printf("El monto ingresado no es valido (debe ser mayor a 0).\n");
    }

    return 0;
}

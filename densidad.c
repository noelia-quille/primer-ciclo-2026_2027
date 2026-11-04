#include <stdio.h>
#include <math.h> // Necesario para la función log10()

int main(void) {

    double masa, volumen, densidad, log_densidad = 0.0;

    printf("Ingrese la masa del objeto en gramos: ");
    scanf("%lf", &masa);
    printf("Ingrese el volumen del objeto en cm3: ");
    scanf("%lf", &volumen);

    if (volumen > 0) {
        densidad = masa / volumen;

        if (densidad > 0) {
            log_densidad = log10(densidad);
        } else {
            log_densidad = 0.0;
        }
        printf("Operacion realizada: Calculo de densidad y logaritmo base 10\n");
        printf("La densidad del objeto es: %.4lf g/cm3\n", densidad);
        printf("El logaritmo base 10 de la densidad es: %.4lf\n", log_densidad);
    } else {
        printf("\nError: El volumen debe ser estrictamente mayor a cero para evitar una division por cero.\n");
    }

    return 0;
}

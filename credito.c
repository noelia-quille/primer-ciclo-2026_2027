#include <stdio.h>

int main() {
    double MONTO_MIN = 1000.0;
    int PLAZO_MAX = 60;
    double TASA_MAX = 0.36;
    double COBERTURA_GARANTIA = 1.5;
    double monto, tasa, garantia = 0.0;
    int plazo, residuo = 0;
    char tipo = ' ';

    printf("Ingrese el monto del credito: ");
    scanf("%lf", &monto);
    printf("Ingrese el plazo en meses: ");
    scanf("%d", &plazo);
    printf("Ingrese la tasa de interes: ");
    scanf("%lf", &tasa);
    printf("Ingrese el tipo de credito ('C': Consumo, 'H': Hipotecario, 'V': Vehicular, 'E': Estudio): ");
    scanf(" %c", &tipo);
    printf("Ingrese el valor de la garantia: ");
    scanf("%lf", &garantia);

    if ((monto >= MONTO_MIN) && (plazo > 0)) {
        if ((plazo <= PLAZO_MAX) && (tasa <= TASA_MAX)) {
            if ((tipo == 'C') || (tipo == 'H') || (tipo == 'V') || (tipo == 'E')) {
                if (garantia >= (monto / COBERTURA_GARANTIA)) {
                    printf("Riesgo Bajo \n");
                } else {
                    printf("Riesgo Medio \n");
                }
            } else {
                printf("Tipo de credito invalido \n");
            }
        } else {
            printf("Rechazado por plazo o tasa \n");
        }
    } else {
        printf("Rechazado por monto invalido \n");
    }

    residuo = plazo % 12;

    printf("\nOperacion realizada: Clasificacion de credito\n");
    printf("Residuo de division adicional (plazo %% 12): %d\n", residuo);

    return 0;
}

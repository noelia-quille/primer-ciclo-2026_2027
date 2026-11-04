#include <stdio.h>

int main(void) {
    int MITAD = 2;
    double ONZA_GRAMO = 28.3495;
    double onzas, gramos, mitad_gramos = 0.0;
    int es_valido = 0;

    printf("Ingrese el peso en onzas: ");
    scanf("%lf", &onzas);

    if (onzas > 0) {
        gramos = onzas * ONZA_GRAMO;
        mitad_gramos = gramos / MITAD;
        es_valido = 1;
    } else {
        es_valido = 0;
    }

    if (es_valido == 1) {
        printf("%.2lf onzas equivalen a %.4lf gramos\n", onzas, gramos);
        printf("La mitad del resultado obtenido es: %.4lf gramos\n", mitad_gramos);
    } else {
        printf("Error: El peso ingresado debe ser estrictamente mayor a cero.\n");
    }

    return 0;
}
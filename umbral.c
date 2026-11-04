#include <stdio.h>

int main(void) {
    int UMBRAL = 10;
    double lado1, lado2, lado3, perimetro = 0.0;
    int es_valido, supera_umbral = 0;

    printf("Ingrese los 3 lados del triangulo (separados por espacios): ");
    scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
  
    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
        if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
            es_valido = 1;
        } else {  //Si alguno de los lados es 0
            es_valido = 0;
        }

        perimetro = lado1 + lado2 + lado3;

        if (perimetro > UMBRAL) {    //Comparación del perímetro con el umbral
            supera_umbral = 1;
        } else {
            supera_umbral = 0;
        }

        if (es_valido == 1) {
            printf("Los lados ingresados forman un triangulo valido.\n");
        } else {
            printf("Los lados ingresados no forman un triangulo valido.\n");
        }

        if (supera_umbral == 1) {
            printf("El perimetro (%.2lf) supera el umbral de %d.\n", perimetro, UMBRAL);
        } else {
            printf("El perimetro (%.2lf) no supera el umbral de %d.\n", perimetro, UMBRAL);
        }

    } else {
        printf("\nError: Todos los lados del triangulo deben ser mayores a cero.\n");
    }

    return 0;
}

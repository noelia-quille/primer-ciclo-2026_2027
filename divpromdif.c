#include <stdio.h>

int main(void) {

    int CONST_PROM = 2;
    int z, s, cociente, residuo = 0;
    int promedio, diferencia = 0;

    printf("Ingrese el valor entero del dividendo: ");
    scanf("%d", &z);

    printf("Ingrese el valor entero del divisor: ");
    scanf("%d", &s);

    if (s != 0) {    // Evitar la división por cero
        cociente = z / s;
        residuo = z % s;
        promedio = (z + s) / CONST_PROM;
        diferencia = cociente - promedio;

        printf("Operacion realizada: Division entera y residuo, promedio y diferencia\n");
        printf("Cociente entero: %d\n", cociente);
        printf("Residuo: %d\n", residuo);
        printf("Promedio entre el dividendo y el divisor: %d\n", promedio);
        printf("Diferencia (cociente - promedio): %d\n", diferencia);
    } else {
        printf("\nError: El divisor s no puede ser cero para evitar una excepcion matematica.\n");
    }

    return 0;
}

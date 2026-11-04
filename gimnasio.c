#include <stdio.h>

int main(void) {

    int VALOR_REFERENCIA = 100;
    int a, es_primo, porcentaje = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &a);

    if (a <= 1) {
        es_primo = 0;
    } else {
        if (a == 2 || a == 3 || a == 5 || a == 7) {
            es_primo = 1;
        } else {
            if (a % 2 == 0 || a % 3 == 0) {
                es_primo = 0;
            } else {
                es_primo = 1;
            }
        }
    }

    if (es_primo == 1) {
        porcentaje = VALOR_REFERENCIA;
    } else {
        porcentaje = 0;
    }

    if (es_primo == 1) {
        printf("Resultado: El numero %d SI es primo.\n", a);
    } else {
        printf("Resultado: El numero %d NO es primo.\n", a);
    }

    printf("Valor de referencia: %d\n", VALOR_REFERENCIA);
    printf("Porcentaje obtenido: %d%%\n", porcentaje);

    return 0;
}
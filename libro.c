#include <stdio.h>

int main() {
    int EDAD_MIN = 8;
    int EDAD_JUEVEN = 18;
    int EDAD_ADULTO = 30;
    int HORAS_MIN = 2;
    int HORAS_MAX = 10;

    char genero[30] = "";
    int edad, tiempo, residuo = 0;
    char nivel = ' ';
    char idioma[20] = "";

    printf("Ingrese el genero preferido: ");
    scanf(" %[^\n]s", genero);
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    printf("Ingrese el nivel de lectura ('B': bajo, 'M': medio, 'A': alto): ");
    scanf(" %c", &nivel);
    printf("Ingrese el idioma: ");
    scanf(" %[^\n]s", idioma);
    printf("Ingrese el tiempo disponible (horas/semana): ");
    scanf("%d", &tiempo);

    printf("\nOperacion realizada: Recomendacion de libro personalizada\n");

    if ((edad >= EDAD_MIN) && (tiempo >= HORAS_MIN) && (tiempo <= HORAS_MAX)) {
        if (edad < EDAD_JUEVEN) {
            printf("Cuentos juveniles de aventura");
        } else {
            if (edad < EDAD_ADULTO) {
                printf("Novela contemporanea y ciencia ficcion \n");
            } else {
                printf("Ensayo y literatura clasica \n");
            }
        }
        residuo = edad % 4;
    } 
    else {
        printf("Libro ilustrado infantil o cuentos cortos \n");
        residuo = 0;
    }

    printf("Residuo de division adicional (edad %% 4): %d\n", residuo);

    return 0;
}

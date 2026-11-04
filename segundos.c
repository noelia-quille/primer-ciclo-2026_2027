#include <stdio.h>
#include <math.h>    // Necesario para la función sin()

int main() {
    int SEG_HORA = 3600;
    int SEG_MIN = 60;
    int segundos, h, m, s = 0;
    double seno_resultado = 0.0;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);

    if (segundos >= 0) {
        h = segundos / SEG_HORA;
        m = (segundos % SEG_HORA) / SEG_MIN;
        s = segundos % SEG_MIN;
        seno_resultado = sin((h + m + s));

        printf("\nOperacion realizada: Conversion de tiempo y calculo del seno\n");
        printf("%d horas, %d minutos y %d segundos\n", h, m, s);
        printf("Seno del resultado: %.3lf\n", seno_resultado);
    } 
    else {
        printf("Error: La cantidad de segundos no puede ser negativa.\n");
     }

    return 0;
}

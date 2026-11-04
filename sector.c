#include <stdio.h>

int main(void) {
    double PI = 3.14159;
    double FACTOR = 360.0;
    double radio, angulo, area_sector, cuadrado_area = 0.0;

    printf("Ingrese el radio del sector circular: ");
    scanf("%lf", &radio);

    printf("Ingrese el angulo del sector circular en grados: ");
    scanf("%lf", &angulo);

    if (radio > 0 && angulo > 0) {
        area_sector = (PI * radio * radio * angulo) / FACTOR;
        cuadrado_area = area_sector * area_sector;

        printf("Operacion realizada: Calculo de area de sector circular y su cuadrado\n");
        printf("El area del sector es: %.4lf\n", area_sector);
        printf("El cuadrado del resultado principal es: %.4lf\n", cuadrado_area);
    } else {
        printf("\nError: El radio y el angulo deben ser estrictamente mayores a cero.\n");
    }

    printf("Radio ingresado: %.2lf\n", radio);
    printf("Angulo ingresado: %.2lf grados\n", angulo);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    double EXP = 2.0;
    double PI = 3.14159265;
    double cateto1, cateto2, hipotenusa, producto_pi = 0.0;

    printf("Ingrese el valor del primer cateto: ");
    scanf("%lf", &cateto1);
    printf("Ingrese el valor del segundo cateto: ");
    scanf("%lf", &cateto2);

    if ((cateto1 > 0.0) && (cateto2 > 0.0)) {
        hipotenusa = sqrt(pow(cateto1, EXP) + pow(cateto2, EXP));
        producto_pi = hipotenusa * PI;

        printf("\nOperacion realizada: Calculo de hipotenusa y producto por PI\n");
        printf("La hipotenusa calculada es: %.4lf\n", hipotenusa);
        printf("El producto de la hipotenusa por PI es: %.4lf\n", producto_pi);
    } 
    else {
        printf("Error: Los catetos deben ser mayores que cero.\n");
        
    }

    return 0;
}
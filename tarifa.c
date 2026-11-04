#include <stdio.h>

int main() {
    double TARIFA_BASE = 2.0;
    double COSTO_KM = 1.0;
    double COSTO_MIN = 0.25;
    double FACTOR_UBER = 1.2;
    double FACTOR_LUJO = 2.0;
    double FACTOR_DEMANDA_ALTA = 1.5;
    double distancia, tiempo, tarifa = 0.0;
    char servicio = ' ';
    char demanda = ' ';
    int hora, residuo, contador = 0;

    printf("Ingrese la distancia en km: ");
    scanf("%lf", &distancia);
    printf("Ingrese el tiempo en minutos: ");
    scanf("%lf", &tiempo);
    printf("Ingrese el tipo de servicio ('T': taxi, 'U': uber, 'L': lujo): ");
    scanf(" %c", &servicio);
    printf("Ingrese la demanda ('B': baja, 'N': normal, 'A': alta): ");
    scanf(" %c", &demanda);
    printf("Ingrese la hora (0-23): ");
    scanf("%d", &hora);

    if ((distancia > 0.0) && (tiempo > 0.0) && (hora >= 0) && (hora <= 23)) {
        contador = contador + 1;
        tarifa = TARIFA_BASE + (distancia * COSTO_KM) + (tiempo * COSTO_MIN);

        if (servicio == 'U') {
            tarifa = tarifa * FACTOR_UBER;
            contador = contador + 1;
        } else {
            if (servicio == 'L') {
                tarifa = tarifa * FACTOR_LUJO;
                contador = contador + 1;
            }
        }

        if (demanda == 'A') {
            tarifa = tarifa * FACTOR_DEMANDA_ALTA;
            contador = contador + 1;
        }

        residuo = hora % 6;
        contador = contador + 1;

        printf("\nOperacion realizada: Calculo de tarifa de transporte privado\n");
        printf("Tarifa total: $%.2lf\n", tarifa);
        printf("Residuo de division adicional (hora %% 6): %d\n", residuo);
        printf("Operaciones realizadas registradas: %d\n", contador);
    } 
    else {
        contador = contador + 1;
        printf("Error: La distancia, el tiempo o la hora estan fuera de los rangos validos.\n");
   }

    return 0;
}

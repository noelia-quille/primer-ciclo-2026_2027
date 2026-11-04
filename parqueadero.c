#include <stdio.h>

int main() {
    double PRECIO_AUTO = 2.5;
    double PRECIO_MOTO = 1.5;
    double PRECIO_CAMIONETA = 3.5;
    double DESC_VIP = 0.20;
    double DESC_MENSUAL = 0.30;

    int horas = 0;
    char tipo_vehiculo = ' ';
    char dia = ' ';
    char modalidad = ' ';
    int es_vip = 0;
    double costo = 0.0;
    int residuo = 0;

    printf("Ingrese las horas de estacionamiento: ");
    scanf("%d", &horas);
    printf("Ingrese el tipo de vehiculo ('A': Auto, 'M': Moto, 'C': Camioneta): ");
    scanf(" %c", &tipo_vehiculo);
    printf("Ingrese el dia de la semana ('L', 'M', 'm', 'J', 'V', 'S', 'D'): ");
    scanf(" %c", &dia);
    printf("Ingrese la modalidad ('H': Por hora, 'D': Dia completo, 'M': Mensual): ");
    scanf(" %c", &modalidad);
    printf("Tiene descuento VIP? (1 para Si, 0 para No): ");
    scanf("%d", &es_vip);

    if (horas > 0) {
        if (tipo_vehiculo == 'A') {
            costo = horas * PRECIO_AUTO;
        } else {
            if (tipo_vehiculo == 'M') {
                costo = horas * PRECIO_MOTO;
            } else {
                if (tipo_vehiculo == 'C') {
                    costo = horas * PRECIO_CAMIONETA;
                } else {
                    printf("Error: Tipo de vehiculo no valido.\n");
                }
            }
        }

        if (modalidad == 'M') {
            costo = costo - (costo * DESC_MENSUAL);
            } else {
                if (modalidad == 'D') {
                    costo = costo; 
                } else {
                    if (modalidad == 'H') {
                        costo = costo; 
                    } else {
                        printf("Error: Modalidad no valida.\n");
                    }
                }
        }

        if (es_vip == 1) {
            costo = costo - (costo * DESC_VIP);
        }

        residuo = ((int)(horas) % 3);

        printf("Horas: %d\n", horas);
        printf("Tipo de vehiculo: %c\n", tipo_vehiculo);
        printf("Dia de la semana: %c\n", dia);
        printf("Modalidad: %c\n", modalidad);
        printf("Es VIP (1=Si, 0=No): %d\n", es_vip);

        printf("\nOperacion realizada: Calculo de tarifa de parqueadero\n");
        printf("Costo total de parqueadero: $%.2lf\n", costo);
        printf("Residuo de division adicional: %d\n", residuo);
        
    } 
    else {
        printf("Error: Las horas deben ser mayores a cero.\n");
    }

    return 0;
}

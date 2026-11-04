#include <stdio.h>

int main() {
    int PLAN_B = 100;
    int PLAN_C = 250;
    int PLAN_P = 500;
    double RECARGO_CRONICO = 1.5;
    double RECARGO_PREEXISTENTE = 2;
    int edad, dependientes, frecuencia, residuo = 0;
    char tipo_plan = ' ';
    char historial = ' ';
    double costo_mensual = 0.0;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    printf("Ingrese el tipo de plan ('B': Basico, 'C': Completo, 'P': Premium): ");
    scanf(" %c", &tipo_plan);
    printf("Ingrese el numero de dependientes: ");
    scanf("%d", &dependientes);
    printf("Ingrese el historial medico ('S': Sin condiciones, 'C': Cronicas, 'P': Preexistente): ");
    scanf(" %c", &historial);
    printf("Ingrese la frecuencia de uso: ");
    scanf("%d", &frecuencia);

    if ((edad >= 0) && (dependientes >= 0) && (frecuencia >= 0)) {
        if (tipo_plan == 'B') {
            costo_mensual = PLAN_B;
        } else {
            if (tipo_plan == 'C') {
                costo_mensual = PLAN_C;
            } else {
                if (tipo_plan == 'P') {
                    costo_mensual = PLAN_P;
                } else {
                    costo_mensual = 0.0;
                }
            }
        }

        if (historial == 'C') {
            costo_mensual = costo_mensual * RECARGO_CRONICO;
        } else {
            if (historial == 'P') {
                costo_mensual = costo_mensual * RECARGO_PREEXISTENTE;
            } else {
                if (historial == 'S') {
                    costo_mensual = costo_mensual;
                } else {
                    costo_mensual = 0.0;
                }
            }
        }

        costo_mensual = costo_mensual + (dependientes * 20) + (frecuencia * 5);
        residuo = edad % 5;

        printf("\nOperacion realizada: Calculo de costos de salud\n");
        printf("Costo mensual total: $%.2lf\n", costo_mensual);
        printf("Residuo (edad %% 5): %d\n", residuo);
    } 
    else {
        printf("Error: La edad, los dependientes y la frecuencia deben ser mayores o iguales a cero.\n");
    }

    return 0;
}

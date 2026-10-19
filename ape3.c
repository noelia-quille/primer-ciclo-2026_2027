#include <stdio.h>
/* Algoritmo para calcular el espacio usado y libre en un disco de memoria */

void main() {
    int cant_doc = 0, cant_img = 0, cant_vid = 0, cant_pro = 0;
    float tam_doc = 0.00, tam_img = 0.00, tam_vid = 0.00, tam_pro = 0.00 ;
    float gb_disc = 0.00 ;
    int documentos = 0, imagenes = 0, videos = 0, programas = 0, espacio_total_mb = 0 ;
    float gb_usados = 0.00, porcentaje_l = 0.00, espacio_libre_gb = 0.00, porcentaje_u = 0.00 ;

    printf("Ingrese la memoria total de su disco duro:");
    scanf("%f", &gb_disc);
    printf("Ingrese el numero de documentos que tiene:");
    scanf("%d", &cant_doc);
    printf("Ingrese el tamano de sus documentos (en MB):");
    scanf("%f", &tam_doc);
    printf("Ingrese el numero de imagenes que tiene:");
    scanf("%d", &cant_img);
    printf("Ingrese el tamano de sus imagenes (en MB):");
    scanf("%f", &tam_img);
    printf("Ingrese el numero de videos que tiene:");
    scanf("%d", &cant_vid);
    printf("Ingrese el tamano de sus videos (en MB):");
    scanf("%f", &tam_vid);
    printf("Ingrese el numero de programas que tiene:");
    scanf("%d", &cant_pro);
    printf("Ingrese el tamano de sus programas (en MB):");
    scanf("%f", &tam_pro);

    documentos = cant_doc * tam_doc;
    imagenes = cant_img * tam_img;
    videos = cant_vid * tam_vid;
    programas = cant_pro * tam_pro;
    espacio_total_mb = documentos + imagenes + videos + programas;
    gb_usados = espacio_total_mb / 1024.0f;

    espacio_libre_gb = gb_disc - gb_usados;
    porcentaje_u = (gb_usados / gb_disc) *100;
    porcentaje_l = (espacio_libre_gb / gb_disc) *100;

    printf("Almacenamiento usado del disco: %.2f GB\n", gb_usados);
    printf("Porcentaje usado del disco: %.2f %%\n", porcentaje_u);
    printf("Almacenamiento libre en el disco: %.2f GB\n", espacio_libre_gb);
    printf("Porcentaje libre del disco: %.2f %%\n", porcentaje_l);

}
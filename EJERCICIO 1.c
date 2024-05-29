#include <stdio.h>

int main() {
    int total_libros_semana = 0;
    int libros_ficcion = 0, libros_humanidades = 0, libros_ciencia = 0;
    int dia_max_libros = 0, max_libros_dia = 0;

    for (int dia = 1; dia <= 7; dia++) {
        int total_libros_dia = 0;

        printf("\nIngrese los prestamos del dia %d:\n", dia);

        int codigo_libro, cantidad;
        char tema;

        printf("Codigo del libro (0 para terminar): ");
        scanf("%d", &codigo_libro);

        while (codigo_libro != 0) {
            printf("Cantidad de ejemplares prestados: ");
            scanf("%d", &cantidad);

            printf("Tematica (F: Ficcion, H: Humanidades, C: Ciencia): ");
            scanf(" %c", &tema);

            total_libros_dia += cantidad;
            total_libros_semana += cantidad;

            if (tema == 'F')
                libros_ficcion += cantidad;
            else if (tema == 'H')
                libros_humanidades += cantidad;
            else if (tema == 'C')
                libros_ciencia += cantidad;
            else
                printf("Temática no valida. Inténtelo de nuevo.\n");

            printf("Codigo del libro (0 para terminar): ");
            scanf("%d", &codigo_libro);
        }

        if (total_libros_dia > max_libros_dia) {
            max_libros_dia = total_libros_dia;
            dia_max_libros = dia;
        }

        printf("\nResumen del dia %d:\n", dia);
        printf("Cantidad total de libros prestados: %d\n", total_libros_dia);
        printf("Cantidad de libros de Ficción prestados: %d\n", libros_ficcion);
        printf("Cantidad de libros de Humanidades prestados: %d\n", libros_humanidades);
        printf("Cantidad de libros de Ciencia prestados: %d\n", libros_ciencia);
    }

    printf("\nResumen total de la semana:\n");
    printf("Cantidad total de libros prestados durante la semana: %d\n", total_libros_semana);
    printf("Cantidad de libros prestados por temática:\n");
    printf("Ficcion: %d\n", libros_ficcion);
    printf("Humanidades: %d\n", libros_humanidades);
    printf("Ciencia: %d\n", libros_ciencia);
    printf("Dia con mas libros prestados: Dia %d\n", dia_max_libros);
    printf("Cantidad de libros prestados ese dia: %d\n", max_libros_dia);

    return 0;
}

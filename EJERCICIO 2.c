#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num_lanzamientos, caras = 0;

    printf("¿Cuántas monedas quieres lanzar? ");
    scanf("%d", &num_lanzamientos);

    printf("Resultado del lanzamiento de monedas:\n");
    for (int i = 1; i <= num_lanzamientos; i++) {
        if (rand() %2) {
            printf("Moneda %d: Cara\n", i);
            caras++;
        } else {
            printf("Moneda %d: Cruz\n", i);
        }
    }

    printf("La suma total de caras es: %d\n", caras);

    return 0;
}

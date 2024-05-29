#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int dado1,dado2;
    float apuesta, posoAcumulado;
    char salir;
    int sumaDados;

    srand(time(NULL)); // inicializar el generador de números aleatorios

    printf("Ingrese su apuesta: ");
    scanf("%f", &apuesta);
    fflush(stdin);

    posoAcumulado = apuesta;

    do {

    apuesta = posoAcumulado;

    dado1 = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6
    dado2 = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6

    sumaDados = dado1 + dado2;

    if (sumaDados == 6 || sumaDados == 7 || sumaDados == 8){
        posoAcumulado = apuesta * 2;
        printf("\nDados: %d y %d los dados suman %d\n", dado1, dado2, sumaDados);
        printf("Duplica su apuesta\n");
        printf("Su poso acumulado es: $%.02f\n", posoAcumulado);
    }
    else if (sumaDados == 2 || sumaDados == 12){
        posoAcumulado = apuesta - apuesta;
        printf("Dados: %d y %d los dados suman %d\n", dado1, dado2, sumaDados);
        printf("Pierde toda la apuesta\n");
        printf("Su poso acumulado es: $%.02f\n", posoAcumulado);
    }
    else {
        posoAcumulado = apuesta / 2;
        printf("Dados: %d y %d los dados suman %d\n", dado1, dado2, sumaDados);
        printf("Pierde la mitad de la apuesta\n");
        printf("Su poso acumulado es: $%.02f\n", posoAcumulado);
    }

    printf("Desea continuar apostando S/N: ");
    scanf("%c", &salir);
    fflush(stdin);

    } while (salir == 's' || salir == 'S');

    printf("\nTome sus $%.02f, Vuelva pronto!!\n", posoAcumulado);

    return 0;
}

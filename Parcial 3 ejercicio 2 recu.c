#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resultado;
    int cubiletes, cantCubiletes, carasDados;
    int dado1, dado2, dado3, dado4, dado5, dado6;
    int sumaCaras = 0, sumaTot = 0, sumaCubiletes = 0;


    srand(time(NULL)); // inicializar el generador de números aleatorios

    printf("Cuantos cubiletis quieres tirar?: ");
    scanf("%d", &cantCubiletes);
    fflush(stdin);


    for (cubiletes = 1 ; cubiletes <= cantCubiletes ; cubiletes++) {

    dado1 = (rand() % 6) + 1 ;
    dado2 = (rand() % 6) + 1 ;
    dado3 = (rand() % 6) + 1 ;
    dado4 = (rand() % 6) + 1 ;
    dado5 = (rand() % 6) + 1 ;
    dado6 = (rand() % 6) + 1 ;

    sumaCaras = dado1 + dado2 + dado3 + dado4 + dado5 + dado6;
    sumaCubiletes += sumaCaras;

    printf("Cubiletes %d - Dados: %d, %d, %d, %d, %d, %d\n", cubiletes, dado1, dado2, dado3, dado4, dado5, dado6);

    }

    sumaTot += sumaCubiletes;
    printf("La suma total de las caras es: %d", sumaTot);
 return 0;
}

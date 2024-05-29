#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

/*Escribir un programa que simule un juego de carreras de caballos con apuestas. El programa debe pedir al usuario que ingrese una cantidad de dinero
  para apostar a su caballo (el usuario no puede elegir a qué caballo apuesta). Luego generar un resultado aleatorio entre 1 y 6 que indicará en qué
  posición terminó el caballo.


  Si el caballo termina en 1° lugar el jugador cuadruplica su apuesta. Si el caballo termina en 2° lugar el jugador triplica su apuesta. Si el caballo
  termina en 3° lugar el jugador duplica su apuesta. En cualquier caso, el juego pierde la mitad de su apuesta.

  El jugador puede elegir apostar nuevamente introduciendo el carácter ‘S’ o retirarse con sus ganancias introduciendo cualquier otro carácter.
*/

int resultado;
int dinero, posoAcumulado;
char salir;

srand(time(NULL)); // inicializar el generador de números aleatorios

    printf("Ingrese la cantidad que desea apostar: ");
    scanf("%d", &dinero);
    fflush(stdin);

    posoAcumulado = dinero;

    do{
        dinero = posoAcumulado;

        resultado = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 10

        if (resultado == 1){
            posoAcumulado = dinero * 4;
            printf("Resultado de su caballo: %d\n", resultado);
            printf("El usuario cuadriplica su apuesta\n");
        }
        else if (resultado == 2){
            posoAcumulado = dinero * 3;
            printf("Resultado de su caballo: %d\n", resultado);
            printf("El usuario triplica su apuesta\n");
        }
        else if (resultado == 3){
            posoAcumulado = dinero * 2;
            printf("Resultado de su caballo: %d\n", resultado);
            printf("El usuario duplica su apuesta\n");
        }
        else {
            posoAcumulado = dinero / 2;
            printf("Resultado de su caballo: %d\n", resultado);
            printf("El usuario pierde la mitad de su apuesta\n");
        }

        printf("Su poso acumulado es de: %d\n", posoAcumulado);

        printf("Desea continuar apostando S/N: ");
        scanf("%c", &salir);
        fflush(stdin);

    }while (salir == 's' || salir == 'S');

printf("Tome sus $%d. Vuelva pronto!!", posoAcumulado);

    return 0;
}

#include <stdio.h>
int main(){

    /*Una cafeter�a necesita un programa que le permita llevar un registro de las ventas de caf� durante una semana.
      El programa debe permitir registrar las ventas de los �ltimos 7 d�as. Por cada d�a se debe ingresar una cantidad
      desconocida de tazas de caf� vendidas y sus precios. El proceso de ingreso finaliza al introducir un X.

      Por cada venta se ingresa:

      Tama�o de la taza de caf� un cararter (peque�a �P�, mediana �M� o grande �G�).

      Cantidad vendida, un n�mero entero, mayor a 0.

      Precio unitario, un n�mero real, mayor a 0.

      Al finalizar cada d�a, el programa debe calcular la cantidad total de tazas de caf� vendidas y el monto total de las
      ventas de ese d�a.
    */

    int cantTazas , tamanioTaza, dia, cantTVendidas;
    float precioTaza, precioTotal, montoTotal;
    int totTVendidas;
    int diaMenor;
    float precioMenor = 999999;
    float precioTotalTazas;
    float precio;

    for ( dia = 1 ; dia <= 3 ; dia++ ){
        printf("Dia %d\n", dia);
        cantTVendidas = 0;
        precioTotal = 0;
        precio = 0;

        char salir = 's';

        while(salir != 'X' && salir != 'x'){

        printf("Ingrese la cantidad de tazas vendidas en el dia: ");
        scanf("%d", &cantTazas);
        fflush(stdin);

        printf("Ingrese el tamanio de la taza G , M , P: ");
        scanf("%d", &tamanioTaza);
        fflush(stdin);

        printf("Ingrese el precio de la taza: ");
        scanf("%f", &precioTaza);
        fflush(stdin);

        cantTVendidas += cantTazas;

        precio = cantTazas * precioTaza;
        precioTotal += precio;

        printf("Desea salir con X o seguir ingresando con S: ");
        scanf("%c", &salir);
        fflush(stdin);

    }

        totTVendidas += cantTVendidas;
        montoTotal += precioTotal;

        if (precioTotal < precioMenor){
            precioMenor = precioTotal;
            diaMenor = dia;

    }

    printf("\nLa cantidad de tazas vendidas en el dia es: %d \n", cantTVendidas);
    printf("El precio total recaudado en el dia es: %.02f\n\n", precioTotal);

}

    printf("\n\nLa cantidad de tazas vendidas de la semana es: %d \n", totTVendidas);
    printf("El precio total recaudado en la semana es: %.02f\n\n", montoTotal);

    printf("\n\nEl dia con mayor ganacia es: %d \n", diaMenor);
    printf("El monto mayor es: %.02f\n", precioMenor);

}

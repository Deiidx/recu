#include <stdio.h>
int main(){

    /*Una tienda de ropa necesita un programa que le permita llevar un registro de ventas de cada d�a durante una semana. Para ello, el programa debe permitir
    registrar las ventas de los �ltimos 7 d�as. Por cada d�a se debe ingresar una cantidad desconocida de productos vendidos y sus precios. Finaliza el proceso
    de ingreso al introducir un 0 (cero).


    Por cada venta se ingresa:


    C�digo del producto, un n�mero entero, de 1 a 9999

    Cantidad vendida, un n�mero entero, mayor a 0

    Precio unitario, un n�mero real, mayor a 0


    Al finalizar cada d�a, el programa debe calcular la cantidad total de productos vendidos y el monto total de las ventas de ese d�a.


    Al finalizar los 7 d�as, el programa debe mostrar un resumen total que incluya: la cantidad total de productos vendidos, el monto total de las ventas, el
    d�a que se vendi� m�s y el monto vendido ese d�a.

    */

    int dia, codProduc, productos, cantDia, totProduc;
    float precioProduc, precioDia, precioSemana;
    float montoMayor = 1;
    int diaMayor;

    for ( dia = 1 ; dia <= 7 ; dia++){
        printf("Dia %d\n", dia);
        int salir = 'n';

        cantDia = 0;
        precioDia = 0;

        while (salir != 0){

            printf("Ingrese el codigo del producto: ");
            scanf("%d", &codProduc);
            fflush(stdin);

            printf("Ingrese la cantidad de productors: ");
            scanf("%d", &productos);
            fflush(stdin);

            printf("Ingrese el precio: ");
            scanf("%f", &precioProduc);
            fflush(stdin);

            precioDia += productos * precioProduc;
            cantDia += productos;

            printf("Ingrese 0 para salir: ");
            scanf("%d", &salir);
            fflush(stdin);

        }

        printf("\nLa cantidad de productos en el dia es: %d \n", cantDia);
        printf("El monto total del dia es: %.02f\n\n", precioDia);

        totProduc += cantDia;
        precioSemana += precioDia;

        if (precioDia > montoMayor){
            diaMayor = dia;
            montoMayor = precioDia;
            }

    }

    printf("\nLa cantidad total de productos de la semana es: %d \n", totProduc);
    printf("El monto total de la semana es: %.02f\n", precioSemana);

    printf("El monto mayor es: %.02f\n", montoMayor);
    printf("El dia con el monto mayor es: %d\n", diaMayor);

}

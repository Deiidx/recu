#include <stdio.h>
int main(){

int legajo, nota;
char grado;
int notaA, notaB;
float notasA, notasB, promedioA, promedioB;
int contLegajos = 0, totLegajos = 0;
float proMayor = 0;
int anioMayor = 0;
char gradoMayor;

    for(int anio = 1; anio <= 2; anio++){
        printf("Anio %d\n", anio);
        int salir = 'n';
        notaA = 0;
        notaB = 0;
        notasA = 0;
        notasB = 0;
        promedioA = 0;
        promedioB = 0;
        contLegajos = 0;


        while (salir != 0){

            contLegajos++;

            printf("Ingrese el numero de legajo: ");
            scanf("%d", &legajo);
            fflush(stdin);

            printf("Ingrese el grado (A/B): ");
            scanf("%c", &grado);
            fflush(stdin);

            printf("Ingrese la nota: ");
            scanf("%d", &nota);
            fflush(stdin);

            if (grado == 'a' || grado == 'A'){
                notaA ++;
                notasA += nota;
            }
            else if (grado == 'b' || grado == 'B'){
                notaB ++;
                notasB += nota;
            }

            printf("Para salir ingrese 0, o continuar con cualquier caracter: ");
            scanf("%d", &salir);
            fflush(stdin);
        }

        if(notaA != 0){
        promedioA = notasA / notaA;
        }
        if(notaB != 0){
        promedioB = notasB / notaB;
        }

        printf("Anio %d - promedio general: ",anio);
        printf("\n");
        printf("A = %.02f\n", promedioA);
        printf("B = %.02f\n", promedioB);

        totLegajos += contLegajos;

        if (promedioA > proMayor){
            proMayor = promedioA;
            gradoMayor = 'A';
            anioMayor = anio;
        }
        if (promedioB > proMayor){
            proMayor = promedioB;
            gradoMayor = 'B';
            anioMayor = anio;
        }

    }

    printf("La cantidad de legajos es: %d\n", totLegajos);
    printf("El anio con mayor promedio es: %d\n", anioMayor);
    printf("El grado con mayor promedio es: %c\n", gradoMayor);
    printf("El promedio mayor es: %.02f\n", proMayor);

    return 0;
}

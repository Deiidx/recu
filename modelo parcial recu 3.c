#include <stdio.h>
int main(){

int nota1, nota2, nota3, nota4;
float promedio, sumNotas;
char nombre;
char salir;
int totAlum, totAprobados = 0, totDesaprobados = 0;
char nombreMayor;
float proMayor = 1;

do {
    printf("Ingrese la inicial del alumno: ");
    scanf("%c", &nombre);
    fflush(stdin);
    totAlum ++;

    printf("Ingrese la primer nota: ");
    scanf("%d", &nota1);
    fflush(stdin);

    printf("Ingrese la segunda nota: ");
    scanf("%d", &nota2);
    fflush(stdin);

    printf("Ingrese la tercer nota: ");
    scanf("%d", &nota3);
    fflush(stdin);

    printf("Ingrese la cuarta nota: ");
    scanf("%d", &nota4);
    fflush(stdin);

    sumNotas = (nota1 + nota2 + nota3 + nota4);
    promedio = sumNotas/4;

    if (promedio >= 6){
        printf("\nEl alumno %c tiene un promedio de %.01f, el alumno esta aprobado.\n",nombre,promedio);
        totAprobados ++;
    }
    else {
        printf("\nEl alumno %c tiene un promedio de %.01f, el alumno esta desaprobado.\n",nombre,promedio);
        totDesaprobados ++;
    }

    printf("\nDesea ingresar otro alumno S o terminar con F: ");
    scanf("%c",&salir);
    fflush(stdin);

    if (promedio > proMayor){
        proMayor = promedio;
        nombreMayor = nombre;
    }

}while (salir == 's' || salir == 'S');

printf("El total de alumnos es: %d\n", totAlum);
printf("El total de alumnos aprobados es: %d\n", totAprobados);
printf("El total de alumnos desaprobados es: %d\n", totDesaprobados);

printf("El alumno con el promedio mayor es: %c\n", nombreMayor);
printf("El promedio mayor es: %.01f", proMayor);



}

#include <stdio.h>
int main(){

/*
    Escribir un programa que lea una cadena de caracteres (maximo 100 caracteres) y remplace todas las apariciones de una letra especializada por el usuario con otra letra especializada por el usuario

    El programa debe solicitar al usuario la letra a buscar y la letra con la que se debe remplazar, y luego mostrar la cadena resultante por pantalla
*/

    char remplazar, letra;
    char cadena[100];


    printf("Ingrese una cadena de caracteres de maximo 100: ");
    gets(cadena);

    printf("Ingrese la letra que desea remplazar: ");
    fflush(stdin);
    scanf("%c", &remplazar);

    printf("Ingrese la letra por la que desea remplazarla: ");
    fflush(stdin);
    scanf("%c", &letra);


    for(int i = 0; cadena[i] != '\0'; i++){
        if (cadena[i]==remplazar){
            cadena[i] = letra;
        }

    }

    printf("La nueva cadena es: %s",cadena);



    return 0;
}


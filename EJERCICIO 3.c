#include <stdio.h>

int main() {
    char texto[200];
    int i;
    int primera_letra = 1;

    printf("Ingresa las oraciones separadas por puntos (maximo 200 caracteres):\n");
    gets(texto);


    for (i = 0; texto[i] != '\0'; i++) {
        if (primera_letra && texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] -= 32;
            primera_letra = 0;
        } else if (texto[i] == '.') {
            primera_letra = 1;
        }
    }

    printf("Texto corregido:\n%s\n", texto);

    return 0;
}

    #include <stdio.h>
int main(){

    char cadena[101];
    int vocales[5] = {0};
    int i;

    printf("Ingrese una cadena de caracteres de (maximo 100 caracteres): ");
    gets(cadena);

    for (i = 0; cadena[i] != '\0'; i++) {

        switch (cadena[i]){

        case 'a':
            vocales[0]++;
            break;
        case 'e':
            vocales[1]++;
            break;
        case 'i':
            vocales[2]++;
            break;
        case 'o':
            vocales[3]++;
            break;
        case 'u':
            vocales[4]++;
            break;
        case 'A':
            vocales[0]++;
            break;
        case 'E':
            vocales[1]++;
            break;
        case 'I':
            vocales[2]++;
            break;
        case 'O':
            vocales[3]++;
            break;
        case 'U':
            vocales[4]++;
            break;
        }
    }

    printf("\nCantidad de vocales:\n");
    printf("A: %d\n", vocales[0]);
    printf("E: %d\n", vocales[1]);
    printf("I: %d\n", vocales[2]);
    printf("O: %d\n", vocales[3]);
    printf("U: %d\n", vocales[4]);

    return 0;
}

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    char entrada;
    int caracteres = 0;
    int lineas = 0;
    int palabras = 0;
    int anteriorSeparador = 1;

    while (scanf("%c", &entrada) == 1) {

        caracteres++;

        if (entrada == '\n') lineas++;


        if (entrada == ' ' || entrada == '\n') {
            anteriorSeparador = 1;
        } else {
            if (anteriorSeparador == 1) palabras++;

            anteriorSeparador = 0;
        }
    }

    printf("Caracteres: %d\n", caracteres);
    printf("Palabras: %d\n", palabras);
    printf("Lineas: %d\n", lineas);

    return 0;
}

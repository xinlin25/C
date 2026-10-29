#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"");

    char c;

    printf("Introduce cadena Fin= enter + ctrl+z \n");

    while ((c = getchar()) != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}

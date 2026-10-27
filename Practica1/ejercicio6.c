#include <stdio.h>

int main(void) {

    char c;

    printf("Introduce un caracter...\n");
    scanf(" %c", &c);

    printf("ASCII de %c: %d", c,c);
    printf("\nASCII del caracter siguiente %c: %d", c+1 ,c+1);

    return 0;
}

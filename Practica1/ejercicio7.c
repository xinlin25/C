#include <stdio.h>

int main(void) {

    char c;
    int n;
    float n2;
    double n3;

    // %zu formato preferido para imprimir el resultado de sizeof
    printf("Char: %zu bytes\n", sizeof(c));
    printf("Int: %zu bytes\n", sizeof(n));
    printf("Float: %zu bytes\n", sizeof(n2));
    printf("Double: %zu bytes\n", sizeof(n3));

    return 0;
}

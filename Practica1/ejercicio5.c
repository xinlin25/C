#include <stdio.h>

int main(void) {

    char c;
    int n;
    float n2;
    double n3;

    printf("Introduce un char, un int, un float y un double separado por espacios\n");
    scanf("%c %d %f %lf", &c, &n, &n2, &n3);

    printf("Char: %c, Int: %d, Float: %.2f y Double: %.2lf", c, n, n2, n3);

    return 0;
}

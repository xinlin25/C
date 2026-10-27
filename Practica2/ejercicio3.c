
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "");

    float a, b, c, x1, x2, x3, discriminante;

    printf("Para la ecuacion de segundo grado ax^2 + bx + c = 0, introduce a, b y c separados por un espacio...\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("No es una ecuacion de segundo grado.\n");
        return 0;
    }

    discriminante = pow(b, 2) - 4*a*c;

    if (discriminante < 0) {
        printf("La ecuacion no tiene raices reales.\n");
        return 0;
    }

    x1 = (-b + sqrt(discriminante)) / (2*a);
    x2 = (-b - sqrt(discriminante)) / (2*a);

    if (x1 > x2) {
        x3 = x1;
        x1 = x2;
        x2 = x3;
    }

    printf("Las raices de la ecuacion son %.2f y %.2f\n", x1, x2);

    return 0;
}

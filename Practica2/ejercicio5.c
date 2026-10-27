#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "");

    float n1, n2;
    char operacion;

    printf("Introduce dos números separados por espacio...\n");
    scanf("%f %f", &n1, &n2);

    printf("Introduce la operación a realizar (+ - x /)");
    scanf(" %c", &operacion);

    switch (operacion) {
    case '+':
        printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
        break;
    case 'x':
        printf("%.2f x %.2f = %.2f", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
        break;
    default:
        printf("Opción inválida");
    }

    return 0;
}

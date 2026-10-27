#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL,"");

    float a,b,c,d,x, resultado;

    printf("Dado el polinomio de grado tres p(x) = ax^3+ bx^2+ cx + d\n");
    printf("Introduce a, b, c, d y x respectivamente separados por un espacio:\n");

    scanf("%f %f %f %f %f", &a, &b, &c, &d, &x);

    resultado = a * pow(x,3) + b * pow(x,2) + c * x + d;

    printf("p(%.2f) = %.2f·%.2f^3 + %.2f·%.2f^2 + %.2f·%.2f + %.2f = %.2f",
           x, a, x, b, x, c, x, d, resultado);

    return 0;
}

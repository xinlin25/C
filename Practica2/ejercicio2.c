#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int n1, n2, n3, mayor, menor, i, actual;

    printf("Introduce tres números enteros positivos...\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    mayor = menor = n1;

    for (i = 1; i <= 2; i++) {

        if (i == 1) actual = n2;
        else actual = n3;

        if (actual > mayor) mayor = actual;

        if (actual < menor) menor = actual;
    }

    printf("El mayor es %d y el menor es %d", mayor, menor);

    return 0;
}

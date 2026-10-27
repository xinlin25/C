#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(void) {

    setlocale(LC_ALL,"");

    int n;
    int actual = 1;
    int fibonacci = 1;
    int anterior = 0;

    printf("Introduce un número entero positivo:\n");
    scanf("%d", &n);

    for (int i = 0; i < n-2 ; i++) {
        actual = fibonacci + anterior;
        anterior = fibonacci;
        fibonacci = actual;
    }
    printf("%d", fibonacci);

    return 0;
}


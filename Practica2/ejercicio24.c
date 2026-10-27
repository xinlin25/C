#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool esPrimo(int n) {

    bool esPrimo = true;

    if ((n % 2 == 0 && n != 2) || n < 2) esPrimo = false;

    else {
        for (int x = 3; x < n; x++) {
            if(n % x == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    return esPrimo;
}

void imprimirPrimos (int n1, int n2) {
    for (int i = n1; i < n2; i++) {
        if (esPrimo(i)) printf("%d, ", i);
    }

}

int main (void) {

    setlocale(LC_ALL, "");

    int n1, n2, n3;

    printf("Introduce dos números separados por un espacio...\n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        n3 = n1;
        n1 = n2;
        n2 = n3;
    }

    imprimirPrimos(n1, n2);

    return 0;
}

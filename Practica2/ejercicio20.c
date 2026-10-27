#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(void) {

    setlocale(LC_ALL,"");

    int n;
    bool esPrimo = true;

    printf("Introduce un número entero:\n");
    scanf("%d", &n);

    if ((n % 2 == 0 && n != 2) || n < 2) esPrimo = false;

    else {
        for (int x = 3; x < n; x++) {
            if(n % x == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    esPrimo ? printf("%d es primo", n) : printf("%d no es primo", n);

    return 0;
}

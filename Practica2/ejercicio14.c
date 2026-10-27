#include <stdio.h>
#include <locale.h>

int main (void) {

    setlocale(LC_ALL, "");

    int factorial = 1, n;

    printf("Introduce un entero positivo para saber su factorial...\n");
    scanf("%d", &n);

    for (int x = 1; x <= n; x++) {
        factorial *= x;
    }

    printf("%d! = %d", n, factorial);

    return 0;
}

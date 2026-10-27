#include <stdio.h>
#include <locale.h>

int mcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {

    setlocale(LC_ALL, "");

    int n1, n2;

    printf("Introduce dos números separados por un espacio...\n");
    scanf("%d %d", &n1, &n2);

    printf("El MCD de %d y %d es: %d\n", n1, n2, mcd(n1, n2));
    return 0;
}

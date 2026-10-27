#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int suma;

    for (int x = 0; x <= 10; x++) {
        suma += x;
    }

    printf("La suma de los 10 primeros números naturales es %d", suma);

    return 0;
}

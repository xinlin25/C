#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int suma = 0;

    for (int x = 2; x <= 1000; x += 2) {
        suma += x;
    }

    printf("La suma de los pares desde el 2 al mil es %d", suma);

    return 0;
}

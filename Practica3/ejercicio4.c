#include <stdio.h>
#include <locale.h>

int main (void) {

    setlocale(LC_ALL, "");

    int n;
    //Para definir punteros ponemos un * delante del nombre de la variable
    int *puntero = NULL;

    printf("Introduce un número entero...\n");
    scanf("%d", &n);

    printf("El entero %d tiene su dirección de memoria en %p\n", n, &n);

    return 0;
}

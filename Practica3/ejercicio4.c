#include <stdio.h>
#include <locale.h>

int main (void) {

    setlocale(LC_ALL, "");

    int n;
    //Para definir punteros ponemos un * delante del nombre de la variable
    int *puntero = NULL;

    printf("Introduce un número entero...\n");
    scanf("%d", &n);

    puntero = &n;

    // %p se usa para imprimmir dirreciones de memoria y & devuelve la dirección física
    printf("El entero %d tiene su dirección de memoria en %p\n", n, &n);
    printf("El valor del punto es de %p y su dirección de memoria es %p\n", puntero , &puntero);
    printf("El valor referenciado del puntero es %d\n", *puntero);

    return 0;
}

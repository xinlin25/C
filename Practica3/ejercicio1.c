#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int x, y;

    printf("Introduce dos coordenadas cartesianas separadas por un espacio...\n");
    scanf("%d %d", &x, &y);

    if (x > 0)
        y < 0 ? printf("Estas en el cuarto cuadrante") : printf("Estas en el primer cuadrante");

    if (x < 0)
        y < 0 ? printf("Estas en el tercer cuadrante") : printf("Estas en el segundo cuadrante");

    if (x == 0 || y == 0) printf("Estas en el eje");

    return 0;
}

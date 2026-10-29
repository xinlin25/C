#include <stdio.h>
#include <locale.h>

float calcularIntensidad (float res, float vol) {
    return vol / res;
}

int main (void) {

    setlocale(LC_ALL, "");

    float res, vol, intensidad;

    printf("Introduce una resistencia...\n");
    scanf("%f", &res);

    printf("Introduce una cantidad de voltios...\n");
    scanf("%f", &vol);

    intensidad = calcularIntensidad(res, vol);

    printf("Dados la resistencia %.2f y los voltios %.2f, sabemos que la intensidad es %.2f", res, vol, intensidad);

    return 0;
}

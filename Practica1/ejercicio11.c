#include <stdio.h>
#include <math.h>

int main(void) {

    float inductor, frecuencia, resultado;

    printf("Introduce el valor del inductor y de la frecuencia separados por un espacio...\n");
    scanf("%f %f", &inductor, &frecuencia);

    resultado = 2 * M_PI * inductor * frecuencia;

    printf("El valor de la reactancia inductiva es de: %.2f", resultado);

    return 0;
}

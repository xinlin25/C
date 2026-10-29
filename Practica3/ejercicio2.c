#include <stdio.h>
#include <locale.h>
#include <math.h>

float calcularPerimetro (float radio) {

    return 2 * M_PI * radio;

}

float calcularArea (float radio) {

    return M_PI * pow(radio, 2);

}

float calcularVolumen (float radio) {

    return (4.0/3.0) * M_PI * pow(radio, 3);

}

int main(void) {

    setlocale(LC_ALL, "");

    float radio;

    printf("Introduce un radio...\n");
    scanf("%f", &radio);

    printf("El perimetro de la circunferencia es %.2f\n", calcularPerimetro(radio));
    printf("El área de la circunferencia es %.2f\n", calcularArea(radio));
    printf("El volumen de la circunferencia es %.2f", calcularVolumen(radio));

    return 0;
}

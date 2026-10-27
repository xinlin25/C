#include <stdio.h>
#include <math.h>

int main(void) {

    float radio, perimetro, area, volumen;

    printf("Introduce un radio...\n");
    scanf("%f", &radio);

    perimetro = 2 * M_PI * radio;
    area = M_PI * pow(radio,2);
    volumen = (4.00/3.00) * M_PI * pow(radio,3);

    printf("Circunferencia con radio: %.2f: \n Perimetro: %.2f\n Area: %.2f\n Volumen: %.2f",
           radio, perimetro, area, volumen);

    return 0;
}

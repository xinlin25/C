#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"");


    float G = 9.8;
    float longitud, periodo;

    printf("Introduce la longitud para calcular el periodo del pendulo...\n");
    scanf("%f", &longitud);

    periodo = 2 * M_PI * sqrt(longitud / G);

    printf("El periodo del péndulo es de %.2f", periodo);

    return 0;
}

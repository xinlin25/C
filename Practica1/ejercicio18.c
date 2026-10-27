#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL,"");

    float x1, y1, x2, y2, distancia;

    printf("Introduce las coordenadas del punto 1 (x1,y1)...\n");
    scanf("%f %f", &x1, &y1);

    printf("Introduce las coordenadas del punto 2 (x2,y2)...\n");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    printf("La distancia entre los puntos (%.2f,%.2f) y (%.2f,%.2f) es de %.2f",
           x1, y1, x2, y2, distancia);

    return 0;
}

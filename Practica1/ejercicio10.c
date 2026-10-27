#include <stdio.h>

int main(void) {
    int segundos, minutos, horas;

    printf("Introduce un numero de segundos...\n");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;

    segundos = segundos - (minutos * 60);
    minutos = minutos - (horas * 60);

    printf("%.2d:%.2d:%.2d", horas, minutos, segundos);

    return 0;
}

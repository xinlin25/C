#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int segundos, minutos, horas;

    printf("Introduce horas, minutos y segundos separados por un espacio:\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    segundos++;

    if (segundos == 60) {
        segundos = 0;
        minutos++;
    }

    if (minutos == 60) {
        minutos = 0;
        horas++;
    }

    if (horas == 24) {
        horas = 0;
    }

    printf("Un segundo después serán las %02d:%02d:%02d\n",
           horas, minutos, segundos);

    return 0;
}

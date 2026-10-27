#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "");

    int base, potencia;

    printf("Introduce la base...\n"),
    scanf("%d", &base);

    printf("\nIntroduce la potencia...\n"),
    scanf("%d", &potencia);

    printf("La potencia con base %d y potencia %d es %.0f", base, potencia, pow(base, potencia));

    return 0;
}

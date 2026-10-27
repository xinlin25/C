#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int n = 1, contador = 0;
    float media = 0;

    while (n > 0) {
        printf("Introduce un número entero...\n");
        scanf("%d", &n);

        if (n > 0) {
            media += n;
            contador++;
        }
    }

    if (contador > 0) media = media / contador;

    printf("La media es %.2f", media);

    return 0;
}

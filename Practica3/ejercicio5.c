#include <stdio.h>
#include <locale.h>

void intercambiar(int *n1, int *n2) {
    int aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main(void) {

    setlocale(LC_ALL, "");

    int n1, n2;

    printf("Introduce dos números separados por un espacio...\n");
    scanf("%d %d", &n1, &n2);

    printf("Los números almacenados %d y %d", n1, n2);
    intercambiar(&n1, &n2);

    printf(",intercambiados son %d y %d", n1, n2);


    return 0;
}

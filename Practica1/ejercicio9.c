#include <stdio.h>

int main(void) {

    int n1, n2, n3;
    float media;

    printf("Introduce tres numeros separados por un espacio...\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Tu media es de %.2f", media);

    return 0;
}

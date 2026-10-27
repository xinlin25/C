#include <stdio.h>

int main(void) {

    int n1, n2, n3;

    printf("Introduce dos numeros separados por un espacio...\n");
    scanf("%d %d", &n1, &n2);

    if (n2 > n1) {
        n3 = n1;
        n1 = n2;
        n2 = n3;
    }

    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d x %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    //Para imprimir % se escribe %%
    printf("%d %% %d = %d", n1, n2, n1 % n2);

    return 0;
}

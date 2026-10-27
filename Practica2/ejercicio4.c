
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "");

    int n1, n2;

    printf("Introduce dos números separados por espacio...\n");
    scanf("%d %d", &n1, &n2);

    if (n1 % n2 == 0)
        printf("%d es divisible entre %d\n", n1, n2);
    if (n2 % n1 == 0)
        printf("%d es divisible entre %d\n", n2, n1);
    else
        printf("Los numeros %d y %d no son divisibles entre si", n1, n2);

    return 0;
}

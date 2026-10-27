#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    int n1, n2, n3;

    printf("Introduce dos números enteros separados por un espacio...\n");
    scanf("%d %d", &n1, &n2);

    if (n2 > n1) {
        n3 = n1;
        n1 = n2;
        n2 = n3;
    }

    for (int x = n2; x <= n1; x++) {
        printf("%d\n",x);
    }

    return 0;
}

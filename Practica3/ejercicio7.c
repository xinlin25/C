#include <stdio.h>
#include <locale.h>

void imprimirArmonica(int n) {
    if (n > 0) {
        printf("1 + ");
        for (int i = 2; i < n+1 ; i++) {
            printf("1/%d ", i);
            if (i != n) {
                printf("+ ");
            }
        }
    }

}

int main (void) {

    setlocale(LC_ALL, "");

    int n;

    printf("Introduce un número para saber esos términos de la serie armónica...\n");
    scanf("%d", &n);

    imprimirArmonica(n);

    return 0;
}

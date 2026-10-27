#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"");

    int digitos = 0;
    int n;

    printf("Introduce un numero entero...\n");
    scanf("%d", &n);

    while (n != 0) {
        n /= 10;
        digitos++;
    }

    printf("Tu número tiene %d digitos", digitos);

    return 0;
}

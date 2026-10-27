#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"");

    int n;

    printf("Introduce un número entero positivo...\n");
    scanf("%d", &n);

    if (n % 2 == 0) printf("%d es par", n);
    else printf("%d es impar", n);

    return 0;
}

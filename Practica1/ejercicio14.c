#include <stdio.h>
#include <math.h>

int main(void) {

    int n;

    printf("Introduce un numero...\n");
    scanf("%d", &n);

    // pow devuelve float
    printf("%d ^ 2 = %.0f\n", n, pow(n,2));
    printf("%d ^ 3 = %.0f\n", n, pow(n,3));
    printf("2 ^ %d = %.0f\n", n, pow(2,n));
    printf("3 ^ %d = %.0f\n", n, pow(3,n));

    return 0;
}

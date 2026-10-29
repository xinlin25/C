#include <stdio.h>
#include <locale.h>
#include <math.h>

int sumaSecuencia(int n1, int n2) {
    int suma;
    int contador = 1;

    for (int i = 1; i <= n2; i+2) {
        contador % 2 == 0 ? (suma += pow(n1,i)) : (suma -= pow(n1,i));
        contador++;
    }

    return suma;
}


int main(void) {

    setlocale(LC_ALL, "");

    int n1, n2;

    printf("Introduce el valor de x...\n");
    scanf("%d", &n1);

    printf("Introduce el número de términos de la serie...\n");
    scanf("%d", &n2);

    printf("La suma de la secuencia es %d", sumaSecuencia(n1, n2));

    return 0;
}

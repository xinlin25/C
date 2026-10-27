#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool esPrimo(int n) {

    bool esPrimo = true;

    if ((n % 2 == 0 && n != 2) || n < 2) esPrimo = false;

    else {
        for (int x = 3; x < n; x++) {
            if(n % x == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    return esPrimo;
}

int primoSiguiente (int n) {
    n++;

    while (esPrimo(n) == false) {
        n++;
    }

    return n;
}


int main(void) {

    setlocale(LC_ALL, "");

    int n;
    int aux;
    int divisor = 2;
    int potencia = 0;
    bool primerFactor = true;

    printf("Introduce un número entero mayor que 0...\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido.");
    } else {
        if (n == 1) printf("1");

        else {
            aux = n;
            printf("%d = ", n);

            while (aux != 1){
                while (aux % divisor == 0) {
                    aux /= divisor;
                    potencia++;
                }

            if (potencia != 0) {
                if (primerFactor == false) printf(" * ");

                printf("%d^%d", divisor, potencia);
                primerFactor = false;
                }

            potencia = 0;
            divisor = primoSiguiente(divisor);
            }
        }
    }

    return 0;
}

#include <stdio.h>
#include <locale.h>

float suma (float n1, float n2) {
    return n1 + n2;
}

float resta (float n1, float n2) {
    return n1 - n2;
}

float producto (float n1, float n2) {
    return n1 * n2;
}

float division (float n1, float n2) {
    return n1 / n2;
}

int main(void) {

    setlocale(LC_ALL, "");

    int operacion = 10;
    float n1, n2, aux;
    int continuar = 1;

    while (continuar == 1) {
        printf("¡Bienvenido a la calculadora! \nIntroduce 1 para continuar o 0 para salir...\n");
        scanf("%d", &continuar);

        if (continuar != 1) break;

        printf("Introduce dos números separados por una espacio...\n");
        scanf("%f %f", &n1, &n2);

        printf("Introduce la operación a realizar:\n1. Sumar\n2. Restar\n3. Multiplicar \n4. Dividir\n");
        scanf("%d", &operacion);

        switch (operacion) {
            case 1:
                printf("%.2f + %.2f = %.2f\n", n1, n2, suma(n1, n2));
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", n1, n2, resta(n1, n2));
                break;
            case 3:
                printf("%.2f x %.2f = %.2f\n", n1, n2, producto(n1, n2));
                break;
            case 4:
                if (n2 == 0)
                    printf("No es posible realizar la división\n");
                else
                    printf("%.2f / %.2f = %.2f\n", n1, n2, division(n1, n2));
                break;
            default:
                printf("Opción inválida\n");
        }
        printf("\n");
    }


    return 0;
}

#include <stdio.h>

int main(void) {

    char inicial;

    printf("Introduce tu nombre...\n");
    // Espacio antes de %c para ignorar el salto de linea
    scanf(" %c", &inicial);

    printf("\nTu inicial es: %c", inicial);

    return 0;
}

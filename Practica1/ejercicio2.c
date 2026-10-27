#include <stdio.h>

int main(void) {
    char nombre[50], fecha[20], tlf[20];

    printf("Introduce tu nombre y apellidos...\n");
    // [^\n] --> Lee hasta el salto de línea, para leer espacios
    scanf(" %49[^\n]", &nombre);

    printf("Introduce tu fecha de nacimiento...\n");
    scanf("%19s", &fecha);

    printf("Introduce tu numero de telefono...\n");
    scanf("%19s", &tlf);

    printf("Te llamas %s, naciste el %s y tu numero de telefono es %s", nombre, fecha, tlf);
    return 0;
}

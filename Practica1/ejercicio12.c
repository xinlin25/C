#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;
    printf("Introduzca los grados celsius...");
    scanf("%f", &celsius);
    fahrenheit = 9.0 / 5.0 * celsius + 32.0;
    printf("%f grados Celsius son %f grados Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

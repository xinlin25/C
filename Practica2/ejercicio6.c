#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "");

    int dia;

    printf("Introduce un numero entero del 1 al 7...\n");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Dia 1 ... Lunes");
            break;
        case 2:
            printf("Día 2 ... Martes");
            break;
        case 3:
            printf("Día 3 ... Miércoles");
            break;
        case 4:
            printf("Día 4 ... Jueves");
            break;
        case 5:
            printf("Día 5 ... Viernes");
            break;
        case 6:
            printf("Día 6 ... Sabado");
            break;
        case 7:
            printf("Día 7 ... Domingo");
            break;
        default:
            printf("Opción no válida");
            break;
    }

    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int dia, mes, anio;
    int diasMes;
    bool esBisiesto, esValido;

    printf("Introduce un día, mes y año separados por espacios:\n");

    if (scanf("%d %d %d", &dia, &mes, &anio) != 3) {
        printf("Entrada no válida.\n");
        return 1;
    }

    esBisiesto = (anio % 4 == 0 && anio % 100 != 0)
                 || (anio % 400 == 0);

    if (mes < 1 || mes > 12) {
        esValido = false;
    } else {
        switch (mes) {
            case 2:
                diasMes = esBisiesto ? 29 : 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                diasMes = 30;
                break;
            default:
                diasMes = 31;
        }

        esValido = (dia >= 1 && dia <= diasMes);
    }

    if (esValido) {
        printf("%02d/%02d/%d es una fecha válida.\n",
               dia, mes, anio);
    } else {
        printf("%02d/%02d/%d no es una fecha válida.\n",
               dia, mes, anio);
    }

    return 0;
}

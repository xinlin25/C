#include <stdio.h>

int main(void) {

    float salario, precio;
    int horas;
    float impuestos = 0.1;

    printf("¿Cuantas horas has trabajado?\n");
    scanf("%d", &horas);

    printf("¿Cual es el precio por hora?\n");
    scanf("%f", &precio);

    salario = (horas * precio) - (horas * precio * impuestos);

    printf("Tu salario neto es de %.2f euros", salario);

    return 0;
}

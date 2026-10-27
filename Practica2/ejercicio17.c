#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"");

    char entrada[1000];

    while (1) {
        scanf("%s", &entrada);
        printf("%s\n", entrada);

    }

    return 0;
}

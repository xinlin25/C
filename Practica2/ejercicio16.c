#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "");

    for (int x = 1; x <= 10; x++) {
        printf("\nTabla del %d\n", x);
        for(int y = 0; y <= 10; y++){
            printf("%d x %d = %d\n", x, y, x * y);
        }
    }

    return 0;
}


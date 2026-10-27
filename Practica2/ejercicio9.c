#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");

    for (int x = 0; x <= 10; x++) {
        printf("%d\n",x);
    }

    return 0;
}

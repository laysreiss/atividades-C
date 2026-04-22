#include <stdio.h>

int main() {
    int x = 10;

    if (1) {
        int x = 20; // novo escopo
        printf("Dentro do if: %d\n", x);
    }

    printf("Fora do if: %d\n", x);

    return 0;
}
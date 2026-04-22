#include <stdio.h>

void incrementar(int *x) {
    (*x)++;
}

int main() {
    int num = 10;

    incrementar(&num);

    printf("Valor: %d\n", num);

    return 0;
}
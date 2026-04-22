#include <stdio.h>

void porValor(int x) {
    x = 50;
}

void porReferencia(int *x) {
    *x = 50;
}

int main() {
    int num = 10;

    porValor(num);
    printf("Depois por valor: %d\n", num);

    porReferencia(&num);
    printf("Depois por referencia: %d\n", num);

    return 0;
}
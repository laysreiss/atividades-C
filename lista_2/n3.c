#include <stdio.h>

void alterar(int *x) {
    *x = 100;
}

int main() {
    int num = 10;

    printf("Antes: %d\n", num);

    alterar(&num);

    printf("Depois: %d\n", num);

    return 0;
}
#include <stdio.h>

int x = 10;

void funcao() {
    int x = 20;
    printf("Dentro da funcao: x = %d\n", x);
}

int main() {
    printf("Antes da funcao: x = %d\n", x);

    funcao();

    printf("Depois da funcao: x = %d\n", x);

    return 0;
}
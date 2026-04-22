#include <stdio.h>

int contador = 0;

void funcao() {
    contador++;
    printf("Funcao chamada %d vezes\n", contador);
}

int main() {
    funcao();
    funcao();
    funcao();

    return 0;
}
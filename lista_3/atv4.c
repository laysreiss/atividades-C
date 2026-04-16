#include <stdio.h>

int contar(int n) {
    if (n == 0) return 1;
    return 1 + contar(n - 1);
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Quantidade de numeros de %d ate 0 = %d\n", n, contar(n));

    return 0;
}
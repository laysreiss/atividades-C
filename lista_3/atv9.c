#include <stdio.h>

// iterativo
int fatorial_iterativo(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

// recursivo
int fatorial_recursivo(int n) {
    if (n == 0) return 1;
    return n * fatorial_recursivo(n - 1);
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Iterativo: %d\n", fatorial_iterativo(n));
    printf("Recursivo: %d\n", fatorial_recursivo(n));

    return 0;
}
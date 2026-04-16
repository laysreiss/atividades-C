#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

void resultado(int somatoria) {
    printf("A soma é %d\n", somatoria);
}

int main() {
    int a, b, somatoria;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    somatoria = soma(a, b);

    resultado(somatoria);

    return 0;
}
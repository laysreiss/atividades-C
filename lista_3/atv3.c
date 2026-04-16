#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) return 1;
    return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);

    printf("Resultado = %d\n", potencia(base, expoente));

    return 0;
}
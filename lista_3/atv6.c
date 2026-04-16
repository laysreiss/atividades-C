#include <stdio.h>

void dobrar(int *p) {
    *p = (*p) * 2;
}

int main() {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    dobrar(&x);

    printf("Dobrado: %d\n", x);

    return 0;
}
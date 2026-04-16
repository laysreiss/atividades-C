#include <stdio.h>
int selecao(int n) {
    if (n%2 == 0) {
        return printf("verdadeiro");
    }
    else {
        return printf("falso");
    }

}
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    selecao(numero);
    return 0;
}
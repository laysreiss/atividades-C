#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);

    char *p = nome;

    *p = 'X';

    printf("Resultado: %s", nome);

    return 0;
}
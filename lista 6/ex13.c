#include <stdio.h>

int main() {
    char frase[200], palavra[50];
    int achou = 0;

    fgets(frase, 200, stdin);
    fgets(palavra, 50, stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        int j = 0;

        while (frase[i + j] == palavra[j] && palavra[j] != '\n') {
            j++;
        }

        if (palavra[j] == '\n') {
            achou = 1;
            break;
        }
    }

    if (achou) printf("Encontrada\n");
    else printf("Nao encontrada\n");

    return 0;
}
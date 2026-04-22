#include <stdio.h>

int main() {
    char str[100];
    int i, tamanho = 0, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        tamanho++;
    }
    for (i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo)
        printf("É palindromo\n");
    else
        printf("Não é palindromo\n");

    return 0;
}
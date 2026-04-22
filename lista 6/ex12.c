#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, 100, stdin);

    while (str[i] != '\0') i++;

    printf("Tamanho: %d\n", i);

    return 0;
}
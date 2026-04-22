#include <stdio.h>

int main() {
    char str[100];

    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
            case 'a': case 'A': str[i] = '4'; break;
            case 'e': case 'E': str[i] = '3'; break;
            case 'i': case 'I': str[i] = '1'; break;
            case 'o': case 'O': str[i] = '0'; break;
        }
    }

    printf("%s", str);

    return 0;
}
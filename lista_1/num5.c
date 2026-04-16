#include <stdio.h>
int media(float a, float b, float c) {


    return (a + b + c) / 3;
}
int main() {

    float a, b, c;
    printf("Digite a primeira nota: ");
    scanf("%f", &a);
    printf("Digite a segunda nota: ");
    scanf("%f", &b);
    printf("Digite a terceira nota: ");
    scanf("%f", &c);
    printf("A média é: %.1f", media(a, b, c));
    return 0;
}
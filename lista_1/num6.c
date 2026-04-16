#include <stdio.h>
void conclusao(float media) {
    if (media >= 6) {
    printf("aprovado");
    }
    else {

        printf("reprovado");
    }
}
int main ( ) {
    float media;
    printf("Digite a media do aluno: ");
    scanf("%f", &media);
    conclusao(media);
    return 0;
}
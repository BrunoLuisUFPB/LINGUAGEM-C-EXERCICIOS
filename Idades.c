#include <stdio.h>
#include <math.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main () {

    char nome01[50], nome02[50];
    int idade01, idade02;
    double mediaIdade;

    printf("Dados da primeira pessoa:\n");

    printf("Nome: ");
    ler_texto(nome01, 50);
    printf("Idade: ");
    scanf("%i", &idade01);
    limpar_entrada();

    printf("Dados da segunda pessoa:\n");

    printf("Nome: ");
    ler_texto(nome02, 50);
    printf("Idade: ");
    scanf("%i", &idade02);


    mediaIdade = 0;

    mediaIdade = (idade01 + idade02) / 2.0;

    printf("A idade média de %s e %s é de %.1lf anos", nome01, nome02, mediaIdade);

    return 0;

}

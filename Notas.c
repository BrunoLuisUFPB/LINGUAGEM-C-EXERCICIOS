#include <stdio.h>
#include <math.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main () {

    double nota01, nota02, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota01);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota02);

    media = 0;
    media = (nota01 + nota02) / 2;

    if (media >= 6) {

        printf("\nNOTA FINAL = %.2lf", media);

    } else {

        printf("\nREPROVADO");

    }

    return 0;

}

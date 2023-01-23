#include <stdio.h>
#include <math.h>


int main () {

    int N, i, x;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%N", &N);

    double vet[N];

    soma = 0;
    media = 0;

    for (i = 0; i < N; i++) {

        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

    }

    printf("\nVALORES: ");

    for (i = 0; i < N; i++) {

        soma = soma + vet[i];

        media = soma / N;

        printf("%.1lf ", vet[i]);

    }

    printf("\nSOMA = %.2lf", soma);

    printf("\nMEDIA = %.2lf", media);

    return 0;

}

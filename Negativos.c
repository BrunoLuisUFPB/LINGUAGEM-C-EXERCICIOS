#include <stdio.h>
#include <math.h>


int main () {

    int N, i, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%N", &N);

    int vet[N];

    for (i = 0; i < N; i++) {

        printf("\nDigite um numero: ");
        scanf("%i", &vet[i]);

    }

    printf("\nNUMEROS NEGATIVOS:\n");

    for (i = 0; i < N; i++) {
        if (vet[i] < 0) {

            printf("%i\n", vet[i]);

        }

    }

    return 0;

}

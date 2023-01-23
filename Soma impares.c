#include <stdio.h>
#include <math.h>


int main () {

    int i, x, y, soma, troca;

    printf("Digite dois numeros:\n");
    scanf("%i", &x);
    scanf("%i", &y);

    if (x > y) {

        troca = x;
        x = y;
        y = troca;

    }

    soma = 0;

    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {

            soma = soma + i;

        }

    }

    printf("SOMA DOS IMPARES = %i\n", soma);

    return 0;

}

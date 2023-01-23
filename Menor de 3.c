#include <stdio.h>
#include <math.h>


int main () {

    int a, b, c, menor;

    printf("Primeiro valor: ");
    scanf("%i", &a);

    printf("Segundo valor: ");
    scanf("%i", &b);

    printf("Terceiro valor: ");
    scanf("%i", &c);

    if (a < b && a < c) {

        printf("MENOR = %i", a);

    } else if (b < c) {

        printf("MENOR = %i", b);

    } else {

        printf("MENOR = %i", c);

    }

    return 0;

}

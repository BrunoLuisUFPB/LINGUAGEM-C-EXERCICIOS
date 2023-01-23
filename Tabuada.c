#include <stdio.h>
#include <math.h>


int main () {

    int i, N, multi;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%i", &N);


    for (i = 1; i <= 10; i++) {

        multi = N * i;

        printf("%i x %i = %i\n", N, i, multi);

    }

    return 0;

}

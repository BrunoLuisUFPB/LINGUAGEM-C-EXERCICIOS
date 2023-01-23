#include <stdio.h>
#include <math.h>


int main () {


    double delta, x2, x1, a, b, c;

    printf("Coeficiente a: ");
    scanf("%lf", &a);

    printf("Coeficiente b: ");
    scanf("%lf", &b);

    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = 0;

    delta = pow(b, 2) - 4.0 * a * c;

    if (delta < 0 || a == 0) {

        printf("\n Esta equação não possui raízes reais\n");


    } else {

        x1 = (- b + sqrt(delta)) / (2 * a);

        x2 = (- b - sqrt(delta)) / (2 * a);

        printf("X1 = %lf\n", x1);

        printf("X2 = %lf", x2);

    }

    return 0;

}

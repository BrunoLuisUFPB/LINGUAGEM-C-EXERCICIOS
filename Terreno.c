#include <stdio.h>

int main ()
{

    double largura, comprimento, metroQuadrado, area, preco;

    printf("Digite valor da largura: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metroQuadrado);

    area = 0;

    preco = 0;

    area = largura * comprimento;

    preco = area * metroQuadrado;

    printf("Área do terreno = %.2lf\n", area);

    printf("Preço do terreno = %.2lf", preco);

    return 0;
}

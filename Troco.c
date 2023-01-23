#include <stdio.h>
#include <math.h>

int main () {

    double preco, dinheiroRecebido, troco, conta;
    int quant;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%i", &quant);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    conta = 0;

    conta = preco * quant;

    troco = dinheiroRecebido - conta;

    if (dinheiroRecebido < conta) {

        printf("\nDINHEIRO INSUFICIENTE");

    } else {

        printf("\nTROCO =R$ %.2lf", troco);

    }

    return 0;

}

#include <stdio.h>
#include <math.h>

void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
}

int main () {

    char nome[50];
    double valorHora, salario;
    int horaTrabalhada;

    printf("NOME: ");
    ler_texto(nome, 50);

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%i", &horaTrabalhada);

    salario = 0;

    salario = valorHora * horaTrabalhada;

    printf("\nO pagamento para %s deve ser %.2lf", nome, salario);

    return 0;

}

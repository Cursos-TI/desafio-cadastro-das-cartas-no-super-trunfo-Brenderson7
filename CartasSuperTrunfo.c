#include <stdio.h>

int main() {
    int Carta1;
    char Estado = 'A';
    char Codigo[4] = "A01";
    char Nome_da_cidade[20] = "São Paulo";
    int Populacao = 12325000;
    float Area = 1521.11;
    float Pib = 699.28;
    int Numeros_de_pontos_turisticos = 50;

    // Entrada dos dados das cartas
    printf("Exibir Carta 1: ");
    scanf("%d", &Carta1);

    printf("Exibir Estado (A): ");
    scanf(" %c", &Estado);  // Espaço antes do %c para evitar problemas com quebra de linha

    printf("Exibir Código (A01): ");
    scanf("%s", Codigo);

    printf("Exibir Nome da Cidade: ");
    scanf("%s", Nome_da_cidade);

    printf("Exibir População: ");
    scanf("%d", &Populacao);

    printf("Exibir Área da cidade (em Km²): ");
    scanf("%f", &Area);

    printf("Exibir PIB da cidade (em bilhões de reais): ");
    scanf("%f", &Pib);

    printf("Exibir Número de pontos turísticos: ");
    scanf("%d", &Numeros_de_pontos_turisticos);

    // Exibição de dados da Carta
    printf("\n--- Dados da Carta de Cidade ---\n");
    printf("Carta: %d\n", Carta1);
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f Km²\n", Area);
    printf("PIB: R$ %.2f bilhões\n", Pib);
    printf("Número de pontos turísticos: %d\n", Numeros_de_pontos_turisticos);

    return 0;
}

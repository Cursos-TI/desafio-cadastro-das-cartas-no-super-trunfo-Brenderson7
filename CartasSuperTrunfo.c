#include <stdio.h>

// Super Trunfo - Cidades Carta 1 e 2

int main() {
    // Definição das variáveis para os dados da Carta 1
    char carta1, carta2; //Carta 1 e 2
    char estado1, estado2; //Estado 1 e 2
    char codigo1[10], codigo2[10]; //Codigo 1 e 2
    char nome_da_cidade1[50], nome_da_cidade2[50]; //Nome da cidade 1 e 2
    int populacao1, populacao2; //Pupalação 1 e 2
    float area1, area2; //Area 1 e 2
    float pib1, pib2; //Pib 1 e 2
    int pontos_turisticos1, pontos_turisticos2; //Pontos turisticos 1 e 2

    // Entrada dos dados da Carta 1
    printf("\nCadastro da Carta 1\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Código para cadastro e exibição das cartas de cidades

int main() {
    // Definindo as variáveis para os atributos de cada cidade
    int codigo;
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    // Solicitar ao usuário as informações da cidade
    printf("Cadastro da Carta de Cidade\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", nome);  // Para ler uma string com espaços
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Verificação de entrada:
    if (pib < 0) {
        printf("O PIB não pode ser negativo.\n");
        return 1;  // Encerrar o programa com erro
    }
    if (populacao <= 0) {
        printf("A população deve ser maior que zero.\n");
        return 1;  // Encerrar o programa com erro
    }

    // Exibição dos Dados das Cartas:
    printf("\n--- Dados da Carta de Cidade ---\n");
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
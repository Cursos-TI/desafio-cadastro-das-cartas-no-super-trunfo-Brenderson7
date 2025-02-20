#include <stdio.h>

int main() {
    // Definição das variáveis com os dados da Carta 1
    int Carta1 = 1;
    char Estado = 'A';
    char Codigo[] = "A01";
    char Nome_da_cidade[] = "São Paulo";
    int Populacao = 12325000;
    float Area = 1521.11;
    float Pib = 699.28;
    int Numeros_de_pontos_turisticos = 50;

    // Exibição dos Dados da Carta
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
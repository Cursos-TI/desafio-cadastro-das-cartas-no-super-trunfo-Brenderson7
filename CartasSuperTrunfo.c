#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    int Carta1;
    char Estado = 'A';
    int Codigo = 'A01';
    char Nome_da_cidade [20] = "saopaulo";
    float População = 12325000;
    float Area = 1521.11;
    float Pib = 699.28;
    float Numeros_de_pontos_turisticos = 50;

    //Entrada dos dados das cartas
    printf("Exibir Cartar 1: ");
    scanf("%c", &Carta1);

    printf("Exibir Estado A:");
    scanf("%d", &Estado);

    printf("Exibir o Codigo A01:");
    scanf("%f", &Codigo);

    printf("Exibir o Nome da Cidade:");
    scanf("%s", Nome_da_cidade);

    printf("Exibir população:");
    scanf("%d", &População);

    Printf("Exibir Área da cidade (em Km²):");
    scanf("%2.f", &Area);

    printf("Exibir Pib da cidade (em bilhões de reais)");
    scanf("%2.f", &Pib);

    printf("Exibir Numers de pontos turisticos:");
    scanf("%d", &Numeros_de_pontos_turisticos);




    //Exibição de dados da Carta 
    printf("Carta é: %c\n", Carta1);
    printf("Estado: %d\n", Estado);
    printf("Código: %f\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d\n, populacao");
    printf("Área: %.2f Km²\n", Area);
    printf("Pib: %.2f bilhões\n", Pib);
    printf("Números de porntos turísticos: %d\n", Numeros_de_pontos_turisticos);

    return 0;
}

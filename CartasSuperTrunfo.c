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




    //Exibição de dados da Carta 
    printf("Carta é: %c\n", Carta1);
    printf("Estado: %d\n", Estado);
    printf("Código: %f\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d\n, populacao");
    printf("Área: %.2f Km²\n", Area);
    printf("Pib: %.2f bilhões\n", Pib);
    printf("Números de porntos turísticos: %d\n", Numeros_de_pontos_turisticos);





    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

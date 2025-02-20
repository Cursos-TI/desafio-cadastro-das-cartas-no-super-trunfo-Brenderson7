#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    int carta = 1;
    char estado = 'A';
    int codigo = 'A01';
    char nome_da_cidade [20] = "saopaulo";
    float população = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    float numeros_de_pontos_turisticos = 50;


    //Exibição de dados da Carta 
    printf("A carta é: %c\n", carta);
    printf("O estado é: %d\n", estado);
    printf("O código é: %f\n", codigo);
    printf("Nome da cidade é: %s\n", nome_da_cidade);
    printf("População: %d habitantes\n, populacao");
    printf("Área: %.2f Km²\n", area);
    printf("Pib: %.2f bilhões\n", pib);
    printf("Números de porntos turísticos: %d\n", numeros_de_pontos_turisticos);





    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

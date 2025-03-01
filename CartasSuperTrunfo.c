#include <stdio.h>

int main() {
    char estado1, estado2; 
    char codigo1[10], codigo2[10]; 
    char nome1[50], nome2[50]; 
    float populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade_populacional1, densidade_populaciona2;
    float pibpercapita1, pibpercapita2;
    
    // Calcula a densidade depois da entrada dos dados
    float densidade1 = populacao1 / area1; //Densidade = população / area 
    float densidade2 = populacao2 / area2;
    //Calcula Pib per Capita 
    float pibpercapita1 = pib1 / populacao1;//Pib per Capita = pib / população
    float pibpercapita2 = pib2 / populacao2;

    // Entrada da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da cidade: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1); 

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões R$): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

   
    // Entrada da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da cidade: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);


    // Exibição dos Dados das Cartas
    printf("\n==================================\n");
    printf("        DADOS DAS CARTAS         \n");
    printf("==================================\n");

    printf("\n--- Dados da Carta 1 ---\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %.2f habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("Pib per Capita: %.2f\n",pibpercapita1 );

    printf("\n--- Dados da Carta 2 ---\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %.2f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populaciona2: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", pibpercapita2);

    printf("\n==================================\n");

    return 0;
}

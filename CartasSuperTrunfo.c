#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50]; 
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1 = populacao1/area1;
    float pib1 = pib1/populacao1;
    float densidade2 = populacao2/area2;
    float pib2 = pib2/populacao2;
    int divisao;


    // Cadastro da primeira carta
    printf("\n=== Cadastro da Carta 1 ===\n");
    
    printf("Digite a letra do Estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (Ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade (sem espaços): \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    // Densidade Populacional Cidade 1
    printf("Divida a População pela área: \n");
    float densidade1 = (populacao1/area1);
    scanf("%f",populacao1/area1);

    // PIB Per Capita Cidade 1
    printf("Divida o PIB1 pela População1: \n");
    float pib1 = (pib1/populacao1);
    scanf("%f",pib1/populacao1);


    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Digite a letra do Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (Ex: B02): \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    // Densidade Populacional Cidade 2
    printf("Divida a População2 pela área2: \n");
    float densidade2 = (populacao2/area2);
    scanf("%f",populacao2/area2);

    // PIB Per Capita Cidade 2
    printf("Divida o PIB2 pela População2: \n");
    float pib2 = (pib2/populacao2);
    scanf("%f",pib2/populacao2);

    // Exibição dos dados das cartas
    printf("\n=== Resumo das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional:%.2f\n", densidade1);
    printf("PIB Per capita:%.2f\n", pib1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populaciona2:%.2f hab/km²\n", densidade2);
    printf("PIB Per capita2:%.2f pib/hab \n", pib2);

    return 0;
}
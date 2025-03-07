#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Países
    //Carta 1
    char Estado1[50];
    char Codigo1[50];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos1;

    // Cadastro das Cartas:
    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite o número da população: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos1);

    // Exibição dos Dados das Cartas:
    printf("\n=== Dados da Carta ===\n");
    printf("Estado: %s \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos turísticos: %d \n", Pontos1);

    
      // Carta 2
      char Estado2[50];
      char Codigo2[50];
      char Cidade2[50];
      int Populacao2;
      float Area2;
      float PIB2;
      int Pontos2;
  
      // Cadastro das Cartas:
      printf("Digite o nome do Estado: \n");
      scanf("%s", Estado2);
  
      printf("Digite o código da carta: \n");
      scanf("%s", Codigo2);
  
      printf("Digite o nome da cidade: \n");
      scanf("%s", Cidade2);
  
      printf("Digite o número da população: \n");
      scanf("%d", &Populacao2);
  
      printf("Digite a área em km²: \n");
      scanf("%f", &Area2);
  
      printf("Digite o PIB: \n");
      scanf("%f", &PIB2);
  
      printf("Digite o número de pontos turísticos: \n");
      scanf("%d", &Pontos2);
  
      // Exibição dos Dados das Cartas:
      printf("\n=== Dados da Carta ===\n");
      printf("Estado: %s \n", Estado2);
      printf("Código: %s \n", Codigo2);
      printf("Cidade: %s \n", Cidade2);
      printf("População: %d \n", Populacao2);
      printf("Área: %.2f km²\n", Area2);
      printf("PIB: %.2f \n", PIB2);
      printf("Pontos turísticos: %d \n", Pontos2);

    return 0;
}



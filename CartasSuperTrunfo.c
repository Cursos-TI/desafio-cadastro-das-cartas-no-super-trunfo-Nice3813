#include <stdio.h>


int main() {
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    char Estado [50];
    char Código [50];
    char Cidade [50];
    int População;
    float Área;
    float PIB;
    int Pontos;

   // Cadastro das Cartas:
      printf("digite o nome do Estado: \n");
      scanf("%s", &Estado);

      printf("digite o codigo da carta: \n");
      scanf("%s", &Código);

      printf("digite o nome da cidade: \n");
      scanf("%s", &Cidade);

      printf("digite o número da populacao: \n");
      scanf("%d", &População);

      printf("digite a area em km: \n");
      scanf("%f", &Área);

      printf("digite o PIB; \n");
      scanf("%f", &PIB);

      printf("digite o numero de pontos turisticos: \n");
      scanf("%d", &Pontos);

    // Exibição dos Dados das Cartas:
      printf("Estado: %s \n");
      printf("Código: %s \n");
      printf("Cidade: %s \n");
      printf("População: %d \n");
      printf("Área: %f \n");
      printf("PIB: %f \n");
      printf("Pontos: %d \n");



     return 0;
    }


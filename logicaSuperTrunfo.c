#include <stdio.h>

int main() {
  // Definição das variáveis para a carta 1
  char estado1 = 'A';
  int cidade1 = 1;
  int populacao1 = 132250, pontos_turisticos1 = 10;
  float area1 = 1200.1, pib1 = 45.75;

  // Definição das variáveis para a carta 2
  char estado2 = 'B';
  int cidade2 = 2;
  int populacao2 = 567890, pontos_turisticos2 = 18;
  float area2 = 1200.5, pib2 = 22.32;

  // Cadastro da carta 1
  printf("Cadastro da Carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Cidade (1-4): ");
  scanf("%d", &cidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (km²): ");
  scanf("%f", &area1);
  printf("PIB (em milhões): ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Cadastro da carta 2
  printf("\nCadastro da Carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Cidade (1-4): ");
  scanf("%d", &cidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB (em milhões): ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos2);

 // Comparação de Cartas:
  char estadoVencedor;
  int cidadeVencedora;
  
 if (populacao1 > populacao2) {
    estadoVencedor = estado1;
    cidadeVencedora = cidade1;
} else {
    estadoVencedor = estado2;
    cidadeVencedora = cidade2;
}

  // Exibição dos Resultados:
 printf("A cidade vencedora é: %c%02d\n", estadoVencedor, cidadeVencedora);

    return 0;
}


#include <stdio.h>

int main()
{

  int numeroPopulacao1, numeroPontosTuristicos1;
  float area1, PIB1;
  char estado1, nomeCidade1[50], codigo1[4];

  int numeroPopulacao2, numeroPontosTuristicos2;
  float area2, PIB2;
  char estado2, nomeCidade2[50], codigo2[4];

  printf("Digite os dados da primeira carta:\n");

  printf("Digite o estado: (Uma letra de 'A' a 'H'): \n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nomeCidade1);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &numeroPopulacao1);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area1);

  printf("Digite o Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numeroPontosTuristicos1);

  printf("\n");

  printf("Digite os dados da segunda carta:\n");

  printf("Digite o estado: (Uma letra de 'A' a 'H'): \n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nomeCidade2);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &numeroPopulacao2);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numeroPontosTuristicos2);

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d \n", numeroPopulacao1);
  printf("Área: %.2f \n", area1);
  printf("PIB: %.2f \n", PIB1);
  printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicos1);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d \n", numeroPopulacao2);
  printf("Área: %.2f \n", area2);
  printf("PIB: %.2f \n", PIB2);
  printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicos2);

  return 0;
}
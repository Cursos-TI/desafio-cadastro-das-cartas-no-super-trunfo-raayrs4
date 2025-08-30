#include <stdio.h>

float calcularDensidadePopulacional(unsigned long int numeroPopulacao, float area)
{
  return (float)numeroPopulacao / area;
}

float calcularPIBPerCapita(float PIB, unsigned long int numeroPopulacao)
{
  return PIB / (float)numeroPopulacao;
}

float calcularSuperPoder(unsigned long int numeroPopulacao, float area, float PIB, int numeroPontosTuristicos, float PIBPerCapita, float densidadePopulacional)
{
  return (float)numeroPopulacao + area + PIB + (float)numeroPontosTuristicos + PIBPerCapita + (1.0f / densidadePopulacional);
};

/*
Função para comparar cada atributo:

O parâmetro menorVence é uma flag (um valor que pode ser 0 ou 1) que diz para a função quem deve vencer:

Se menorVence == 1 → significa que vence quem tiver o menor valor (exemplo: densidade populacional, onde quanto menor, melhor).

Se menorVence == 0 → significa que vence quem tiver o maior valor (exemplo: população, área, PIB etc.).*/
void compararAtributo(char *atributo, float valor1, float valor2, int menorVence)
{
  printf("%s: ", atributo);
  if (valor1 == valor2)
  {
    printf("Empate (%.2f = %.2f)\n", valor1, valor2);
  }
  else if ((menorVence && valor1 < valor2) || (!menorVence && valor1 > valor2))
  {
    printf("Carta 1 vence (%.2f vs %.2f)\n", valor1, valor2);
  }
  else
  {
    printf("Carta 2 vence (%.2f vs %.2f)\n", valor1, valor2);
  }
}

int main()
{

  int numeroPontosTuristicos1;
  unsigned long int numeroPopulacao1;
  float area1, PIB1;
  char estado1, nomeCidade1[50], codigo1[4];

  int numeroPontosTuristicos2;
  unsigned long int numeroPopulacao2;
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
  scanf("%lu", &numeroPopulacao1);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area1);

  printf("Digite o Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numeroPontosTuristicos1);

  float densidadePopulacional1 = calcularDensidadePopulacional(numeroPopulacao1, area1);
  float PIBPerCapita1 = calcularPIBPerCapita(PIB1, numeroPopulacao1);
  float superPoder1 = calcularSuperPoder(numeroPopulacao1, area1, PIB1, numeroPontosTuristicos1, PIBPerCapita1, densidadePopulacional1);

  printf("\n");

  printf("Digite os dados da segunda carta:\n");

  printf("Digite o estado: (Uma letra de 'A' a 'H'): \n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nomeCidade2);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%lu", &numeroPopulacao2);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numeroPontosTuristicos2);

  float densidadePopulacional2 = calcularDensidadePopulacional(numeroPopulacao2, area2);
  float PIBPerCapita2 = calcularPIBPerCapita(PIB2, numeroPopulacao2);
  float superPoder2 = calcularSuperPoder(numeroPopulacao2, area2, PIB2, numeroPontosTuristicos2, PIBPerCapita2, densidadePopulacional2);
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu \n", numeroPopulacao1);
  printf("Área: %.2f \n", area1);
  printf("PIB: %.2f \n", PIB1);
  printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicos1);
  printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional1);
  printf("PIB per capita: %.2f\n", PIBPerCapita1);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu \n", numeroPopulacao2);
  printf("Área: %.2f \n", area2);
  printf("PIB: %.2f \n", PIB2);
  printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional2);
  printf("PIB per capita: %.2f\n", PIBPerCapita2);

  printf("\n===== Comparação das Cartas =====\n");

  compararAtributo("População", (float)numeroPopulacao1, (float)numeroPopulacao2, 0);
  compararAtributo("Área", area1, area2, 0);
  compararAtributo("PIB", PIB1, PIB2, 0);
  compararAtributo("Pontos Turísticos", (float)numeroPontosTuristicos1, (float)numeroPontosTuristicos2, 0);
  compararAtributo("PIB per capita", PIBPerCapita1, PIBPerCapita2, 0);
  compararAtributo("Densidade populacional", densidadePopulacional1, densidadePopulacional2, 1);
  compararAtributo("Super Poder", superPoder1, superPoder2, 0);

  return 0;
}

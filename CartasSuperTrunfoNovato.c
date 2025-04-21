#include <stdio.h>

// Desafio Super Trunfo - Estados
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main()
{
  // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
  // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
  // População: O número de habitantes da cidade. Tipo: int
  // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
  // PIB: O Produto Interno Bruto da cidade. Tipo: float
  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

  // Carta 1

  char estado1[50];
  char codigo1[50];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  printf("Estado: Uma letra de 'A' a 'H': \n");
  scanf("%s", &estado1);

  printf("Código da Carta: A letra do estado seguida de um número de 01 a 04: \n");
  scanf("%s", &codigo1);

  printf("Nome da Cidade: \n");
  scanf("%s", &cidade1);

  printf("População: O número de habitantes da cidade: \n");
  scanf("%d", &populacao1);

  printf("Área (em km²): \n");
  scanf("%f", &area1);

  printf("PIB: O Produto Interno Bruto da cidade: \n");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &pontosTuristicos1);

  // Carta 2

  char estado2[50];
  char codigo2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  printf("Estado: Uma letra de 'A' a 'H': \n");
  scanf("%s", &estado2);

  printf("Código da Carta: A letra do estado seguida de um número de 01 a 04: \n");
  scanf("%s", &codigo2);

  printf("Nome da Cidade: \n");
  scanf("%s", &cidade2);

  printf("População: O número de habitantes da cidade: \n");
  scanf("%d", &populacao2);

  printf("Área (em km²): \n");
  scanf("%f", &area2);

  printf("PIB: O Produto Interno Bruto da cidade: \n");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &pontosTuristicos2);

  // Inserção dados da Carta 1

  printf("Estado %s \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %f \n", area1);
  printf("PIB: %f \n", pib1);
  printf("Pontos Turísticos: %d \n", pontosTuristicos1);

  // Inserção dados da Carta 2

  printf("Estado %s \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %f \n", area2);
  printf("PIB: %f \n", pib2);
  printf("Pontos Turísticos: %d \n", pontosTuristicos2);

  return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado1, estado2; //Letra inicial do estado
  int codigo1, codigo2; //código da carta
  char cidade1 [30], cidade2 [30]; //nome da cidade
  int hab1, hab2; //número da habitantes da cidade
  float area1, area2; //área da cidade em km²
  float pib1, pib2; //pib da cidade
  int pontos1, pontos2; //número de pontos turisticos
  float densidade1, densidade2; //densidade populacional
  float ppc1, ppc2; // pib per capita

  printf("-- SUPER TRUNFO --\nCadastro de Cartas:\nCarta 01\n\n");  // mensagem de entrada do jogo

  printf("Digite a primeira letra do Estado:\n"); 
  scanf("%s", &estado1);

  printf("Digite o código da Carta:\nOBs: O código vai 01 a 04.\n"); 
  scanf("%d", &codigo1);

  printf("Digite o nome da cidade:\n"); 
  scanf("%s", &cidade1);

  printf("Digite o número de habitantes:\n"); 
  scanf("%d", &hab1);

  printf("Digite a área da cidade (em km²):\n"); 
  scanf("%f", &area1);

  printf("Digite o pib da cidade;\n"); 
  scanf("%f", &pib1);

  printf("Números de ponto turísticos;\n"); 
  scanf("%d", &pontos1);


  








return 0;
} 

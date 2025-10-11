#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

// Cartas 1
char estado[30];
char codCarta[3];
char nomeCidade[30];
float populacao;
float area;
float pib;
int numPontosTuristicos;

// Cartas 2
char estado2[30];
char codCarta2[3];
char nomeCidade2[30];
float populacao2;
float area2;
float pib2;
int numPontosTuristicos2;

  // Área para entrada de dados

//Estado
printf("Digite seu primeiro Estado:\n ");
scanf("%s", estado);

printf("Digite seu segudo Estado:\n ");
scanf("%s", estado2);

// Codigo
printf("Digite codigo da sua primeira Carta:\n ");
scanf("%s", codCarta);

printf("Digite codigo da sua segunda Carta: \n");
scanf("%s", codCarta2);

//Cidade

printf("Digite o nome da Cidade da primeira carta:\n ");
scanf("%s", nomeCidade);

printf("Digite o nome da Cidade da segunda carta:\n ");
scanf("%s", nomeCidade2);

// População

printf("Digite o tamanho da populacao da primeira carta:\n ");
scanf("%f", &populacao);

printf("Digite o tamanho da populacao da segunda carta:\n ");
scanf("%f", &populacao2);

// Area
printf("Digite tamanho da area da primeira carta:\n ");
scanf("%f", &area);

printf("Digite tamanho da area da segunda carta:\n ");
scanf("%f", &area2);

// PIB
printf("Digite o PIB da primeira carta:\n ");
scanf("%f", &pib);

printf("Digite o PIB da segunda carta:\n ");
scanf("%f", &pib2);

//Numero Pontos Artisticos

printf("Digite o numero de pontos turisticos da carta 1:\n ");
scanf("%d", &numPontosTuristicos);

printf("Digite o numero de pontos turisticos da carta 2:\n ");
scanf("%d", &numPontosTuristicos2);

  // Área para exibição dos dados da cidade
printf("------------------------------------------- \n");
printf("Carta1 \n");
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codCarta);
printf("Nome da Cidade: %s\n", nomeCidade);
printf("Populacao: %f\n", populacao);
printf("Area: %f\n", area);
printf("PIB em Bilhoes: %f\n", pib);
printf("Numero de Ponto Turisticos: %d \n", numPontosTuristicos);
printf("------------------------------------------- \n");

printf("------------------------------------------- \n");
printf("Carta2 \n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codCarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %f\n", populacao2);
printf("Area: %f\n", area2);
printf("PIB em Bilhoes: %f\n", pib2); // Em Bilhões
printf("Numero de Ponto Turisticos: %d\n", numPontosTuristicos2);
printf("------------------------------------------- \n");


} 

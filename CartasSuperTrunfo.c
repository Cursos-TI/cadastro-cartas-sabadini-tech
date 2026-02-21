#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Desafio Super Trunfo - Países\n");
    printf("novo commit\n");

     
  // Área para definição das variáveis para armazenar as propriedades das cidades
     int populaçao1;
     int pontosturisticos1;
     float area1;
     float pib1;
     char estado1;
     char codigo1 [4];
     char cidade1 [50];

  // Área para entrada de dados
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado: A");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("xs", &cidade1);

    printf("População: \n");
    scanf("%f", &populaçao1);

    printf("Área: \n");
    scanf("%f", &area1);
    
   printf("PIB: \n");
   scanf("%f", &pib1);
    
   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &pontosturisticos1);
    
   printf("\n"); // Linha em branco para separar as cartas


  // Área para exibição dos dados da cidade

  printf("=== DADOS DAS CARTAS CADASTRADAS ===\n\n");

   printf("Carta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %d\n", populaçao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

return 0;
} 

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Desafio Super Trunfo - Países\n");
    printf("novo commit\n");

     
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variaveis primeira carta
     char estado1;            // Armazena a letra do estado (A-H)
     char codigo1[4];         // Array de caracteres para o código
     char cidade1[40];        // Array para o nome da cidade (suporta nomes longos)
     int populacao1;          // Número de habitantes
     float area1;             // Área em km²
     float pib1;              // PIB em bilhões de reais
     int pontosturisticos1;   // Quantidade de pontos turísticos

  // Variaveis segunda carta
     char estado2;
     char codigo2[4];
     char cidade2[40];
     int populacao2;
     float area2;
     float pib2;
     int pontosturisticos2;

     //Utilizamos printf() para exibir mensagens ao usuário e scanf() para
     //capturar os dados digitados. 

  // Área para entrada de dados
    printf("= CADASTRO DA CARTA 1 =\n");

    printf("Estado: \n");
    scanf(" %c", &estado1);         // O espaço antes de %c ignora whitespace residual

    printf("Código: \n");
    scanf("%s", codigo1);          // %s lê uma string

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);         // %s lê uma string

    printf("População: \n");
    scanf("%f", &populacao1);      // %d para inteiro

    printf("Área: \n");
    scanf("%f", &area1);           // %f para float
    
    printf("PIB: \n");
    scanf("%f", &pib1);           // %f para float
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1); // %d para inteiro
    
    printf("\n"); // Linha em branco para separar as cartas

    printf("= CADASTRO DA CARTA 2=\n");

    printf("Estado: \n");
    scanf(" %c", &estado2);
    
    printf("Código da Carta: \n");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade2);
    
    printf("População: \n");
    scanf("%d", &populacao2);
    
    printf("Área: \n");
    scanf("%f", &area2);
    
    printf("PIB: \n");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade

    printf("= DADOS DAS CARTAS CADASTRADAS =\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);          // Exibe o caractere do estado
    printf("Código: %s\n", codigo1);          // Exibe a string do código
    printf("Nome da Cidade: %s\n", cidade1);  // Exibe o nome da cidade
    printf("População: %d\n", populacao1);     // Exibe a população
    printf("Área: %.2f km²\n", area1);         // Exibe a Area
    printf("PIB: %.2f bilhões de reais\n", pib1);   // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1); // Exibe Pontos turísticos

    printf("\n"); // Linha em branco entre as cartas

     printf("Carta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

return 0;
} 

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
  
   char estado= 'B';
   char carta[20]= 'A01';
   char cidade[20]= 'Brasilia';
   int populacao= 123456;
   float area_em_km= 1521.11;
   float pib=699.28;
   int numero_turis=50; 
  
  // Área para entrada de dados
  
       printf("Escolha uma letra de A ao H da carta 1:  \n");
       scanf("%c" , &estado);
       printf("Carta 1 Estado: %c\n", estado);
  
       printf("Digite o código da carta 1: \n");
       scanf("%c" , &carta);
       printf("Carta 1 Código: %c\n", carta);
  
       printf("Digite o nome da cidade da carta 1: \n");
       scanf("%c" , &cidade);
       printf("Carta 1 Cidade: %c\n" cidade);
  
       printf("Digite a quantidade populacional da carta 1: \n");
       scanf("%i" , &populacao); 
       printf("Carta 1 População: %i\n", populacao);
  
       //printf("Digite o tamanho da área em km da carta 1: \n");
       //printf("Digite o valor do PIB da carta 1: \n");
       //printf("Digite a quantidade de pontos turísticos da carta 1: \n");  //Entrada de dados da primeira carta 
  

  // Área para exibição dos dados da cidade
 
          

return 0;
} 

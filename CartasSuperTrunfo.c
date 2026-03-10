#include <stdio.h>

int main() {
     
     // Definição das variáveis
    char estado='A';
    char carta[20]="A01";
    char cidade[20]="Brasilia";
    int populacao=1202554;
    float area_em_km=1521.11;
    float pib=699.28;
    int numero_turis=50;

    // --- ENTRADA DE DADOS ---
    printf("ENTRADA DE DADOS DA CARTA 1");
    printf("Escolha uma letra de A ao H para o Estado: \n");
    // O espaço antes de %c é vital aqui!
    scanf(" %c", &estado); 
    
    printf("Digite o codigo da carta (ex: A01): \n");
    // %s para texto e SEM o &
    scanf("%s", carta); 

    printf("Digite o nome da cidade: \n");
    // %s para texto e SEM o &
    scanf("%s", cidade); 

    printf("Digite a população: \n");
    scanf("%d", &populacao); 

    printf("Digite a área em Km2: \n");
    scanf("%f", &area_em_km);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_turis);

    printf("ENTRADA DE DADOS DA CARTA 2\n");
    printf("Escolha uma letra de A ao H para o Estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", carta); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade); 

    printf("Digite a população: \n");
    scanf("%d", &populacao); 

    printf("Digite a área em Km2: \n");
    scanf("%f", &area_em_km);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_turis);



    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em KM2: %f\n", area_em_km);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", numero_turis);

    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em KM2: %f\n", area_em_km);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", numero_turis);


    return 0;
}

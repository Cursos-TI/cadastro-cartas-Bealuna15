#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
     
     // Definição das variáveis
    //CARTA 1  
    char estado1='A',carta1[20]="A01",
        cidade1[20]="Brasilia";
        
        unsigned long int populacao1=1202554; /*passou de int para unsigned
        long int para que acomode números maiores*/
        
        int  numero_turis1=50;
        float area_em_km1=1521.11, pib1=699.28, densidade1,
          pib_per_capita1, SuperPoder1;

    //CARTA 2
     char estado2='B',carta2[20]="B01",
        cidade2[20]="Goias";
        
        unsigned long int populacao2=1202558;
        
        int numero_turis2=5;
        float area_em_km2=500, pib2=699.27, densidade2,
          pib_per_capita2, SuperPoder2; /*Soma de população, área, PIB,
                            PIB per capta e densidade populacional 
                            invertida para comparação e número de pontos 
                            turísticos.*/



    // --- ENTRADA DE DADOS ---
    printf("ENTRADA DE DADOS DA CARTA 1\n");
    printf("Escolha uma letra de A ao H para o Estado: \n");
    // O espaço antes de %c é vital aqui!
    scanf(" %c", &estado1); 
    
    printf("Digite o codigo da carta (ex: A01): \n");
    // %s para texto e SEM o &
    scanf("%s", carta1); 

    printf("Digite o nome da cidade: \n");
    // %s para texto e SEM o &
    scanf("%s", cidade1); 

    printf("Digite a população: \n");
    scanf("%lu", &populacao1); 

    printf("Digite a área em Km2: \n");
    scanf("%f", &area_em_km1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_turis1);

        /*SEGUNDA ETAPA DO DESAFIO 
        calculo da densidade populacional*/
     densidade1= (float) populacao1 / area_em_km1;

        //calculo do PIB per capita
    pib_per_capita1=  pib1 * 1000000000.0 / (float) populacao1;    

    // CALCULO DO SUPER PODER (soma de tudo com densidade invertida)
    
    SuperPoder1 = (float) populacao1 + area_em_km1 + pib1 + numero_turis1 +
                    pib_per_capita1 + (1.0f / densidade1);
     
    


    //****** DADOS DA CARTA 2 **********

    printf("ENTRADA DE DADOS DA CARTA 2\n");
    printf("Escolha uma letra de A ao H para o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", carta2); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2); 

    printf("Digite a população: \n");
    scanf("%lu", &populacao2); 

    printf("Digite a área em Km2: \n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_turis2);
    
    //CALCULO DA DENSIDADE POPULACIONAL DA CARTA 2 
    densidade2= (float) populacao2 / area_em_km2;

    //CALCULO DO PIB PER CAPITA
    pib_per_capita2= pib2 * 1000000000.0 /(float) populacao2 ;

    //CALCULO DO SUPER PODER DA CARTA 2 (soma de tudo com densidade invertida)

    SuperPoder2 = (float) populacao2 + area_em_km2 + pib2 + numero_turis2 +
                    pib_per_capita2 + (1.0f / densidade2);

    // --- EXIBIÇÃO DOS DADOS ---

    //SAÍDA DA PRIMEIRA CARTA

    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em KM2: %f\n", area_em_km1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", numero_turis1);
   
    //saída dos dados da segunda etapa do desafio 
    //CARTA 1
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade1);
    printf("PIB PER CAPITA: %f\n", pib_per_capita1);



    //SAÍDA DA SEGUNDA CARTA
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em KM2: %f\n", area_em_km2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", numero_turis2);
    
    //SAIDA DE DADOS DA SEGUNDA PARTE DO DESAFIO
    //CARTA 2 
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade2);
    printf("PIB PER CAPITA: %f\n", pib_per_capita2);

    //**********COMPARAÇÃO DE CARTAS**********

    printf ("\n -- RESULTADO DAS COMPARAÇÕES --\n");

    // RETORNARÁ 1 PARA VERDADEIRO E 0 PARA FALSO 
    printf("População: CARTA 1 VENCEU? (%d)\n", populacao1 > populacao2);
    printf("Área em KM2: CARTA 1 VENCEU? (%d)\n", area_em_km1 > area_em_km2);
    printf("PIB: CARTA 1 VENCEU? (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: CARTA 1 VENCEU? (%d)\n", numero_turis1 > numero_turis2);
    printf("PIB PER CAPITA: CARTA 1 VENCEU? (%d)\n", pib_per_capita1 > pib_per_capita2);    

    //Regra especial: A densidade MENOR vence
    printf ("Densidade Populacional: CARTA 1 VENCEU? (%d)\n", densidade1 < densidade2);
    
    printf ("Super Poder: CARTA 1 VENCEU? (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}

#include <stdio.h>
int main(){
    // Variáveis 
    char nome_da_cidade[20];
    unsigned long int populacao1, populacao2;
    int codigo_de_carta;
    char estado;
    float AreaKm1, DensidadePopulacional1, PIBpercapita1;
    float AreaKm2, DensidadePopulacional2, PIBpercapita2;
    float pib1, pib2;
    int numeros_pontos_turisticos1, numeros_pontos_turisticos2;
    float SuperPoder1;
    float SuperPoder2;
    
    // ------------------------------------------------------------------
    // Início das entradas e saídas da carta 1
    
    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm1);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos1);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    DensidadePopulacional1 = populacao1 / AreaKm1;
    PIBpercapita1 = pib1 / populacao1;
    SuperPoder1 = (populacao1 + AreaKm1 + pib1 + numeros_pontos_turisticos1 + (1 / DensidadePopulacional1) + PIBpercapita1);
    
    // Saída carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.3f km²\n", AreaKm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos1);
    printf("Densidade populacional %.2f habitantes/km²\n", DensidadePopulacional1);
    printf("PIB per capita: %f mil reais\n", PIBpercapita1);
    printf("O super poder dessa carta é %.2f\n", SuperPoder1);
    
    // ------------------------------------------------------------------
    // Início das entradas e saídas da carta 2
    
    printf("Segunda carta\n");

    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm2);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos2);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    DensidadePopulacional2 = populacao2 / AreaKm2;
    PIBpercapita2 = pib2 / populacao2;
    SuperPoder2 = (populacao2 + AreaKm2 + pib2 + numeros_pontos_turisticos2 + (1 / DensidadePopulacional2) + PIBpercapita2);
    
    // Saída carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.3f km²\n", AreaKm2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos2);
    printf("Densidade populacional %.2f habitantes/km²\n", DensidadePopulacional2);
    printf("PIB per capita: %f mil reais\n", PIBpercapita2);
    printf("O super poder dessa carta é %.2f\n", SuperPoder2);
    
    // ------------------------------------------------------------------
    // comparações
    int comparapopulacao = populacao1 > populacao2;
    int comparapib = pib1 > pib2;
    int comparapontos = numeros_pontos_turisticos1 > numeros_pontos_turisticos2;
    int comparadensidade = DensidadePopulacional1 < DensidadePopulacional2;
    int comparapibpercapita = PIBpercapita1 > PIBpercapita2;
    int comparasuperpoder = SuperPoder1 > SuperPoder2;
    
    printf("Comparações entre as cartas: (Caso o resultado do atributo for '1' a carta 1 venceu caso seja '0' a carta 2 venceu).\n");

    printf("população: %d\n", comparapopulacao);
    printf("PIB: %d\n", comparapib);    
    printf("número de pontos turísticos: %d\n", comparapontos);
    printf("densidade populacional: %d\n", comparadensidade);
    printf("PIB per capita: %d\n", comparapibpercapita);
    printf("super poder: %d\n", comparasuperpoder);
    printf("Fim do programa!\n");
    return 0;
}
#include <stdio.h>
int main(){
    // Variáveis 
    char nome_da_cidade[20];
    unsigned long int populacao1, populacao2;
    int codigo_de_carta;
    char estado;
    float AreaKm1, DensidadePopulacional1, PIBpercapita1;
    float AreaKm2, DensidadePopulacional2, PIBpercapita2;
    float pib1, pib2;
    int numeros_pontos_turisticos1, numeros_pontos_turisticos2;
    float SuperPoder1;
    float SuperPoder2;
    
    // ------------------------------------------------------------------
    // Início das entradas e saídas da carta 1
    
    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm1);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos1);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    DensidadePopulacional1 = populacao1 / AreaKm1;
    PIBpercapita1 = pib1 / populacao1;
    SuperPoder1 = (populacao1 + AreaKm1 + pib1 + numeros_pontos_turisticos1 + (1 / DensidadePopulacional1) + PIBpercapita1);
    
    // Saída carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.3f km²\n", AreaKm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos1);
    printf("Densidade populacional %.2f habitantes/km²\n", DensidadePopulacional1);
    printf("PIB per capita: %f mil reais\n", PIBpercapita1);
    printf("O super poder dessa carta é %.2f\n", SuperPoder1);
    
    // ------------------------------------------------------------------
    // Início das entradas e saídas da carta 2
    
    printf("Segunda carta\n");

    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm2);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos2);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    DensidadePopulacional2 = populacao2 / AreaKm2;
    PIBpercapita2 = pib2 / populacao2;
    SuperPoder2 = (populacao2 + AreaKm2 + pib2 + numeros_pontos_turisticos2 + (1 / DensidadePopulacional2) + PIBpercapita2);
    
    // Saída carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.3f km²\n", AreaKm2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos2);
    printf("Densidade populacional %.2f habitantes/km²\n", DensidadePopulacional2);
    printf("PIB per capita: %f mil reais\n", PIBpercapita2);
    printf("O super poder dessa carta é %.2f\n", SuperPoder2);
    
    // ------------------------------------------------------------------
    // comparações
    int comparapopulacao = populacao1 > populacao2;
    int comparapib = pib1 > pib2;
    int comparapontos = numeros_pontos_turisticos1 > numeros_pontos_turisticos2;
    int comparadensidade = DensidadePopulacional1 < DensidadePopulacional2;
    int comparapibpercapita = PIBpercapita1 > PIBpercapita2;
    int comparasuperpoder = SuperPoder1 > SuperPoder2;
    
    printf("Comparações entre as cartas: (Caso o resultado do atributo for '1' a carta 1 venceu caso seja '0' a carta 2 venceu).\n");

    printf("população: %d\n", comparapopulacao);
    printf("PIB: %d\n", comparapib);    
    printf("número de pontos turísticos: %d\n", comparapontos);
    printf("densidade populacional: %d\n", comparadensidade);
    printf("PIB per capita: %d\n", comparapibpercapita);
    printf("super poder: %d\n", comparasuperpoder);
    printf("Fim do programa!\n");
    return 0;
}

#include <stdio.h>
int main(){
    // Variáveis 
    char nome_da_cidade[20];
    int populacao;
    int codigo_de_carta;
    char estado;
    float AreaKm;
    int pib;
    int numeros_pontos_turisticos;
    // Fim das variáveis declaradas
    // ------------------------------------------------------------------
    // Início das entradas e saídas 
    
    /* Cada trecho abaixo corresponde a uma entrada e saída,
    funcionando para exibir instruções e receber esses dados
    */    
    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%d", &populacao);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%d", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    // Agora temos a saída de todos os dados da carta número 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.3f km²\n", AreaKm);
    printf("PIB: %d bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos);
    printf("Densidade populacional %.2f habitantes/km²\n", populacao/AreaKm);
    printf("PIB per capita: %.2f mil reais\n", pib/populacao);
    
    // agora a mesma coisa para a carta 2 (basicamente uim ctrl c e v )

    printf("Segunda carta\n");

    printf("Digite a sigla do estado (apenas uma letra): \n");
    scanf(" %c", &estado);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a quantidade total da população (em números inteiros): \n");
    scanf("%d", &populacao);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &AreaKm);

    printf("Digite o PIB do estado (em bilhões de reais): \n");
    scanf("%d", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %i", &numeros_pontos_turisticos);

    printf("Digite um número de 1 a 4: \n");
    scanf(" %i", &codigo_de_carta);

    // Agora temos a saída de todos os dados da carta número 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%d\n", estado, codigo_de_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.3f km²\n", AreaKm);
    printf("PIB: %d bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %i\n", numeros_pontos_turisticos);
    printf("Densidade populacional %.2f habitantes/km²\n", populacao/AreaKm);
    printf("PIB per capita: %.2f mil reais\n", pib/populacao);
    printf("Fim do programa!\n");
    return 0;

}

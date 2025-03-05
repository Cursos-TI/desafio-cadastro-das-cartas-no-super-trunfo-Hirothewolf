#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Desafio Cartas Super Trunfo
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Variáveis para a Carta 1
    char estado1;              // Estado (A-H)
    char codigo1[10];          // Código da carta (ex: "A01")
    char cidade1[50];          // Nome da cidade
    unsigned long populacao1;  // População
    float area1;               // Área em km²
    float pib1;                // PIB em bilhões
    int pontos_turisticos1;    // Número de pontos turísticos
    float densidade1;          // Densidade populacional (população/área)
    float pibPerCapita1;       // PIB per capita/população)

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pibPerCapita2;

    // Cadastro da Carta 1
    printf("** Cadastro da Carta 1 **\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);

    // Lê o nome da cidade (com espaços) usando o formato %[^\n]
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (km^2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo dos atributos derivados para a Carta 1
    densidade1 = populacao1 / area1;                 // Densidade = população / área
    pibPerCapita1 = (pib1 * 1e9) / populacao1;         // PIB per capita

    // Cadastro da Carta 2
    printf("\n** Cadastro da Carta 2 **\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (km^2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos atributos derivados para a Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Exibição dos dados da Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
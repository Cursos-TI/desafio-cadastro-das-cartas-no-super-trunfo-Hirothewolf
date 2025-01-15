#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    /*
    Adição de variáveis para armazenar os atributos da cidade
    atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.   
    */
    char Estado;
    char codigo_carta[10];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib; 
    int pontos_turisticos;


    //Solicita ao usuário cadastre as cidades com base nas informações abaixo

    printf("Digite a Letra do estado: \n");
    scanf("%c", &Estado);
    getchar();

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao);

    printf("Digite o valor da area(em km2): \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    //Exibe os valores inseridos pelo usuário

    printf("Estado: %c\n", Estado);
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

// Fim do código
    return 0;
}

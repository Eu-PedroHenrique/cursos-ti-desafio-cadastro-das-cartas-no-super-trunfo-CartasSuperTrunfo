#include <stdio.h>

int main(){
    //informações da carta 01 e 02
    char estado1;
    char estado2;
    char codigo1[50];
    char codigo2[50];
    char nomeDaCidade1[50];
    char nomeDaCidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    int pontosTuristicos1;
    int pontosTuristicos2;

    // Coleta de informações da primeira carta
    printf("Informacoes da primeira carta\n");
    printf("Escreva o estado: ");
    scanf("%c", &estado1);


    printf("Escreva o código da cidade: ");
    scanf("%s", codigo1);

    // Se utilizar a underline ao invés de espaço, o computador consegue fazer a leitura corretamente
    printf("Escreva o nome da cidade: ");
    scanf("%s", nomeDaCidade1);

    printf("Escreva a população da cidade: ");
    scanf("%d", &populacao1);

    // É importante escrever utilizando o ponto ao invés de virgula para não bugar o código
    printf("Escreva a área da cidade: ");
    scanf("%f", &area1);

    // É importante escrever utilizando o ponto ao invés de virgula para não bugar o código
    printf("Escreva o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Escreva a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Coleta de informações da primeira carta
    printf("\nInformacoes da segunda carta\n");
    
    printf("Escreva o estado: ");
    scanf(" %c", &estado2);

    printf("Escreva o código da cidade: ");
    scanf("%s", codigo2);

    // Se utilizar a underline ao invés de espaço, o computador consegue fazer a leitura corretamente
    printf("Escreva o nome da cidade: ");
    scanf("%s", nomeDaCidade2);

    printf("Escreva a população da cidade: ");
    scanf("%d", &populacao2);

    // É importante escrever utilizando o ponto ao invés de virgula para não bugar o código
    printf("Escreva a área da cidade: ");
    scanf("%f", &area2);

    // É importante escrever utilizando o ponto ao invés de virgula para não bugar o código
    printf("Escreva o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Escreva a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);


    // Exibição dos resultados finais
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

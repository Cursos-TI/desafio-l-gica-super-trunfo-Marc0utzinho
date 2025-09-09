#include <stdio.h>

int main(){
    char estado1[2], cidade1[30], estado2[2], cidade2[30], codigo1[4], codigo2[4];
    int populacao1, ptTuristicos1, populacao2, ptTuristicos2;
    float pib1, pib2, area1, area2;

    printf("Super Trunfo - Cidades\n");

    //coleta de dados da carta 1
    printf("Carta 1\nInforme a letra do estado da cidade: ");
    scanf("%s", &estado1);
    printf("Informe o código da cidade: ");
    scanf("%s", &codigo1);
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &ptTuristicos1);
    
    //coleta de dados da carta 2
    printf("\nCarta 2\nInforme a letra do estado da cidade: ");
    scanf("%s", &estado2);
    printf("Informe o código da cidade: ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &ptTuristicos2);
    
    //exibição das informações cadastradas da carta 1
    printf("\nCarta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea %.2f km²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, ptTuristicos1);

    //exibição das informações cadastradas da carta 2
    printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea %.2f km²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, ptTuristicos2);
}
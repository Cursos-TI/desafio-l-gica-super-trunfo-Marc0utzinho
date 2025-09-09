#include <stdio.h>

int main() {
    // declarando as variáveis
    char estado1[3], cidade1[30], estado2[3], cidade2[30], codigo1[4], codigo2[4];
    int populacao1, ptTuristicos1, populacao2, ptTuristicos2;
    float pib1, pib2, area1, area2, densidade1, densidade2, pibCapita1, pibCapita2;

    printf("Super Trunfo - Países\n");

    // coleta de dados da carta 1
    printf("\nCarta 1\nInforme a sigla do estado da cidade: ");
    scanf("%s", estado1);

    printf("Informe o código da cidade: ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &ptTuristicos1);

    // coleta de dados da carta 2
    printf("\nCarta 2\nInforme a sigla do estado da cidade: ");
    scanf("%s", estado2);

    printf("Informe o código da cidade: ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &ptTuristicos2);

    // cálculo da densidade populacional e pib per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibCapita1 = pib1 / populacao1;
    pibCapita2 = pib2 / populacao2;

    // exibição das informações cadastradas da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ptTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibCapita1);

    // exibição das informações cadastradas da carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibCapita2);


    // determinação da carta vencedora (comparando população)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}

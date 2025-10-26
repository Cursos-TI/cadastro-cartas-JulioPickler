#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estC1, codigoCartaC1[10], nomeCidadeC1[50];
    unsigned long int populacaoC1;
    float areaC1, pibC1;
    int pontosTuristicosC1;

    // Carta 2
    char estC2, codigoCartaC2[10], nomeCidadeC2[50];
    unsigned long int populacaoC2;
    float areaC2, pibC2;
    int pontosTuristicosC2;

    // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estC1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigoCartaC1);

    getchar(); // limpa o \n do buffer
    printf("Nome da cidade: ");
    fgets(nomeCidadeC1, sizeof(nomeCidadeC1), stdin);
    nomeCidadeC1[strcspn(nomeCidadeC1, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacaoC1);

    printf("Área (km²): ");
    scanf("%f", &areaC1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibC1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosC1);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estC2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigoCartaC2);

    getchar();
    printf("Nome da cidade: ");
    fgets(nomeCidadeC2, sizeof(nomeCidadeC2), stdin);
    nomeCidadeC2[strcspn(nomeCidadeC2, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacaoC2);

    printf("Área (km²): ");
    scanf("%f", &areaC2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibC2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosC2);

    // Cálculos derivados
    float densidadeC1 = populacaoC1 / areaC1;
    float densidadeC2 = populacaoC2 / areaC2;

    float pibPerCapitaC1 = (pibC1 * 1e9) / populacaoC1;
    float pibPerCapitaC2 = (pibC2 * 1e9) / populacaoC2;

    float superPoderC1 = populacaoC1 + areaC1 + pibC1 + pontosTuristicosC1 + pibPerCapitaC1 + (1.0 / densidadeC1);
    float superPoderC2 = populacaoC2 + areaC2 + pibC2 + pontosTuristicosC2 + pibPerCapitaC2 + (1.0 / densidadeC2);

    // Exibição das cartas
    printf("\n=========== Cartas Cadastradas ===========\n");

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
        estC1, codigoCartaC1, nomeCidadeC1, populacaoC1, areaC1, pibC1, pontosTuristicosC1, densidadeC1, pibPerCapitaC1, superPoderC1);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
        estC2, codigoCartaC2, nomeCidadeC2, populacaoC2, areaC2, pibC2, pontosTuristicosC2, densidadeC2, pibPerCapitaC2, superPoderC2);

    // Comparações
    printf("\n=========== Comparação de Cartas ===========\n");
    printf("População: Carta 1 venceu (%d)\n", populacaoC1 > populacaoC2);
    printf("Área: Carta 1 venceu (%d)\n", areaC1 > areaC2);
    printf("PIB: Carta 1 venceu (%d)\n", pibC1 > pibC2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicosC1 > pontosTuristicosC2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadeC1 < densidadeC2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapitaC1 > pibPerCapitaC2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderC1 > superPoderC2);

    printf("\n=========== Fim da Batalha ===========\n");

    return 0;
}
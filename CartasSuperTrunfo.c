#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Carta 1
    char estC1;
    char codigoCartaC1[10];
    char nomeCidadeC1[50];
    int populacaoC1;
    float areaC1;
    float pibC1;
    int pontosTuristicosC1;

    // Carta 2
    char estC2;
    char codigoCartaC2[10];
    char nomeCidadeC2[50];
    int populacaoC2;
    float areaC2;
    float pibC2;
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
    nomeCidadeC1[strcspn(nomeCidadeC1, "\n")] = '\0'; // remove \n

    printf("População: ");
    scanf("%d", &populacaoC1);

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

    getchar(); // limpa o \n do buffer
    printf("Nome da cidade: ");
    fgets(nomeCidadeC2, sizeof(nomeCidadeC2), stdin);
    nomeCidadeC2[strcspn(nomeCidadeC2, "\n")] = '\0'; // remove \n

    printf("População: ");
    scanf("%d", &populacaoC2);

    printf("Área (km²): ");
    scanf("%f", &areaC2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibC2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosC2);

    // Exibição
    printf("\n=========== Cartas Cadastradas ===========\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estC1);
    printf("Código: %s\n", codigoCartaC1);
    printf("Nome da Cidade: %s\n", nomeCidadeC1);
    printf("População: %d\n", populacaoC1);
    printf("Área: %.2f km²\n", areaC1);
    printf("PIB: %.2f bilhões de reais\n", pibC1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosC1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estC2);
    printf("Código: %s\n", codigoCartaC2);
    printf("Nome da Cidade: %s\n", nomeCidadeC2);
    printf("População: %d\n", populacaoC2);
    printf("Área: %.2f km²\n", areaC2);
    printf("PIB: %.2f bilhões de reais\n", pibC2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosC2);

    printf("\n=========== Fim do Cadastro ===========\n");

  


return 0;
} 

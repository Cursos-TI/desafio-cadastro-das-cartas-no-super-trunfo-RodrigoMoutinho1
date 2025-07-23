#include <stdio.h>

int main() {
    // Variáveis da carta 01
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Variáveis da carta 02
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Entrada da carta 01
    printf("Cadastro da carta 1:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nomecidade1);

    printf("Informe a populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a area (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB em reais: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Entrada da carta 02
    printf("\nCadastro da carta 2:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nomecidade2);

    printf("Informe a populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a area (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB em reais: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição carta 01
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área em KM²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    // Exibição carta 02
    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}

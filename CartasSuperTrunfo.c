#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main() {
    // Variáveis da carta 01
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    double densidadepopulacional1;
    double pibpercapta1;

    // Variáveis da carta 02
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    double densidadepopulacional2;
    double pibpercapta2;

    // Entrada da carta 01
    printf("Cadastro da carta 1:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    limparBuffer();

    printf("Informe o nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = '\0';

    printf("Informe a populacao: ");
    scanf("%lu", &populacao1);
    limparBuffer();

    printf("Informe a area (em km²): ");
    scanf("%f", &area1);
    limparBuffer();

    printf("Informe o PIB em bilhões de reais (ex: 600.0 para 600 bilhões): ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    limparBuffer();

    // Entrada da carta 02
    printf("\nCadastro da carta 2:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Informe o código da carta (ex: A01): ");
    scanf(" %s", codigo2);
    limparBuffer();

    printf("Informe o nome da cidade: ");
    getchar();
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = '\0';

    printf("Informe a populacao: ");
    scanf("%lu", &populacao2);
    limparBuffer();

    printf("Informe a area (em km²): ");
    scanf("%f", &area2);
    limparBuffer();

    printf("Informe o PIB em bilhões de reais (ex: 600.0 para 600 bilhões): ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    limparBuffer();

    // Cálculo densidade e PIB per capita da carta 1
    densidadepopulacional1 = (area1 > 0) ? (double)populacao1 / area1 : 0.0;
    pibpercapta1 = (populacao1 > 0) ? (pib1 * 1000000000.0) / populacao1 : 0.0;

    // Cálculo densidade e PIB per capita da carta 2
    densidadepopulacional2 = (area2 > 0) ? (double)populacao2 / area2 : 0.0;
    pibpercapta2 = (populacao2 > 0) ? (pib2 * 1000000000.0) / populacao2 : 0.0;

    // Menu para escolher os atributos
    int escolha1, escolha2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha1);
    limparBuffer();

    printf("\nEscolha o segundo atributo para comparar (não pode ser o mesmo que o primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2);
    limparBuffer();

    // Verifica se os atributos escolhidos são diferentes
    if (escolha1 == escolha2) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1; // Encerra o programa
    }

    // Comparação dos atributos escolhidos
    double valor1, valor2;
    double soma1 = 0.0, soma2 = 0.0;

    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            break;
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            break;
        case 3: // PIB
            valor1 = pib1;
            valor2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valor1 = pontosturisticos1;
            valor2 = pontosturisticos2;
            break;
        case 5: // Densidade populacional
            valor1 = densidadepopulacional1;
            valor2 = densidadepopulacional2;
            break;
        case 6: // PIB per capita
            valor1 = pibpercapta1;
            valor2 = pibpercapta2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1; // Encerra o programa
    }

    // Exibição dos resultados do primeiro atributo
    printf("\nComparação do primeiro atributo:\n");
    printf("%s: %.2f\n", nomecidade1, valor1);
    printf("%s: %.2f\n", nomecidade2, valor2);
    if ((escolha1 == 5 && valor1 < valor2) || (escolha1 != 5 && valor1 > valor2)) {
        printf("Vencedor: %s\n", nomecidade1);
        soma1 += valor1;
    } else if ((escolha1 == 5 && valor1 > valor2) || (escolha1 != 5 && valor1 < valor2)) {
        printf("Vencedor: %s\n", nomecidade2);
        soma2 += valor2;
    } else {
        printf("Empate!\n");
    }

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            break;
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            break;
        case 3: // PIB
            valor1 = pib1;
            valor2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valor1 = pontosturisticos1;
            valor2 = pontosturisticos2;
            break;
        case 5: // Densidade populacional
            valor1 = densidadepopulacional1;
            valor2 = densidadepopulacional2;
            break;
        case 6: // PIB per capita
            valor1 = pibpercapta1;
            valor2 = pibpercapta2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1; // Encerra o programa
    }

    // Exibição dos resultados do segundo atributo
    printf("\nComparação do segundo atributo:\n");
    printf("%s: %.2f\n", nomecidade1, valor1);
    printf("%s: %.2f\n", nomecidade2, valor2);
    if ((escolha2 == 5 && valor1 < valor2) || (escolha2 != 5 && valor1 > valor2)) {
        printf("Vencedor: %s\n", nomecidade1);
        soma1 += valor1;
    } else if ((escolha2 == 5 && valor1 > valor2) || (escolha2 != 5 && valor1 < valor2)) {
        printf("Vencedor: %s\n", nomecidade2);
        soma2 += valor2;
    } else {
        printf("Empate!\n");
    }

    // Soma dos atributos
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomecidade1, soma1);
    printf("%s: %.2f\n", nomecidade2, soma2);

    // Verifica quem venceu a rodada
    if (soma1 > soma2) {
        printf("Vencedor da rodada: %s\n", nomecidade1);
    } else if (soma2 > soma1) {
        printf("Vencedor da rodada: %s\n", nomecidade2);
    } else {
        printf("Empate na rodada!\n");
    }

    return 0;
}

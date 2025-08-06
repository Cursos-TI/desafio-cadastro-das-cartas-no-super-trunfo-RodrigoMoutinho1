#include <stdio.h>
#include <string.h>

void limparBuffer(){
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
    double superpoder1;
    double inversodensidade1;

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
    double superpoder2;
    double inversodensidade2;

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

    // Cálculo densidade e PIB per capita da carta 1 (com proteção)
    densidadepopulacional1 = (area1 > 0) ? (double)populacao1 / area1 : 0.0;
    pibpercapta1 = (populacao1 > 0) ? (pib1 * 1000000000.0) / populacao1 : 0.0;
    inversodensidade1 = (densidadepopulacional1 > 0.0) ? (1.0 / densidadepopulacional1) : 0.0;

    // Cálculo densidade e PIB per capita da carta 2 (com proteção)
    densidadepopulacional2 = (area2 > 0) ? (double)populacao2 / area2 : 0.0;
    pibpercapta2 = (populacao2 > 0) ? (pib2 * 1000000000.0) / populacao2 : 0.0;
    inversodensidade2 = (densidadepopulacional2 > 0.0) ? (1.0 / densidadepopulacional2) : 0.0;

    // Cálculo do super poder com segurança
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + inversodensidade1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + inversodensidade2;

    // Exibição carta 01
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em KM²: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Exibição carta 02
    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em KM²: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Menu interativo

    int escolha;

    printf("\nEscolha o Atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    printf("\nComparação entre %s e %s: \n", nomecidade1, nomecidade2);

    switch (escolha)
    {
    case 1:
    printf("População:\n");
    printf("%s: %lu\n", nomecidade1, populacao1);
    printf("%s: %lu\n", nomecidade2, populacao2);
    if 
    (populacao1 > populacao2) printf("Vencedor: %s\n", nomecidade1);
    else if 
    (populacao2 > populacao1) printf("Vencedor: %s\n", nomecidade2);
    else 
    printf("Empate!\n");
    break;

    case 2:
    printf("Área:\n");
    printf("%s: %.2f\n", nomecidade1, area1);
    printf("%s: %.2f\n", nomecidade2, area2);
    if 
    (area1 > area2) printf("Vencedor: %s\n", nomecidade1);
    else if
    (area2 > area1) printf("Vencedor: %s\n", nomecidade2);
    else
    printf("Empate!\n");
    break;

    case 3:
    printf("PIB:\n");
    printf("%s: %.2f\n", nomecidade1, pib1);
    printf("%s: %.2f\n", nomecidade2, pib2);
    if
    (pib1 > pib2) printf("Vencedor: %s\n", nomecidade1);
    else if
    (pib2 > pib1) printf("Vencedor: %s\n", nomecidade2);
    else
    printf("Empate!\n");
    break;

    case 4:
    printf("Pontos turisticos:\n");
    printf("%s: %d\n", nomecidade1, pontosturisticos1);
    printf("%s: %d\n", nomecidade2, pontosturisticos2);
    if 
    (pontosturisticos1 > pontosturisticos2) printf("Vencedor: %s\n", nomecidade1);
    else if
    (pontosturisticos2 > pontosturisticos1) printf("Vencedor: %s\n", nomecidade2);
    else
    printf("Empate!\n");
    break;

    case 5:
    printf("Densidade populacional:\n");
    printf("%s: %.2f\n", nomecidade1, densidadepopulacional1);
    printf("%s: %.2f\n", nomecidade2, densidadepopulacional2);
    if 
    (densidadepopulacional1 < densidadepopulacional2) printf("Vencedor: %s\n", nomecidade1);
    else if
    (densidadepopulacional2 < densidadepopulacional1) printf("Vencedor: %s\n", nomecidade2);
    else
    printf("Empate!\n");
    break;

    case 6:
    printf("PIB per capita:\n");
    printf("%s: %.2f\n", nomecidade1, pibpercapta1);
    printf("%s: %.2f\n", nomecidade2, pibpercapta2);
    if 
    (pibpercapta1 > pibpercapta2) printf("Vencedor: %s\n", nomecidade1);
    else if
    (pibpercapta2> pibpercapta1) printf("Vencedor: %s\n", nomecidade2);
    else
    printf("Empate!\n");
    break;

    case 7:
    printf("Super poder:\n");
    printf("%s: %.2f\n", nomecidade1, superpoder1);
    printf("%s: %.2f\n", nomecidade2, superpoder2);
    if 
    (superpoder1 > superpoder2) printf("Vencedor: %s\n", nomecidade1);
    else if
    (superpoder2 > superpoder1) printf("Vencedor: %s\n", nomecidade2);
    else
    printf("Empate!\n");
    break;
    
    
    default:
    printf("Opção invalida!\n");
        break;
    }
   return 0; 
}

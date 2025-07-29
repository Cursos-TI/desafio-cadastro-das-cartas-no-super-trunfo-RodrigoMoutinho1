#include <stdio.h>

int main() {
    // Variáveis da carta 01
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapta1;
    float superpoder1;

    // Variáveis da carta 02
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;
    float superpoder2;

    // Entrada da carta 01
    printf("Cadastro da carta 1:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nomecidade1);

    printf("Informe a populacao: ");
    scanf("%lu", &populacao1);

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
    scanf(" %s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nomecidade2);

    printf("Informe a populacao: ");
    scanf("%lu", &populacao2);

    printf("Informe a area (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB em reais: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

     //Calculo da densidade e pib per capta da carta 1
     densidadepopulacional1 = populacao1 / area1;
     pibpercapta1 = pib1 / populacao1;
     
     //Calculo da densidade e pib per capta da carta 2
     densidadepopulacional2 = populacao2 / area2;
     pibpercapta2 = pib2 / populacao2;

     //Calculo do super poder:
     superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1 / densidadepopulacional1);
     superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1 / densidadepopulacional2);

    // Exibição carta 01
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área em KM²: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapta1);
    printf("Supe Poder: %.2f\n", superpoder1);

    // Exibição carta 02
    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapta2);
    printf("Super poder: %.2f", superpoder2);

    //Coparação dos atributos
    printf("\n Comparação de cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Aréa: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade populacional: Carta 2 venceu (%d)\n", densidadepopulacional1 > densidadepopulacional2);
    printf("PIB per capta: Carta 1 venceu (%d)\n", pibpercapta1 > pibpercapta2);
    printf("Super poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    
    return 0;
}

#include <stdio.h>
#include <string.h>

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

    // Entrada da carta 01
    printf("Cadastro da carta 1:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    getchar(); //Limpa o '\n' do buffer
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = '\0';

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
    getchar();
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = '\0'; 

    printf("Informe a populacao: ");
    scanf("%lu", &populacao2);

    printf("Informe a area (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB em reais: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

     //Calculo da densidade e pib per capta da carta 1
     densidadepopulacional1 = (area1 > 0) ? (double) populacao1 / area1 : 0.0;
     pibpercapta1 = (populacao1 > 0) ? pib1 / populacao1 : 0.0;
     
     //Calculo da densidade e pib per capta da carta 2
     densidadepopulacional2 = (area2 > 0) ? (double) populacao2 / area2 : 0.0;
     pibpercapta2 = (populacao2 > 0) ? pib2 / populacao2 : 0.0;
     

     //Calculo do super poder:
     superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1 / densidadepopulacional1);
     superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1 / densidadepopulacional2);

    // Exibição carta 01
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em KM²: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000.0);
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
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000.0);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapta2);
    printf("Super poder: %.2f", superpoder2);

    //Comparações
    printf("Comparação de cartas\n");

    if (populacao1 > populacao2){
        printf("Carta 1 venceu! \n");
    } else if (populacao2 > populacao1){
        printf("Carta 2 venceu! \n");
    } else {
        printf("Empate!\n");
    }
    
    if (area1 > area2){
        printf("Carta 1 venceu!\n");
    } else if (area2 > area1){
        printf("Carta 2 venceu!\n");   
    } else {
        printf("Empate!\n");
    }

    if (pib1 > pib2){
        printf("Carta 1 venceu!\n");
    } else if (pib2 > pib1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!");
    }

    if (pontosturisticos1 > pontosturisticos2){
        printf("Carta 1 venceu!\n");
    } else if (pontosturisticos2 > pontosturisticos1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!");
    }

    if (densidadepopulacional1 < densidadepopulacional2){
        printf("Carta 1 venceu!\n");
    } else if (densidadepopulacional2 < densidadepopulacional1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!");
    }

    if (pibpercapta1 > pibpercapta2){
        printf("Carta 1 venceu!\n");
    } else if (pibpercapta2 > pibpercapta1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    if (superpoder1 > superpoder2){
        printf("Carta 1 venceu!\n");
    } else if (superpoder2 > superpoder1){
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    
    return 0;
}
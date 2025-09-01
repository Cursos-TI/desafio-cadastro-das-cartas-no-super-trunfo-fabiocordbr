#include <stdio.h>

int main() {

    // Variaveis Carta 01
    int populaçao01, pontos_turisticos01;
    float area01, pib01, densidadePopulacional1, inversoDensidade1, pibPerCapita1, superPoder1;
    char estado01[20], cidade01[20], codigo01[4] = "A01";

    // Variaveis Carta 02
    int populaçao02, pontos_turisticos02;
    float area02, pib02, densidadePopulacional2, inversoDensidade2, pibPerCapita2, superPoder2;
    char estado02[20], cidade02[20], codigo02[4] = "A02";
    
    // Carta 01
    printf("----- Cadastro de Cartas -----\n");

    printf("Qual o estado?\n");
    scanf("%s", estado01);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade01);

    printf("Qual a população?\n");
    scanf("%d", &populaçao01);

    printf("Qual a área?\n");
    scanf("%f", &area01);

    printf("Qual o PIB?\n");
    scanf("%f", &pib01);

    printf("Qual o número de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos01);

    densidadePopulacional1 = (float) populaçao01 / area01;
    pibPerCapita1 = (float) pib01 / populaçao01;
    inversoDensidade1 = area01 / populaçao01;
    superPoder1 = populaçao01 + area01 + pontos_turisticos01 + pibPerCapita1 + inversoDensidade1;

    printf("----- Carta 01 -----\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d\n", populaçao01);
    printf("Área: %.2fKm²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turisticos: %d\n", pontos_turisticos01);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("--------------------\n");


    // Carta 02 

    printf("----- Cadastro de Cartas(2) -----\n");

    printf("Qual o estado?\n");
    scanf("%s", estado02);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade02);

    printf("Qual a população?\n");
    scanf("%d", &populaçao02);

    printf("Qual a área?\n");
    scanf("%f", &area02);

    printf("Qual o PIB?\n");
    scanf("%f", &pib02);

    printf("Qual o número de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos02);

    densidadePopulacional2 = (float) populaçao02 / area02;
    pibPerCapita2 = (float) pib02 / populaçao02;
    inversoDensidade2 = area02 / populaçao02;
    superPoder2 = populaçao02 + area02 + pontos_turisticos02 + pibPerCapita2 + inversoDensidade2;


    printf("----- Carta 02 -----\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %d\n", populaçao02);
    printf("Área: %.2fKm²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turisticos: %d\n", pontos_turisticos02);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("--------------------\n");
    

    // Comparativo das Cartas

    int populaçao = populaçao01 > populaçao02;
    int area = area01 > area02;
    int pib = pib01 > pib02;
    int pontosTuristicos = pontos_turisticos01 > pontos_turisticos02;
    int densidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    int perCapita = pibPerCapita1 > pibPerCapita2;
    int superPoder = superPoder1 > superPoder2;


    printf("----- Comparação das Cartas -----\n");
    printf("População: Carta 1 venceu (%d)\n", populaçao);
    printf("Área: Carta 1 venceu (%d)\n", area);
    printf("PIB: Carta 1 venceu (%d)\n", pib);
    printf("pontus turisticos: Carta 1 venceu (%d)\n", pontosTuristicos);
    printf("densidade populacional: Carta 2 venceu (%d)\n", densidadePopulacional);
    printf("PIB per Capiota: carta 1 venceu (%d)\n", perCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder);


    return 0;
    
}
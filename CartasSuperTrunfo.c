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


    // Comparativo do atributo escolhido com if e if-else
    printf("\n");
    printf("Comparativo de cartas(Atributo: População)\n");
    printf("\n");
    printf("Carta 1 - %s: %d\n", cidade01, populaçao01);
    printf("Carta 2 - %s: %d\n", cidade02, populaçao01);
    printf("\n");

    if (populaçao01 > populaçao02){
        printf("Resultado: Carta 1(%s) venceu!\n", cidade01);
    }else {
        printf("Resultado: Carta 2(%s) venceu!\n", cidade02);
    }

    return 0;
    
}
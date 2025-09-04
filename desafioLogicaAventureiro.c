#include <stdio.h>
#include <string.h>

int main() {

    // Variaveis Carta 01
    int populaçao01, pontos_turisticos01;
    float area01, pib01, densidadePopulacional1, pibPerCapita1, superPoder1;
    char pais01[20];

    // Variaveis Carta 02
    int populaçao02, pontos_turisticos02;
    float area02, pib02, densidadePopulacional2, pibPerCapita2, superPoder2;
    char pais02[20];
    
    // Cadastro das cartas
    // Carta 01
    printf("----- Cadastro de Cartas(1) -----\n");

    printf("Qual o País?\n");
    scanf("%s", pais01);

    printf("Qual a população?\n");
    scanf("%d", &populaçao01);

    printf("Qual a área?\n");
    scanf("%f", &area01);

    printf("Qual o PIB?\n");
    scanf("%f", &pib01);

    printf("Qual o número de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos01);

    // Carta 02 
    printf("----- Cadastro de Cartas(2) -----\n");

    printf("Qual o País?\n");
    scanf("%s", pais02);

    printf("Qual a população?\n");
    scanf("%d", &populaçao02);

    printf("Qual a área?\n");
    scanf("%f", &area02);

    printf("Qual o PIB?\n");
    scanf("%f", &pib02);

    printf("Qual o número de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos02);

    //Calculos carta 01
    densidadePopulacional1 = (float) populaçao01 / area01;
    pibPerCapita1 = (float) pib01 / populaçao01;
    superPoder1 = populaçao01 + area01 + pontos_turisticos01 + pibPerCapita1;

    //Calculos carta 02
    densidadePopulacional2 = (float) populaçao02 / area02;
    pibPerCapita2 = (float) pib02 / populaçao02;
    superPoder2 = populaçao02 + area02 + pontos_turisticos02 + pibPerCapita2;

    // Menu interativo

    int atributoEscolhido;
    float carta01, carta02;
    char nomeAtributo[50];

    printf("****** LISTA DE ATRIBUTOS *****\n");
    printf("\n");
    printf("1. Países\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Numero de pontos turisticos\n");
    printf("6. Densidade demografica\n");
    printf("\n");
    printf("Digite abaixo o numero referente ao atributo escolhido:\n");
    scanf("%d", &atributoEscolhido);

    switch (atributoEscolhido)
    {
    case 1:
        printf("%s vs. %s\n", pais01, pais02);
        break;
    case 2:
        carta01 = populaçao01;
        carta02 = populaçao02;
        strcpy(nomeAtributo, "População\n");
        break;
    case 3:
        carta01 = area01;
        carta02 = area02;
        strcpy(nomeAtributo, "Área\n");
        break;
    case 4:
        carta01 = pib01;
        carta02 = pib02;
        strcpy(nomeAtributo, "PIB\n");
        break;
    case 5:
        carta01 = pontos_turisticos01;
        carta02 = pontos_turisticos02;
        strcpy(nomeAtributo, "Numeros de Pontos Turisticos\n");
        break;
    case 6:
        carta01 = densidadePopulacional1;
        carta02 = densidadePopulacional2;
        strcpy(nomeAtributo, "Densidade Populacional\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }

    if (atributoEscolhido > 1 && atributoEscolhido < 7)
    {
        if (carta01 == carta02)
        {
            printf("\n");
            printf("***** Resultado *****\n");
            printf("%s vs. %s\n", pais01, pais02);
            printf("Atributo escolhido: %s", nomeAtributo);
            printf("***** Empate *****");

        }else if (atributoEscolhido == 6)
        {
            if (carta01 < carta02)
            {
                printf("\n");
                printf("***** Resultado *****\n");
                printf("%s vs. %s\n", pais01, pais02);
                printf("Atributo escolhido: %s", nomeAtributo);
                printf("%s: %.2f\n", pais01, carta01);
                printf("%s: %.2f\n", pais02, carta02);
                printf("%s Ganhou!!!\n", pais01);
            }else{
                printf("\n");
                printf("***** Resultado *****\n");
                printf("%s vs. %s\n", pais01, pais02);
                printf("Atributo escolhido: %s", nomeAtributo);
                printf("%s: %.2f\n", pais01, carta01);
                printf("%s: %.2f\n", pais02, carta02);
                printf("%s Ganhou!!!\n", pais02);
            }
            
        }else if (carta01 > carta02)
        {
            printf("\n");
            printf("***** Resultado *****\n");
            printf("%s vs. %s\n", pais01, pais02);
            printf("Atributo escolhido: %s", nomeAtributo);
            printf("%s: %.2f\n", pais01, carta01);
            printf("%s: %.2f\n", pais02, carta02);
            printf("%s Ganhou!!!\n", pais01);
        }else
        {
            printf("\n");
            printf("***** Resultado *****\n");
            printf("%s vs. %s\n", pais01, pais02);
            printf("Atributo escolhido: %s", nomeAtributo);
            printf("%s: %.2f\n", pais01, carta01);
            printf("%s: %.2f\n", pais02, carta02);
            printf("%s Ganhou!!!\n", pais02);
        }
        
    }
    
    return 0;
    
}
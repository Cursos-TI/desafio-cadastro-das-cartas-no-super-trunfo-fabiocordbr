#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Variaveis Carta 01
    int populaçao01, pontos_turisticos01;
    float area01, pib01;
    char estado01[20], cidade01[20], codigo01[4] = "A01";

    // Variaveis Carta 02
    int populaçao02, pontos_turisticos02;
    float area02, pib02;
    char estado02[20], cidade02[20], codigo02[4] = "A02";
    
    // Carta 01
    printf("----- Cadastro de Cartas -----\n");

    printf("Qual o estado?\n");
    scanf("%s", estado01);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade01);

    printf("Qual a população?\n");
    scanf("%d", &populaçao01);

    printf("Qual o número de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos01);

    printf("Qual a área?\n");
    scanf("%f", &area01);

    printf("Qual o PIB?\n");
    scanf("%f", &pib01);

    printf("----- Carta 01 -----\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d\n", populaçao01);
    printf("Área: %f\n", area01);
    printf("PIB: %f\n", pib01);
    printf("Pontos Turisticos: %d\n", pontos_turisticos01);
    printf("--------------------\n");


    // Carta 02
    printf("----- Cadastro de Cartas -----\n");

    printf("Qual o estado?\n");
    scanf("%s", estado02);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade02);

    printf("Qual a população?\n");
    scanf("%d", &populaçao02);

    printf("Qual o número de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos02);

    printf("Qual a área?\n");
    scanf("%f", &area02);

    printf("Qual o PIB?\n");
    scanf("%f", &pib02);

    printf("----- Carta 01 -----\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %d\n", populaçao02);
    printf("Área: %f\n", area02);
    printf("PIB: %f\n", pib02);
    printf("Pontos Turisticos: %d\n", pontos_turisticos02);
    printf("--------------------\n");

    return 0;
}

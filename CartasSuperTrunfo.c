#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

/*
Carta1:
Estado: A
Código: A01
Nome da Cidade: Palmas
População: 302692
Área: 2.219 km²
PIB: 10.3 bilhões de reais
Número de Pontos Turísticos: 15

Carta2:
Estado: B
Código: B02
Nome da Cidade: Natal
População: 751300
Área: 167.3 km²
PIB: 24.2 bilhões de reais
Número de Pontos Turísticos: 30
*/

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int quantidade1, quantidade2;
    float densidade1, densidade2;
    float percapita1, percapita2;

    printf("Digite uma letra para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Código: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidade1);

    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", quantidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);



    printf("Digite uma letra para representar o segundo Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%s", codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidade2);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", quantidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);

    return 0;

    /*
    printf("%formato1 %formato2", variavel1, variavel2, ...")
    scanf("formato1 "formato2", &variavel1, &variavel2, ...)
    
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    %d: Imprime um inteiro no formato decimal.
    %f: Imprime um número de ponto flutuante no formato padrão.
    */

}

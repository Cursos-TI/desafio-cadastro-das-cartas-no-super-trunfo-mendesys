#include <stdio.h>

/*
CARTA 1:

Estado: A
Código: A01
Nome da Cidade: Palmas
População: 323625
Área: 2218.942 km²
PIB: 10333418.52 milhões de reais
Número de Pontos Turísticos: 15
PIB per Capita: PIB / Populacão
Densidade Populacional: População / Area
Super Poder: Soma de todos os atributos


CARTA 2:

Estado: B
Código: B02
Nome da Cidade: Natal
População: 751300
Área: 167.401 km²
PIB: 24186261.54 milhões de reais
Número de Pontos Turísticos: 30
PIB per Capita: PIB / População
Densidade Populacional: População / Area
Super Poder: Soma de todos os atributos
*/

int main() {
    //Declarando variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float percapita1, percapita2;
    float densidade1, densidade2;
    float superpoder1, superpoder2;

    //Título da primeira carta
    printf("***CARTA 1***\n");

    //Operação soma dos atributos da Carta 1
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + densidade1;

    //Entrada dos dados
    printf("Digite uma letra para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Código: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a Populacao: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //Operação divisão para determinar os valores dos atributos "PIB per Capita" e "Densidade Populacional"
    percapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;
    
    //Imprimindo na tela a saída dos dados
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f milhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Super Poder: %f\n", superpoder1);


    //Título da segunda carta
    printf("***CARTA 2***\n");

    //Operação soma dos atributos da Carta 2
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + densidade2;

    //Entrada dos dados
    printf("Digite uma letra para representar o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%s", codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    //Operação divisão para determinar os valores dos atributos "PIB per Capita" e "Densidade Populacional"
    percapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;
    
    //Imprimindo na tela a saída dos dados
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Super Poder: %f\n", superpoder2);


    //Comparando as cartas 1 e 2 e imprimindo a saída (comparação realizada dentro do printf)
    printf("**Comparação das Cartas**\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("PIB per Capita: %d\n", percapita1 > percapita2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);


    //Comparando um único atributo (População) entre as cartas e utilizando if-else para determinar a carta vencedora
    printf("**Comparação das Cartas (Atributo: População)**\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
        printf("Resultado: <<<CARTA 1 (%s) Venceu!>>>\n", cidade1);
    } else {
        printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
        printf("Resultado: <<<CARTA 2 (%s) Venceu!>>>\n", cidade2);
    }

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

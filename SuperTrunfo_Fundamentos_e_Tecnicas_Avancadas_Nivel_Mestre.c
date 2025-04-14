#include <stdio.h>

int main() {
    //Declarando variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, percapita1, percapita2, densidade1, densidade2, superpoder1, superpoder2;
    int pontosturisticos1, pontosturisticos2;


    //Operação soma dos atributos da Carta 1
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + densidade1;


    //Entrada dos dados da Carta 1
    printf("\nCARTA 1\n");    
    printf("Digite uma letra para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Código: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
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
  

    //Operação soma dos atributos da Carta 2
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + densidade2;


    //Entrada dos dados da Carta 2
    printf("\nCARTA 2\n");
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


    //Imprimindo na tela a saída dos dados da Carta 1
    printf("\n***CARTA 1***\n");
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


    //Imprimindo na tela a saída dos dados da Carta 2
    printf("\n***CARTA 2***\n");
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


    //Comparando as cartas 1 e 2 e imprimindo a saída
    printf("\n**Comparação das Cartas**\n");
    printf("Se o resultado da comparação for 1, a carta 1 venceu. Se o resultado for 0, a carta 2 venceu.\n");
    printf("\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("PIB per Capita: %d\n", percapita1 > percapita2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);
    printf("\n");

    return 0;
}
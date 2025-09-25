#include <stdio.h>

int main (){
    int populacao1, nptoturisticos1;
    float area1, PIB1, densidade1, percapita1;
    char estado;
    char cidade[50], codigo[50];

    // ENTRADA DE DADOS CARTA 1:
    printf("\n--- SUPER TRUNFO ---\n");
    printf("\n--- CARTA 1 ---\n");
    printf("Digite o estado com uma letra de A a H: \n");
    scanf(" %c", &estado); // Espaço antes do %c 
    
    printf ("Digite o codigo da carta (letra + numero): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade (se for composto coloque junto): \n");
    scanf("%s", cidade);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km2): \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (em bilhoes de reais): \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf ("%d", &nptoturisticos1);

    // CALCULO DA DENSIDADE E RENDA PER CAPITA:
    densidade1 = populacao1/area1;
    percapita1 = (PIB1*1000000000)/populacao1; //Multiplicar PBI por 1.000.000.000 para converter de bilhões de reais para reais

    // EXIBICAO DE DADOS:
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f billhoes de reais\n", PIB1);
    printf("Numero de pontos turisticos: %d \n", nptoturisticos1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);
  
    // ENTRADA DE DADOS CARTA 2:
    int populacao2, nptoturisticos2;
    float area2, PIB2, densidade2, percapita2;

    printf("\n--- CARTA 2 ---\n");
    printf("Digite o estado com uma letra de A a H: \n");
    scanf(" %c", &estado);
    
    printf ("Digite o codigo da carta (letra + numero): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade (se for composto coloque junto): \n");
    scanf("%s", cidade);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km2): \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (em bilhoes de reais): \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf ("%d", &nptoturisticos2);

    // CALCULO DA DENSIDADE E RENDA PER CAPITA:
    densidade2 = populacao2/area2;
    percapita2 = (PIB2*1000000000)/populacao2;

     // EXIBICAO DE DADOS:
    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f billhoes de reais\n", PIB2);
    printf("Numero de pontos turisticos: %d \n", nptoturisticos2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);

    //BATALHA DE CARTAR NO SUPER TRUNFO
    unsigned long int populacaof;
    int nptoturisticos;
    float area, PIB, densidade, percapita, superpoder;

    populacaof = populacao1 > populacao2;
    area = area1 > area2;
    PIB =  PIB1 > PIB2;
    densidade = densidade2 < densidade1;
    percapita = percapita1 > percapita2;
    nptoturisticos = nptoturisticos1 > nptoturisticos2;
    // Colocado float antes das variaveis que eram int para conversão
    superpoder = (area1 + PIB1 + densidade1 + percapita1 + (float)nptoturisticos1 + (float)populacao1) > (area2 + PIB2+ densidade2 + percapita2 + (float)nptoturisticos2 + (float)populacao2);
    
    printf("\n--- BATALHA DE CARTAS SUPER TRUNFO ---\n");
    printf("\n(OBS: 1 = verdadeiro e 0 = falso) \n");
    printf("\nPopulacao - Carta 1 venceu: %lu \n", populacaof);
    printf("Area - Carta 1 venceu: %.0f \n", area);
    printf("PIB - Carta 1 venceu: %.0f \n", PIB);
    printf("Pontos turisticos - Carta 1 venceu: %d \n", nptoturisticos);
    printf("Densidade Pupalcional - Carta 2 venceu: %.0f \n", densidade);
    printf("PIB per capita -  Carta 1 venceu: %.0f \n", percapita);
    printf("Super Poder - Carta 1 venceu: %.0f \n", superpoder);

    return 0;
}
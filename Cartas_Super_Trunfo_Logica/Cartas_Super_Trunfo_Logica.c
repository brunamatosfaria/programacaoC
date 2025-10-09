#include <stdio.h>

int main (){
    int populacao1, nptoturisticos1;
    float area1, PIB1, densidade1, percapita1;
    char estado;
    char cidade1[50], codigo[50], pais1[50];

    // ENTRADA DE DADOS CARTA 1:
    printf("\n--- SUPER TRUNFO ---\n");
    printf("\n--- CARTA 1 ---\n");
    printf("Digite o nome do pais: \n");
    scanf("%s", pais1);

    printf("Digite o estado com uma letra de A a H: \n");
    scanf(" %c", &estado); // Espaço antes do %c 
    
    printf ("Digite o codigo da carta (letra + numero): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade (se for composto coloque junto): \n");
    scanf("%s", cidade1);

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
    printf("Nome da cidade: %s \n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f billhoes de reais\n", PIB1);
    printf("Numero de pontos turisticos: %d \n", nptoturisticos1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);
  
    // ENTRADA DE DADOS CARTA 2:
    int populacao2, nptoturisticos2;
    float area2, PIB2, densidade2, percapita2;
    char cidade2[50], pais2[50];

    printf("\n--- CARTA 2 ---\n");
    printf("Digite o nome do pais: \n");
    scanf("%s", pais2);

    printf("Digite o estado com uma letra de A a H: \n");
    scanf(" %c", &estado);
    
    printf ("Digite o codigo da carta (letra + numero): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade (se for composto coloque junto): \n");
    scanf("%s", cidade2);

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
    printf("Nome da cidade: %s \n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f billhoes de reais\n", PIB2);
    printf("Numero de pontos turisticos: %d \n", nptoturisticos2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);

    //BATALHA DE CARTAS NO SUPER TRUNFO
    int menu1, menu2;
    float atributo1Carta1, atributo1Carta2, atributo2Carta1, atributo2Carta2, resultadoCarta1, resultadoCarta2;

    printf("\n### BATALHA DE CARTAS ###\n");
    
    // MENU 1
    printf("\nEscolha o primeiro atributo de comparacao entre as duas cartas: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &menu1);
    printf("\nAtributo escolhido: %d\n", menu1);

    switch (menu1)
    {
    case 1:
        printf("Carta 1: %d habitantes\n", populacao1);
        atributo1Carta1 = populacao1;
        printf("Carta 2: %d habitantes\n", populacao2);
        atributo1Carta2 = populacao2;
        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu esse atributo!\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta 2 venceu esse atributo!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        break;
    case 2:
        printf("Carta 1: %.2f km2\n", area1);
        atributo1Carta1 = area1;
        printf("Carta 2: %.2f km2\n", area2);
        atributo1Carta2 = area2;
        if (area1 > area2)
        {
            printf("Carta 1 venceu esse atributo!\n");
        }
        else if (area1 < area2)
        {
            printf("Carta 2 venceu esse atributo!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        break;
    case 3:
        printf("Carta 1: %.2f bilhoes de reais\n", PIB1);
        atributo1Carta1 = PIB1;
        printf("Carta 2: %.2f bilhoes de reais\n", PIB2);
        atributo1Carta2 = PIB2;
        if (PIB1 > PIB2)
        {
            printf("Carta 1 venceu esse atributo!\n");
        }
        else if (PIB1 < PIB2)
        {
            printf("Carta 2 venceu esse atributo!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        break;
    case 4:
        printf("Carta 1: %d \n", nptoturisticos1);
        atributo1Carta1 = nptoturisticos1;
        printf("Carta 2: %d \n", nptoturisticos2);
        atributo1Carta2 = nptoturisticos2;
        if (nptoturisticos1 > nptoturisticos2)
        {
            printf("Carta 1 venceu esse atributo!\n");
        }
        else if (nptoturisticos1 < nptoturisticos2)
        {
            printf("Carta 2 venceu esse atributo!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        break;
    case 5:
        printf("Carta 1: %.2f hab/km2\n", densidade1);
        atributo1Carta1 = densidade1;
        printf("Carta 2: %.2f hab/km2\n", densidade2);
        atributo1Carta2 = densidade2;
        if (densidade2 > densidade1)
        {
            printf("Carta 1 venceu esse atributo!\n");
        }
        else if (densidade2 < densidade1)
        {
            printf("Carta 2 venceu esse atributo!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        break;
    default:
        printf("Opcao invalida! \n");
        break;
    }

    //MENU 2
    printf("\nEscolha o segundo atributo de comparacao entre as duas cartas: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &menu2);
    printf("\nAtributo escolhido: %d\n", menu2);

    //LOGICA DO JOGO

    if (menu1 == menu2)
    {
        printf("Voce escolheu o mesmo atributo!\n");
    }
    else
    {
        switch (menu2)
        {
        case 1:
            printf("Carta 1: %d habitantes\n", populacao1);
            atributo2Carta1 = populacao1;
            printf("Carta 2: %d habitantes\n", populacao2);
            atributo2Carta2 = populacao2;
            if (populacao1 > populacao2)
            {
                printf("Carta 1 venceu esse atributo!\n");
            }
            else if (populacao1 < populacao2)
            {
                printf("Carta 2 venceu esse atributo!\n");
            }
            else
            {
                printf("Houve um empate!\n");
            }
            break;
        case 2:
            printf("Carta 1: %.2f km2\n", area1);
            atributo2Carta1 = area1;
            printf("Carta 2: %.2f km2\n", area2);
            atributo2Carta2 = area2;
            if (area1 > area2)
            {
                printf("Carta 1 venceu esse atributo!\n");
            }
            else if (area1 < area2)
            {
                printf("Carta 2 venceu esse atributo!\n");
            }
            else
            {
                printf("Houve um empate!\n");
            }
            break;
        case 3:
            printf("Carta 1: %.2f bilhoes de reais\n", PIB1);
            atributo2Carta1 = PIB1;
            printf("Carta 2: %.2f bilhoes de reais\n", PIB2);
            atributo2Carta2 = PIB2;
            if (PIB1 > PIB2)
            {
                printf("Carta 1 venceu esse atributo!\n");
            }
            else if (PIB1 < PIB2)
            {
                printf("Carta 2 venceu esse atributo!\n");
            }
            else
            {
                printf("Houve um empate!\n");
            }
            break;
        case 4:
            printf("Carta 1: %d \n", nptoturisticos1);
            atributo2Carta1 = nptoturisticos1;
            printf("Carta 2: %d \n", nptoturisticos2);
            atributo2Carta2 = nptoturisticos2;
            if (nptoturisticos1 > nptoturisticos2)
            {
                printf("Carta 1 venceu esse atributo!\n");
            }
            else if (nptoturisticos1 < nptoturisticos2)
            {
                printf("Carta 2 venceu esse atributo!\n");
            }
            else
            {
                printf("Houve um empate!\n");
            }
            break;
        case 5:
            printf("Carta 1: %.2f hab/km2\n", densidade1);
            atributo2Carta1 = densidade1;
            printf("Carta 2: %.2f hab/km2\n", densidade2);
            atributo2Carta2 = densidade2;
            if (densidade2 > densidade1)
            {
                printf("Carta 1 venceu esse atributo!\n");
            }
            else if (densidade2 < densidade1)
            {
                printf("Carta 2 venceu esse atributo!\n");
            }
            else
            {
                printf("Houve um empate!\n");
            }
            break;
        default:
            printf("Opcao invalida! \n");
            break;
        }

        printf("\n- Carta 1: %s\n", pais1);
        resultadoCarta1 = atributo1Carta1 + atributo2Carta1;
        resultadoCarta2 = atributo1Carta2 + atributo2Carta2;
        printf("Soma dos atributos da Carta 1: %.2f\n", resultadoCarta1);
        printf("\n- Carta 2: %s\n", pais2);
        printf("Soma dos atributos da Carta 2: %.2f\n", resultadoCarta2);

        if (resultadoCarta1 > resultadoCarta2)
        {
            printf("\nRESULTADO: Carta 1 e a vencedora da rodada!\n");
        }
        else if (resultadoCarta1 < resultadoCarta2)
        {
            printf("\nRESULTADO: Carta 2 e a vencedora da rodada!\n");
        }
        else
        {
            printf("\nRESULTADO: Houve um empate!\n");
        }
    }
    return 0;
}

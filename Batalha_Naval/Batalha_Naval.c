#include <stdio.h>

#define TAM 10 // Definindo tamanho da matriz

#define TAMANHO_HABILIDADE 5

int main(){
    //Criando tabuleiro (Matriz 10 x 10)
    int tabuleiro [TAM][TAM] = {0}; // Inicializando com 0 representando água

    // Posição dos navios =
    int x1 = 2, y1 = 3; // coordenadas início do navio horizontal
    int tamanho1 = 3;   // tamanho do navio horizontal

    int x2 = 6, y2 = 5; // coordenadas início do navio vertical
    int tamanho2 = 3;   // tamanho do navio vertical

    int x3 = 7, y3 = 7; // coordenadas início do navio diagonal principal
    int tamanho3 = 3; // tamanho do navio diagonal principal

    int x4 = 8, y4 = 1; // coordenadas início do navio diagonal secundaria
    int tamanho4 = 3; // tamanho do navio diagonal secundaria
   
    // Colocando navio horizontal
    for (int j = 0; j < tamanho1; j++) {
        tabuleiro[x1][y1 + j] = 3; //nº 3 representando parte do navio, com coluna variando
    }
    
    // Colocando navio vertical
    for (int i = 0; i < tamanho2; i++) {
        tabuleiro[x2 + i][y2] = 3; //nº 3 representando parte do navio, com linha variando
    }

    // Colocando navio diagonal principal
    for (int i = 0; i < tamanho3; i++) {
        for(int j = 0; j < tamanho3; j++){
            if ((x3 + i) == (y3 + j))
            {
                tabuleiro[x3 + i][y3 + j] = 3; //nº 3 representando parte do navio, com linha e coluna variando
            }
        }
    }

    // Colando navio diagonal secundaria
    for (int i = 0; i < tamanho4; i++)
    {
        for (int j = i; j <= i; j++)
        {
            tabuleiro[x4 - i][y4 + j] = 3; // nº 3 representando parte do navio, com linha e coluna variando
        }
    }

    //Exibição do tabuleiro
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("\n---Tabuleiro Batalha Naval---\n");
    for (int j = 0; j < TAM; j++)
    {
        printf(" %c", coluna[j]); // Imprime as letras das colunas
    }
    printf("\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", i); // Imprime os numeros das linhas
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        } // exibe o restante do tabuleiro
        printf("\n");
    }
   
    printf("\n*** Desafio Nivel Mestre ***\n");

    int matrizHabilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int i, j;

    int centro = TAMANHO_HABILIDADE / 2;

    // --- HABILIDADE EM CONE ---

    printf("\n--- HABILIDADE EM CONE ---\n");

    for (i = 0; i < TAMANHO_HABILIDADE; i++)
    {
        for (j = 0; j < TAMANHO_HABILIDADE; j++)
        {
            if (j >= centro - i && j <= centro + i)
            {
                matrizHabilidade[i][j] = 1;
            }
            else
            {
                matrizHabilidade[i][j] = 0;
            }
            printf("%d ", matrizHabilidade[i][j]);
        }
        printf("\n");
    }

    // --- HABILIDADE EM CRUZ ---

    printf("\n--- HABILIDADE EM CRUZ ---\n");

    for (i = 0; i < TAMANHO_HABILIDADE; i++)
    {
        for (j = 0; j < TAMANHO_HABILIDADE; j++)
        {
            if (i == centro || j == centro)
            {
                matrizHabilidade[i][j] = 1;
            }
            else
            {
                matrizHabilidade[i][j] = 0;
            }
            printf("%d ", matrizHabilidade[i][j]);
        }
        printf("\n");
    }

    // --- HABILIDADE EM OCTAEDRO ---

    printf("\n--- HABILIDADE EM OCTAEDRO ---\n");

    for (i = 0; i < TAMANHO_HABILIDADE; i++)
    {
        for (j = 0; j < TAMANHO_HABILIDADE; j++)
        {
            if ((i - centro) + (j - centro) <= 2)
            {
                matrizHabilidade[i][j] = 1;
            }
            else
            {
                matrizHabilidade[i][j] = 0;
            }
            printf("%d ", matrizHabilidade[i][j]);
        }
        printf("\n");
    }    
    return 0;

}
#include <stdio.h>

// Mover Torre 5 casas p/ direita usando void
void moverTorre(int casasT)
{
    if (casasT > 0)
    {
        printf("Torre - Direita\n");
        moverTorre(casasT - 1);
    }
}

// Mover Bispo 5 casas na diagonal (cima e direita) usando void
void moverBispo(int casasB)
{
    if (casasB > 0)
    {
        printf("Bispo - Cima e Direita\n");
        moverBispo(casasB - 1);
    }
}

// Mover a Rainha 8 casas p/ esquerda usando void
void moverRainha(int casasR)
{
    if (casasR > 0)
    {
        printf("Rainha - Esquerda\n");
        moverRainha(casasR - 1);
    }
}

int main()
{

    moverTorre(5);
    moverBispo(5);
    moverRainha(8);
// Mover o Cavalo 2 casas para cima e 1 casa para a direita | Continue e Break    
    
    for (int i = 1; i <= 2; i++)
    {
        printf("Cavalo - Cima\n");
        if( i == 2){
            break;
        }
    } printf("Cavalo - Direita\n");
    return 0;
}
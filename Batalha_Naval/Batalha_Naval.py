# Definindo tamanho da matriz
TAM = 10

def main():
    # Criando tabuleiro (Matriz 10 x 10) com 0 representando água
    tabuleiro = [[0 for _ in range(TAM)] for _ in range(TAM)]

    # Posição dos navios
    x1, y1 = 2, 3  # coordenadas início do navio horizontal
    tamanho1 = 3   # tamanho do navio horizontal

    x2, y2 = 6, 5  # coordenadas início do navio vertical
    tamanho2 = 3   # tamanho do navio vertical

    x3, y3 = 7, 7  # coordenadas início do navio diagonal principal
    tamanho3 = 3   # tamanho do navio diagonal principal

    x4, y4 = 8, 1  # coordenadas início do navio diagonal secundária
    tamanho4 = 3   # tamanho do navio diagonal secundária

    # Colocando navio horizontal
    for j in range(tamanho1):
        tabuleiro[x1][y1 + j] = 3  # nº 3 representando parte do navio

    # Colocando navio vertical
    for i in range(tamanho2):
        tabuleiro[x2 + i][y2] = 3  # nº 3 representando parte do navio

    # Colocando navio diagonal principal
    for i in range(tamanho3):
        for j in range(tamanho3):
            if (x3 + i) == (y3 + j):
                tabuleiro[x3 + i][y3 + j] = 3

    # Colocando navio diagonal secundária
    for i in range(tamanho4):
        tabuleiro[x4 - i][y4 + i] = 3  # linha decresce, coluna cresce

    # Exibição do tabuleiro
    colunas = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J']

    print("\n--- Tabuleiro Batalha Naval ---")
    print("  ", " ".join(colunas))
    for i in range(TAM):
        linha_str = " ".join(str(celula) for celula in tabuleiro[i])
        print(f"{i} {linha_str}")

if __name__ == "__main__":
    main()

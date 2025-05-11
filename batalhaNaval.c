#include <stdio.h>

void exibirTabuleiro(int tabuleiro[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int tabuleiro[5][5] = {0};

    // Navio horizontal (linha 1, colunas 0 a 2)
    for (int j = 0; j < 3; j++) {
        tabuleiro[1][j] = 3;
        printf("Navio horizontal: (%d, %d)\n", 1, j);
    }

    // Navio vertical (coluna 3, linhas 2 a 4)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][3] = 3;
        printf("Navio vertical: (%d, %d)\n", i, 3);
    }

    printf("\nTabuleiro com navios (0 = vazio, 3 = navio):\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}

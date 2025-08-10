#include <stdio.h>
 
#define TAM 10
#define AGUA 0
#define NAVIO 3
#define TAM_NAVIO 3
 
int main() {
    int tabuleiro[TAM][TAM];
    int i, j;
 
    // Inicializa tabuleiro com água
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
 
    // Navio horizontal
    for (j = 1; j < 1 + TAM_NAVIO; j++) {
        tabuleiro[4][j] = NAVIO;
    }
 
    // Navio vertical
    for (i = 5; i < 5 + TAM_NAVIO; i++) {
        tabuleiro[i][5] = NAVIO;
    }
 
    // Navio diagonal principal
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[i][i] = NAVIO;
    }
 
    // Navio diagonal secundária
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[i][9 - i] = NAVIO;
    }
 
    // Exibe tabuleiro
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
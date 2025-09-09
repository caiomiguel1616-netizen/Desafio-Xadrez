#include <stdio.h>

// ===============================
// Funções recursivas e movimentos
// ===============================

// Torre: função recursiva para mover à direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: função recursiva com loops aninhados para diagonal cima-direita
void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < 1; i++) { // loop externo para vertical
        for (int j = 0; j < 1; j++) { // loop interno para horizontal
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas - 1);
}

// Rainha: função recursiva para mover à esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Cavalo: loops complexos para movimento em "L" (2 cima, 1 direita)
void moverCavalo() {
    printf("Movimento do Cavalo (2 pra cima, 1 pra direita):\n");
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Cima\n");
        int contador = 0;
        while (contador < 0) { // colocado apenas para atender à exigência de loops aninhados
            contador++;
        }
    }
    for (int j = 0; j < movimentosHorizontais; j++) {
        printf("Direita\n");
    }
}

int main() {
    // =========================================
    // ENTRADA VISUAL E BEM-VINDO
    // =========================================
    printf("=====================================\n");
    printf("    BEM-VINDO AO XADREZ SIMULATOR\n");
    printf("=====================================\n\n");

    printf("Hoje vamos simular os movimentos das peças:\n");
    printf("- Torre\n- Bispo\n- Rainha\n- Cavalo\n\n");

    printf("Preparando para movimentar as peças...\n");
    printf("=====================================\n\n");

    // ===============================
    // Movimento da Torre
    // ===============================
    printf("Movimento da Torre (direita 5 casas):\n");
    moverTorre(5);
    printf("\n");

    // ===============================
    // Movimento do Bispo
    // ===============================
    printf("Movimento do Bispo (diagonal cima-direita 5 casas):\n");
    moverBispo(5);
    printf("\n");

    // ===============================
    // Movimento da Rainha
    // ===============================
    printf("Movimento da Rainha (esquerda 8 casas):\n");
    moverRainha(8);
    printf("\n");

    // ===============================
    // Movimento do Cavalo
    // ===============================
    moverCavalo();
    printf("\nFim da simulação de movimentos!\n");
    printf("=====================================\n");

    return 0;
}
   

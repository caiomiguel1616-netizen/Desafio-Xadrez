#include <stdio.h>

int main() {
    // =========================================
    // SIMULADOR DE MOVIMENTOS DE PEÇAS DE XADREZ
    // =========================================

    // ===============================
    // Movimento da Torre
    // ===============================
    int casasTorre = 5; // número de casas que a torre vai se mover
    printf("Movimento da Torre (direita 5 casas):\n");

    // Aqui usamos o FOR porque sabemos exatamente quantas casas percorrer
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // torre se move horizontalmente
    }
    printf("\n"); // separa visualmente os movimentos

    // ===============================
    // Movimento do Bispo
    // ===============================
    int casasBispo = 5; // número de casas que o bispo vai se mover
    printf("Movimento do Bispo (diagonal cima-direita 5 casas):\n");

    // Usamos WHILE para o bispo
    int passoBispo = 1; // contador inicial
    while (passoBispo <= casasBispo) {
        printf("Cima, Direita\n"); // diagonal
        passoBispo++; // incrementa o passo
    }
    printf("\n"); // separa visualmente os movimentos

    // ===============================
    // Movimento da Rainha
    // ===============================
    int casasRainha = 8; // número de casas que a rainha vai se mover
    printf("Movimento da Rainha (esquerda 8 casas):\n");

    // Aqui usamos DO-WHILE
    int passoRainha = 1; // contador inicial
    do {
        printf("Esquerda\n"); // rainha se move horizontalmente
        passoRainha++; // incrementa o passo
    } while (passoRainha <= casasRainha);

    printf("\nFim da simulação de movimentos!\n");

    return 0; // fim do programa
}

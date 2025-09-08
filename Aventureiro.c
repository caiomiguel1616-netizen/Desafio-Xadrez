#include <stdio.h>

int main() {
    // =========================================
    // SIMULADOR DE MOVIMENTOS DE PEÇAS DE XADREZ
    // =========================================

    // ===============================
    // Movimento da Torre
    // ===============================
    int casasTorre = 5; // número de casas que a torre vai andar
    printf("Movimento da Torre (direita 5 casas):\n");

    // usei FOR pq a gente sabe exatamente quantas vezes repetir
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // torre só anda em linha reta
    }
    printf("\n"); // só pra separar as partes do programa

    // ===============================
    // Movimento do Bispo
    // ===============================
    int casasBispo = 5; // quantas casas o bispo vai andar
    printf("Movimento do Bispo (diagonal cima-direita 5 casas):\n");

    // aqui usei WHILE porque ele repete até a condição ser falsa
    int passoBispo = 1;
    while (passoBispo <= casasBispo) {
        printf("Cima, Direita\n"); // bispo anda em diagonal
        passoBispo++; // incrementa o contador
    }
    printf("\n");

    // ===============================
    // Movimento da Rainha
    // ===============================
    int casasRainha = 8; // número de casas que a rainha vai andar
    printf("Movimento da Rainha (esquerda 8 casas):\n");

    // usei DO-WHILE porque ele executa pelo menos uma vez
    int passoRainha = 1;
    do {
        printf("Esquerda\n"); // rainha pode ir em qualquer direção
        passoRainha++;
    } while (passoRainha <= casasRainha);

    printf("\n");

    // ===============================
    // Movimento do Cavalo
    // ===============================
    int casasBaixo = 2;    // cavalo vai descer 2 casas
    int casasEsquerda = 1; // depois vai 1 casa pra esquerda
    printf("Movimento do Cavalo (em L: 2 para baixo e 1 para a esquerda):\n");

    // o FOR controla as duas partes do L (primeiro baixo, depois esquerda)
    for (int etapa = 1; etapa <= 3; etapa++) {
        if (etapa <= casasBaixo) {
            // usei WHILE dentro do FOR pra cumprir a regra de loop aninhado
            int contador = 0;
            while (contador < 1) {
                printf("Baixo\n"); // cavalo anda pra baixo
                contador++;
            }
        } else {
            // última etapa: movimento pra esquerda
            int contador = 0;
            while (contador < casasEsquerda) {
                printf("Esquerda\n");
                contador++;
            }
        }
    }

    printf("\nFim da simulação de movimentos!\n");

    return 0; // fim do programa
}

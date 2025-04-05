#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    /* Número de casas que cada peça deve se mover */
    const int TORRE_PASSOS = 5;
    const int BISPO_PASSOS = 5;
    const int RAINHA_PASSOS = 8;
    const int CAVALO_PASSOS_VERTICAL = 2;
    const int CAVALO_PASSOS_HORIZONTAL = 1;

    /* Movimentação da Torre (for): 5 casas para a direita */
    printf("Movimento da Torre:\n");
    for (int passo = 1; passo <= TORRE_PASSOS; passo++) {
        printf("Direita\n");
    }

    /* Movimentação do Bispo (while): 5 casas na diagonal para cima e à direita */
    printf("\nMovimento do Bispo:\n");
    int passoBispo = 1;
    while (passoBispo <= BISPO_PASSOS) {
        printf("Cima, Direita\n");
        passoBispo++;
    }

    /* Movimentação da Rainha (do‑while): 8 casas para a esquerda */
    printf("\nMovimento da Rainha:\n");
    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= RAINHA_PASSOS);

   

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    /* Movimentação do Cavalo (for + while): 2 casas para baixo e 1 casa para a esquerda */
    printf("\nMovimento do Cavalo:\n");
    for (int moveHorizontal = 1; moveHorizontal <= CAVALO_PASSOS_HORIZONTAL; moveHorizontal++) {
        int moveVertical = 1;
        while (moveVertical <= CAVALO_PASSOS_VERTICAL) {
            printf("Baixo\n");
            moveVertical++;
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

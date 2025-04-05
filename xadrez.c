
#include <stdio.h>

/* Função recursiva para a Torre: simula 5 casas para a direita */
void moverTorre(int passos, int atual) {
    if (atual > passos)
        return; // condição de parada: já percorreu todas as casas
    printf("Direita\n");
    moverTorre(passos, atual + 1); // chamada recursiva para o próximo passo
}

/* Função recursiva para a Rainha: simula 8 casas para a esquerda */
void moverRainha(int passos, int atual) {
    if (atual > passos)
        return; // condição de parada
    printf("Esquerda\n");
    moverRainha(passos, atual + 1); // próxima casa
}

/* Função recursiva para o Bispo:
   Simula 5 casas na diagonal (cima e direita) utilizando também loops aninhados.
   O loop externo representa o movimento vertical e o loop interno, o horizontal.
*/
void moverBispo(int passos) {
    if (passos <= 0)
        return; // condição de parada
    // Loop aninhado para simular a diagonal
    for (int i = 0; i < 1; i++) {      // movimento vertical (1 passo)
        for (int j = 0; j < 1; j++) {  // movimento horizontal (1 passo)
            printf("Cima, Direita\n");
        }
    }
    moverBispo(passos - 1); // chamada recursiva para o próximo passo
}

int main() {
    /* Definição das constantes de movimentação */
    const int TORRE_PASSOS = 5;
    const int BISPO_PASSOS = 5;
    const int RAINHA_PASSOS = 8;

    /* Movimentação da Torre utilizando recursividade */
    printf("Movimento da Torre:\n");
    moverTorre(TORRE_PASSOS, 1);

    /* Movimentação do Bispo utilizando recursividade e loops aninhados */
    printf("\nMovimento do Bispo:\n");
    moverBispo(BISPO_PASSOS);

    /* Movimentação da Rainha utilizando recursividade */
    printf("\nMovimento da Rainha:\n");
    moverRainha(RAINHA_PASSOS, 1);

    /* Movimentação do Cavalo:
       Agora o Cavalo se move em "L" para cima e para a direita:
       2 casas para cima e 1 casa para a direita.
       Utilizamos um loop for para a parte horizontal e um loop while para a vertical,
       com condições para demonstrar o uso de 'continue' e 'break'.
    */
    printf("\nMovimento do Cavalo:\n");
    // Loop for para o movimento horizontal (1 casa para a direita)
    for (int horizontal = 1; horizontal <= 1; horizontal++) {
        int vertical = 2; // número de casas para mover para cima
        // Loop while para movimentação vertical
        while (vertical > 0) {
            // Se estiver na primeira ou na segunda iteração, imprime "Cima"
            if (vertical == 2) {
                printf("Cima\n");
                vertical--;
                continue; // continua para a próxima iteração
            }
            if (vertical == 1) {
                printf("Cima\n");
                vertical--;
                break; // finaliza o loop vertical após mover 2 casas
            }
        }
        // Após as casas para cima, imprime o movimento horizontal
        printf("Direita\n");
    }

    return 0;
}

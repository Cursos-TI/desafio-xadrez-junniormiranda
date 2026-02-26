#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação da Torre
    // Estrutura de repetição para simular a movimentação da Torre para a direita.
    int i;
    printf("Movimentação da Torre:\n");
    for (i = 1; i <= 5; i++){
        printf("Direita\n");
    }

    // Implementação de Movimentação do Bispo
    // Estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    i = 1;
    while (i <= 5){
        printf("Cima, Direita\n");
        i++;
    }
    // Implementação de Movimentação da Rainha
    // Estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    i = 0;
    printf("Movimentação da Rainha:");
    do {
            printf("Esquerda\n");
            i++;

    } while (i <= 8);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

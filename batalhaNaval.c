#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; // ARRAY PARA IDENTIFICAR AS COLUNAS
    int tabuleiro[10][10] = {0}; // Matriz Tabuleiro

    printf("Tabuleiro de batalha naval:\n");

    // Imprime as letras da linha de cima (colunas)

printf("  "); // Espaço inicial para alinhar com os números da lateral
    for (int l = 0; l < 10; l++) {  
        printf("%c ", linha[l]);
    }
    printf("\n"); // Pular linha se não os numeros começaram na mesma linha que as vogais

    // Loop para imprimir o tabuleiro com números na lateral
    for (int i = 0; i < 10; i++) {
        printf("%d ", i); // número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}
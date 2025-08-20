#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define LINHAS 10
#define COLUNAS 10

int main() {
//____________________________________________________________________________________________________________________
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; // ARRAY PARA IDENTIFICAR AS COLUNAS
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Matriz Tabuleiro com definidos no inicio
    int soma = 0; // RESULTADO DA LINHA + COLUNA PARA DAR O TABULEIRO
    int navioVertical [3] = {3,3,3}; // Array Navio 1
    int navioHorizontal [3] = {3,3,3}; // Array Navio 2
    int navioDiagonal1 [3] = {3,3,3}; // Array Navio 3
    int navioDiagonal2 [3] = {3,3,3}; // Array Navio 3

//________________________________________________________________________________________________________________________   
    printf("Tabuleiro de batalha naval:\n");
//________________________________________________________________________________________________________________________
    // Imprime as letras da linha de cima (colunas)

printf("  "); // Espaço inicial para alinhar com os números da lateral
    for (int i = 0; i < 10; i++) {  
        printf("%c ", linha[i]);
    }
    printf("\n"); // Pular linha se não os numeros começaram na mesma linha que as vogais

//_________________________________________________________________________________________________________________________
            // Navio 1 Horizontal

    int linha0 = 0;
    int colunaG = 6;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha0][colunaG + i] = navioHorizontal[i];
    }
//_________________________________________________________________________________________________________________________

    // Navio 2 Vertical

    int linha2 = 2;
    int colunaj = 9;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][colunaj] = navioVertical[i];
    }
//_________________________________________________________________________________________________________________________

    // Navio 3 Diagonal 1

    int linha5 = 5;
    int colunaE = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha5 + i][colunaE + i] = navioDiagonal1[i];
    }

    //____________________________________________________________________________________________________________________

        // Navio 4 Diagonal 2

    int linha7 = 7;
    int colunaD = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha7 + i][colunaD - i] = navioDiagonal2[i];

    }
//_________________________________________________________________________________________________________________________
        // Loop para imprimir o tabuleiro com números na lateral

    for (int i = 0; i < COLUNAS; i++) {
            printf ("%d ", i); // Imprimi a Coluna Numerica
        for( int j = 0; j < LINHAS; j++){
            printf ("%d ", tabuleiro[i][j]);

           
        }
            
        
        printf("\n");
    }
//__________________________________________________________________________________________________________________________




    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
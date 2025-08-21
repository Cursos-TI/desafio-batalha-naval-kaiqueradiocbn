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

    # include <stdio.h>

    #define Linha 10
    #define Coluna 10

    int main (){

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; // ARRAY PARA IDENTIFICAR AS COLUNAS
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Matriz Tabuleiro com definidos no inicio
    int soma = 0; // RESULTADO DA LINHA + COLUNA PARA DAR O TABULEIRO
    
    //________________________________________________________________________________________________
        printf("Tabuleiro de batalha naval:\n");
    //________________________________________________________________________________________________
    // Imprime as letras da linha de cima (colunas)

    printf("  "); // Espaço inicial para alinhar com os números da lateral
    for (int i = 0; i < 10; i++) {  
        printf("%c ", linha[i]);
    }
    printf("\n"); // Pular linha se não os numeros começaram na mesma linha que as vogais

//_____________________________________________________________________________________________________  























//________________________________________________________________________________________________________________________
        // Loop para imprimir o tabuleiro com números na lateral

    for (int i = 0; i < LINHAS; i++) {
            printf ("%d ", i); // Imprimi a Coluna Numerica
        for( int j = 0; j < COLUNAS; j++){
            printf ("%d ", tabuleiro[i][j]);

           
        }
            
        
        printf("\n");
    }
//__________________________________________________________________________________________________________________________




        return 0;
    }
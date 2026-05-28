
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza operações e verificações em uma      *
//*matriz quadrada de ordem 4x4. O código exibe a matriz   *
//*em formato de grade, calcula a soma da diagonal         *
//*principal e da diagonal secundária e verifica se a      *
//*matriz é simétrica em relação à diagonal principal.     *
//*Uma matriz é considerada simétrica quando seus elementos*
//*posicionados em relação espelhada na diagonal principal *
//*possuem os mesmos valores.                              *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Declaração e inicialização da matriz 4x4
    int matriz[4][4] = {
        {1,1,2,2},
        {3,3,4,4},
        {5,5,6,6},
        {7,7,8,8}
    };

    // Variáveis para armazenar as somas das diagonais
    int diagonalP = 0, diagonalS = 0;

    // Variável de controle da simetria
    int simetrica = 1;

    // ==========================
    // EXIBICAO DA MATRIZ EM GRID
    // ==========================

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            // Exibe os elementos da matriz
            printf("%2d", matriz[i][j]);

            // Exibe separadores visuais
            if(j < 3){

                printf("|");
            }

            // Soma da diagonal principal
            if(i == j){

                diagonalP += matriz[i][j];
            }

            // Soma da diagonal secundária
            else if((i + j) == 3){

                diagonalS += matriz[i][j];
            }
        }

        // Exibe separador entre linhas
        if(i < 3){

            printf("\n--+--+--+--\n");
        }
    }

    // ==========================================
    // VERIFICACAO DE SIMETRIA DA MATRIZ
    // ==========================================

    /*
    Uma matriz é simétrica quando:

    matriz[i][j] == matriz[j][i]

    para todas as posições da matriz.
    */

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            // Verifica se os elementos espelhados são iguais
            if(matriz[i][j] != matriz[j][i]){

                simetrica = 0;
            }
        }
    }

    // Exibe os valores das diagonais
    printf("\n\ndiagonal principal: %d\ndiagonal secundaria: %d",
           diagonalP, diagonalS);

    // Exibe o resultado da verificação de simetria
    if(simetrica){

        printf("\nA matriz e simetrica");
    }
    else{

        printf("\nA matriz nao e simetrica");
    }

    return 0;
}


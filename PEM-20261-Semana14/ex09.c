///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza a multiplicação de duas matrizes     *
//*quadradas de ordem 3x3 utilizando estruturas de         *
//*repetição aninhadas. O usuário informa os valores das   *
//*duas matrizes e o programa calcula uma terceira matriz  *
//*resultante a partir da multiplicação matricial. Ao final*
//*da execução, as três matrizes são exibidas na tela em   *
//*formato organizado.                                     *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Declaração das matrizes principais
    int matriz[3][3];
    int matrizdois[3][3];

    // Entrada de dados da primeira matriz
    printf("declare os valores da matriz 1:");

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            printf("\n|%d||%d| : ", i, j);

            scanf("%d", &matriz[i][j]);
        }
    }

    // Entrada de dados da segunda matriz
    printf("declare os valores da matriz 2:");

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            printf("\n|%d||%d| : ", i, j);

            scanf("%d", &matrizdois[i][j]);
        }
    }

    // Matriz resultado inicializada com zero
    int matriztres[3][3] = { 0 };

    // Variável auxiliar para armazenar a soma das multiplicações
    int soma;

    // Processo de multiplicação das matrizes
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            soma = 0;

            // Multiplicação linha x coluna
            for(int k = 0; k < 3; k++){

                soma += matriz[i][k] * matrizdois[k][j];
            }

            // Armazena o resultado na terceira matriz
            matriztres[i][j] = soma;
        }
    }

 
    // EXIBICAO MATRIZ 1
 

    printf("matriz 1:\n");

    for(int i = 0; i < 3; i++){

        printf("\n| ");

        for(int j = 0; j < 3; j++){

            printf("%3d |", matriz[i][j]);
        }
    }

   
    // EXIBICAO MATRIZ 2
  

    printf("\n\nmatriz 2:\n");

    for(int i = 0; i < 3; i++){

        printf("\n|");

        for(int j = 0; j < 3; j++){

            printf("%3d |", matrizdois[i][j]);
        }
    }

   
    // EXIBICAO MATRIZ 3
  

    printf("\n\nmatriz 3:\n");

    for(int i = 0; i < 3; i++){

        printf("\n| ");

        for(int j = 0; j < 3; j++){

            printf("%3d |", matriztres[i][j]);
        }
    }

    return 0;
}


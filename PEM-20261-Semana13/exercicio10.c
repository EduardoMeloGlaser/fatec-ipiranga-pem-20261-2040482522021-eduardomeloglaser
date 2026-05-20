/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa utiliza ponteiros para percorrer todos os    *
//elementos de uma matriz 4x4. Durante a execução, ele     *
//identifica o maior valor presente na matriz e exibe sua  *
//posição correspondente em linha e coluna utilizando      *
//ponteiro.                                                *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

int main(){

    // Declaração e inicialização da matriz 4x4
    int matriz[4][4] =
    {
        1,2,3,4,
        5,6,7,8,
        9,10,11,12,
        13,14,15,16
    };

    // Inicializa o maior valor com o primeiro elemento da matriz
    int maiorValor = matriz[0][0];

    // Variáveis para armazenar a linha e a coluna do maior valor
    int linha = 0, coluna = 0;

    // Ponteiro para um vetor de 4 inteiros
    int (*p)[4] = matriz;

    // Percorre todos os elementos da matriz
    for(int i=0; i<16; i++){

        // Verifica se o elemento atual é maior
        if(maiorValor < *(p[0] + i)){

            // Atualiza o maior valor
            maiorValor = *(p[0] + i);

            // Calcula a linha do elemento
            linha = i/4;

            // Calcula a coluna do elemento
            coluna = i%4;
        }
    }

    // Exibe o maior valor e sua posição na matriz
    printf("\n\nMAIOR VALOR: %d(%d,%d)",
           maiorValor, linha+1, coluna+1);

    return 0;

}
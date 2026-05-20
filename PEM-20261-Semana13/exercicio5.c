/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra o uso de ponteiros com vetores na  *
//linguagem C. Ele utiliza um ponteiro para acessar os     *
//elementos de um vetor e exibe os valores antes e depois  *
//de realizar uma multiplicação por 2 nas expressões       *
//calculadas a partir do ponteiro.                         *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

int main(){

    // Declaração e inicialização do vetor
    int vetor[5] = {1,2,3,4,5};

    // Ponteiro apontando para o primeiro elemento do vetor
    int *p = vetor;

    printf("ANTES\n\n");

    // Exibe os valores utilizando o ponteiro
    for(int i=0; i<5; i++){

        // Mostra o valor apontado somado ao índice
        printf("%d ", *p+i);
    };

    printf("\n\nDEPOIS\n\n");

    // Exibe os valores multiplicados por 2
    for(int i=0; i<5; i++){

        // Multiplica o valor obtido pela expressão por 2
        printf("%d ", (*p+i)*2);
    };

    return 0;
}
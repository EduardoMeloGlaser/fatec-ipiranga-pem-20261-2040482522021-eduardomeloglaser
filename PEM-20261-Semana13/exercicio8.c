/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra operações com ponteiros em um vetor* 
//do tipo double. Ele utiliza ponteiros para acessar       *
//posições específicas do vetor, calcula a diferença entre *
//os valores apontados e percorre os elementos entre essas *
//posições, mostrando como a aritmética de ponteiros       *
//funciona em C.                                           *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

int main(){

    // Declaração e inicialização do vetor
    double array[10] = {2,4,6,8,10,12,14,16,18,20};

    // Ponteiros apontando inicialmente para o começo do vetor
    double *pTerceiro = array;
    double *pOitavo = array;

    // Move os ponteiros para as posições desejadas
    pTerceiro += 2;
    pOitavo += 7;

    // Exibe a diferença entre os valores apontados
    printf("A diferenca entre o terceiro e o oitavo numero e de: %.2lf",
           *pOitavo - *pTerceiro);

    /*
        O compilador calcula a diferença entre ponteiros assim:

        (endereco_final - endereco_inicial) / sizeof(double)

        Como ambos são ponteiros do tipo double,
        o resultado representa a quantidade de elementos
        entre eles, e não a quantidade de bytes.
    */

    printf("\n\nINTERVALO ENTRE OS DOIS PONTEIROS: ");

    // Percorre os elementos entre o terceiro e o oitavo
    for(int i = 2; i<8; i++){

        // Exibe o valor atual apontado
        printf("\n%.2lf", *pTerceiro);

        // Avança o ponteiro para o próximo elemento
        pTerceiro++;
    }

    return 0;
}
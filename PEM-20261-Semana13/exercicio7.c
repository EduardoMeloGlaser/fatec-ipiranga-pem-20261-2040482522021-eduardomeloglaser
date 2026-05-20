/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa utiliza ponteiros para percorrer um vetor de *
//inteiros. Durante a execução, ele exibe os endereços de  *
//memória dos elementos, calcula a soma total, a média dos *
//valores, além de identificar o menor e o maior número    *
//presente no vetor.                                       *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

int main(){

    // Declaração e inicialização do vetor
    int array[8] = {1,2,3,4,5,6,7,8};

    // Ponteiro apontando para o primeiro elemento do vetor
    int *p = array;

    // Variáveis auxiliares
    int somaArray = 0, maiorArray, menorArray;

    // Variável para armazenar a média
    float mediaArray = 0;

    // Percorre todos os elementos do vetor
    for(int i = 0; i<8; i++){

        // Na primeira repetição, define o maior e menor valor
        if(i==0){
            maiorArray = *p;
            menorArray = *p;
        }

        // Verifica se o valor atual é menor
        if(*p < menorArray){
            menorArray = *p;
        }

        // Verifica se o valor atual é maior
        else if(*p > maiorArray){
            maiorArray = *p;
        }

        // Exibe o endereço e o valor atual do vetor
        printf("ENDERECO ARRAY %d NUMERO %d: %p\n", i+1, *p, p);

        // Soma os elementos do vetor
        somaArray += *p;

        // Avança o ponteiro para a próxima posição
        *p++;
    }

    // Calcula a média dos elementos
    mediaArray = somaArray/8;

    // Exibe os resultados finais
    printf("\n\nSOMA GERAL: %d\nMEDIA GERAL: %.2f\nMENOR NUMERO: %d\nMAIOR NUMERO: %d",
           somaArray, mediaArray, menorArray, maiorArray);

    return 0;
}
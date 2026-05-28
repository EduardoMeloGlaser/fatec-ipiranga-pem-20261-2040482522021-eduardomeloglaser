
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra o uso de ponteiros em vetores      *
//*inteiros, exibindo os valores armazenados, seus         *
//*respectivos endereços de memória e realizando operações *
//*aritméticas com os elementos do array. O código também  *
//*calcula a soma dos valores do vetor, apresenta uma      *
//*versão dobrada dos elementos e demonstra conceitos de   *
//*aritmética de ponteiros e tamanho de tipos em memória.  *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Variável que armazena a soma dos elementos
    int soma = 0;

    // Vetor inicializado com valores inteiros
    int vetor[6] = {1,2,3,4,5,6};

    // Ponteiro apontando para o primeiro elemento do vetor
    int *p = vetor;
    
    // ==========================
    // EXIBICAO DOS ELEMENTOS
    // ==========================

    for(int i = 0; i < 6; i++, p++){

        // Exibe índice, valor e endereço do elemento
        printf("%d: %d\nENDERECO: %p\n\n", i, *p, p);

        // Soma os elementos do vetor
        soma += *p;
    }

    printf("\n\nVETOR DOBRADO\n\n");

    /*
    Neste ponto o ponteiro p já avançou até o final do vetor.
    Para reutilizá-lo corretamente, seria necessário fazer:

    p = vetor;

    antes do próximo laço.
    */

    // Reinicializa o ponteiro para o início do vetor
    p = vetor;

   
    // EXIBICAO DOS VALORES DOBRADOS
   

    for(int i = 0; i < 6; i++, p++){

        // Exibe o dobro de cada elemento
        printf("%d: %d\nENDERECO: %p\n\n", i, (*p) * 2, p);
    }

    // Exibe a soma total dos elementos
    printf("\n\nsoma dos valores do vetor: %d\n\n", soma);
    
    /*
    sizeof(int):
    retorna a quantidade de bytes ocupados por um inteiro.

    Aritmética de ponteiros:
    mostra o espaçamento lógico entre posições consecutivas
    do vetor.
    */

    printf("o tamanho de int e: %d bytes\n"
           "o espacamento entre os valores do vetor e: %d bytes",
           sizeof(int),
           sizeof((p + 1) - p));

    return 0;
}


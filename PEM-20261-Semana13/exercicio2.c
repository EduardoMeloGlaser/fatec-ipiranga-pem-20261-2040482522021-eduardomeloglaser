/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra o uso da função sizeof em conjunto *
//com ponteiros para mostrar o tamanho, em bytes, de       * 
//diferentes tipos de dados na linguagem C (char, int,     *
//float e double). Além disso, o código apresenta          *
//comentários explicando as características e a quantidade * 
//de memória ocupada por cada tipo.                        *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

int main(){

    // Declaração de variáveis de diferentes tipos
    int a = 67;
    float b = 67.67;
    char c = 'c';
    double d = 51.23;

    // Ponteiros armazenando o endereço das variáveis
    int *ptrA = &a;
    float *ptrB = &b;
    char *ptrC = &c;
    double *ptrD = &d;

    // Exibe o tamanho em bytes de cada tipo de dado
    // usando a função sizeof aplicada ao valor apontado pelos ponteiros
    printf("tamanho de inteiro: %zu bytes\ntamanho de float: %zu bytes\ntamanho de char: %zu bytes\ntamanho de double: %zu bytes", sizeof(*ptrA), sizeof(*ptrB), sizeof(*ptrC), sizeof(*ptrD));

    /*
    char:
    ocupa apenas um caractere, logo utiliza 1 byte na memória.

    int:
    normalmente ocupa 4 bytes e é utilizado para armazenar números inteiros.

    float:
    geralmente ocupa 4 bytes e armazena números decimais.

    double:
    armazena números decimais com maior precisão,
    ocupando mais espaço na memória.
    */

    return 0;
}
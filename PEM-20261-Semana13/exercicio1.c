/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra o uso de ponteiros na linguagem C. *
//Ele cria variáveis dos tipos inteiro, float e caractere, *
//armazena seus endereços em ponteiros e exibe na tela os  *
//valores e endereços de memória das variáveis, além dos   *
//valores acessados pelos ponteiros.                       *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

int main(){

    // Declaração de variáveis de tipos diferentes
    int a = 67;
    float b = 67.67;
    char c = 'c';

    // Ponteiros armazenando o endereço das variáveis
    int *ptrA = &a;
    float *ptrB = &b;
    char *ptrC = &c;

    // Exibe informações da variável inteira:
    // valor da variável,
    // endereço da variável,
    // endereço armazenado no ponteiro,
    // valor acessado pelo ponteiro
    printf("INTEIRO\n\n valor: %d\n endereco: %p\n endereco ponteiro: %p\n valor ponteiro: %d\n\n",
           a, &a, ptrA, *ptrA);

    // Exibe informações da variável float
    printf("FLOAT\n\n valor: %f\n endereco: %p\n endereco ponteiro: %p\n valor ponteiro: %f\n\n",
           b, &b, ptrB, *ptrB);

    // Exibe informações da variável char
    printf("CHAR\n\n valor: %c\n endereco: %p\n endereco ponteiro: %p\n valor ponteiro: %c",
           c, &c, ptrC, *ptrC);

    return 0;
}
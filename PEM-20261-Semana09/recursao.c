///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//* Responsável pela implementação das funções recursivas  *
//do programa. Nele estão as funções para converter números*
//decimais em binário, calcular potência, somar dígitos de *
//um número e realizar leitura de valores inteiros.        *
//* Data - 11/05/2026                                      *
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/


#include <stdio.h>


// Função recursiva que converte um número decimal para binário
void decToBin(int numero){

    // Enquanto o número for maior que 1,
    // continua dividindo por 2 recursivamente
    if(numero > 1){ 
        decToBin(numero/2);
    }

    // Imprime o resto da divisão por 2
    // (0 ou 1), formando o número binário
    printf("%d" ,numero%2);

    return;
}

// Função recursiva para calcular potência
// base^exp
int potencia(int base, int exp){

    // Verifica se o expoente é negativo
    if(exp < 0){

        printf("expoente tem que ser positivo, exp:");

        // Retorna o próprio expoente como erro
        return exp;
    }

    // Caso base da recursão:
    // qualquer número elevado a 0 é 1
    else if(exp == 0){
        return 1;
    }

    // Multiplica a base por ela mesma
    // diminuindo o expoente até chegar em 0
    return base * potencia(base, exp - 1);

}

// Função recursiva que soma os dígitos de um número
int somaDigitos(int n){

    // Caso base:
    // quando n for menor ou igual a 0,
    // encerra a recursão
    if(n <= 0){
        return 0;
    }

    // Soma o último dígito (n % 10)
    // com o restante do número (n / 10)
    return n % 10 + somaDigitos(n / 10);

}

// Função para ler um número inteiro usando ponteiro
void scan(int *n){

    // Lê um valor inteiro e armazena
    // no endereço apontado por n
    scanf("%d", n);

    return;
}
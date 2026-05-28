
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O arquivo implementa funções para manipulação de strings*
//*utilizando ponteiros e recursão de memória em linguagem *
//*C. As funções desenvolvidas permitem contar vogais em   *
//*uma string, inverter os caracteres diretamente no vetor *
//*original e verificar se uma palavra é um palíndromo. O  *
//*código utiliza operações com ponteiros, laços de        *
//*repetição e funções da biblioteca string.h.             *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>
#include <string.h>

// FUNCAO PARA CONTAR VOGAIS


int contaVogais(char *s){

    // Variável contadora de vogais
    int cont = 0;

    // Percorre a string até o caractere nulo
    while(*s != '\0'){

        // Verifica se o caractere atual é uma vogal
        if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U'){
            cont++;
        }

        // Avança para o próximo caractere
        s++;
    }

    // Retorna a quantidade de vogais
    return cont;
};


// FUNCAO PARA INVERTER STRING


void inverteCString(char *s){

    // Obtém o último índice válido da string
    int tamanho = strlen(s) - 1;

    // Variável auxiliar para troca de caracteres
    char reserva;

    // Percorre metade da string realizando trocas
    for(int i = 0; i < tamanho/2; i++){

        // Armazena temporariamente o caractere final
        reserva = *(s + (tamanho - i));
        
        // Troca os caracteres das extremidades
        *(s + (tamanho - i)) = *(s + i);

        *(s + i) = reserva;
    }
};


// FUNCAO PARA VERIFICAR PALINDROMO


int ePalindromo(char *s){

    // Obtém o último índice válido da string
    int tamanho = strlen(s) - 1;

    /*
    Uma palavra é considerada palíndromo quando
    pode ser lida da mesma forma da esquerda
    para a direita e vice-versa.
    */

    // Percorre metade da string comparando extremos
    for(int i = 0; i < tamanho/2; i++){

        // Caso encontre caracteres diferentes
        if(*(s + (tamanho - i)) != *(s + i)){

            return 0;
        }
    }

    // Se todas as posições forem iguais
    return 1;
};


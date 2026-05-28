
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa implementa a sequência de Collatz utilizando *
//*estruturas de repetição, condicionais e ponteiros. O    *
//*usuário informa um número inteiro positivo e o programa *
//*aplica repetidamente as regras da sequência: caso o     *
//*número seja par, ele é dividido por 2; caso seja ímpar, *
//*o valor é multiplicado por 3 e somado com 1. O processo *
//*continua até que o valor chegue em 1, exibindo todos os *
//*números gerados durante a execução.                     *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Variável que armazena o número digitado
    int n;

    // Ponteiro apontando para a variável n
    int *pN = &n;

    // Solicita um número positivo ao usuário
    printf("escreva um numero positivo >= 1: ");

    // Validação para garantir valor maior ou igual a 1
    do{
        scanf("%d" ,pN);

    }while(n < 1);

    // Estrutura principal da sequência de Collatz
    do{

        // Verifica se o número é par
        if(n % 2 == 0){

            // Divide o número por 2
            n = n/2;
        }

        // Caso o número seja ímpar
        else{

            // Multiplica por 3 e soma 1
            n = 3*n + 1;
        }

        // Exibe o valor atual da sequência
        printf("\n%d", *pN);

    }while(n != 1);

    return 0;
}



///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza operações estatísticas básicas em um *
//*vetor de números reais. O usuário informa 10 valores e  *
//*o código calcula a média dos elementos, identifica o    *
//*maior e o menor valor armazenado e também calcula a soma*
//*dos elementos que estão acima da média. O programa      *
//*utiliza vetores, estruturas de repetição e condicionais *
//*para processar os dados inseridos pelo usuário.         *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Vetor que armazena 10 números reais
    float vetor[10];

    // Variáveis auxiliares
    float media, maior, menor, soma = 0;

    // Leitura dos valores do vetor
    for(int i = 0; i < 10; i++){

        scanf("%f", &vetor[i]);

        // Verifica o menor valor do vetor
        if(i == 0 || vetor[i] < menor){

            menor = vetor[i];
        }

        // Verifica o maior valor do vetor
        else if(i == 0 || vetor[i] > maior){

            maior = vetor[i];
        }

        // Soma total dos elementos
        soma += vetor[i];
    }

    // Cálculo da média dos elementos
    media = soma/10;

    /*
    Operações realizadas:

    - cálculo da média do vetor
    - identificação do maior valor
    - identificação do menor valor
    - soma dos valores acima da média
    */

    // Reinicia a variável soma
    soma = 0;

    // Soma apenas os valores acima da média
    for(int i = 0; i < 10; i++){

        if(vetor[i] > media){

            soma += vetor[i];
        }
    }

    // Exibição dos resultados
    printf("a media do vetor e: %.2f\no maior valor e: %.2f\no menor valor e: %.2f\na soma dos valores acima da media e: %.2f",media, maior, menor, soma);

    return 0;
}


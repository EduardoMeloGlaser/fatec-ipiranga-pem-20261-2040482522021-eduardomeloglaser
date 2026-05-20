/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa utiliza ponteiros para calcular estatísticas *
//de um vetor de inteiros. Ele percorre os elementos do    *
//array, calcula a soma, a média, o maior e o menor valor, *
//exibindo os resultados ao final da execução.             *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

// Função responsável por calcular estatísticas do vetor
void estatisticas(int *v, int *soma, float *media, int *maior, int *menor){

    printf("ARRAY: ");

    // Percorre todos os elementos do vetor
    for(int i=0; i<6; i++){

        // Exibe o valor atual do vetor
        printf("%d ", *(v+i));

        // Soma os elementos do vetor
        *soma += *(v+i);

        // Verifica se o valor atual é maior
        if(*maior < *(v+i)){
            *maior = *(v+i);
        }

        // Verifica se o valor atual é menor
        else if(*menor < *(v+i)){
            *menor = *(v+i);
        }

    }

    printf("\n\n");

    // Calcula a média dos valores
    *media = (*soma)/6.0;

}

int main(){

    // Declaração e inicialização do vetor
    int array[6] = {1,2,3,4,5,6};

    // Variáveis para armazenar resultados
    int soma = 0, maior, menor;

    // Ponteiros para as variáveis
    int *pArray = array;
    int *pSoma = &soma;
    int *pMaior = &maior;
    int *pMenor = &menor;

    // Inicializa maior e menor com o primeiro valor do vetor
    *pMenor = *pArray;
    *pMaior = *pArray;

    // Variável e ponteiro para média
    float media;
    float *pMedia = &media;

    // Chama a função para calcular as estatísticas
    estatisticas(pArray, pSoma, pMedia, pMaior, pMenor);

    // Exibe os resultados finais
    printf("SOMA ARRAY: %d\nMEDIA ARRAY: %.2f\nMAIOR NUMERO: %d\nMENOR NUMERO: %d",
           *pSoma, *pMedia, *pMaior, *pMenor);

    return 0;
}
/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra o uso de ponteiros para percorrer  *
//um vetor em ordem inversa. Ele mostra os elementos do    *
//vetor na ordem original e, em seguida, utiliza uma       *
//função com aritmética de ponteiros para exibir os        *
//valores do último elemento até o primeiro.               *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

// Função responsável por exibir o vetor invertido
void inverter(int *arr, int n){

    // Move o ponteiro uma posição para trás,
    // apontando para o último elemento válido do vetor
    *(arr--);

    // Percorre o vetor do fim para o começo
    for(int i=0; i<n; n--){

        // Exibe o valor atual apontado
        printf("%d", *arr--);
    }

};

int main(){

    // Declaração e inicialização do vetor
    int array[7] = {1,2,3,4,5,6,7};

    // Calcula o tamanho do vetor
    int tamanhoArray = sizeof(array)/4;

    // Ponteiro para o primeiro elemento do vetor
    int *pArrayComeco = array;

    // Ponteiro para a posição após o último elemento
    int *pArrayFim = array+tamanhoArray;

    // Exibe o vetor antes da inversão
    printf("ANTES:\n\n");

    for(int i=0; i<tamanhoArray; i++){

        // Mostra os elementos em ordem normal
        printf("%d", *(pArrayComeco + i));
    }

    // Exibe o vetor invertido
    printf("\n\nDEPOIS:\n\n");

    inverter(pArrayFim, tamanhoArray);

    return 0;
}
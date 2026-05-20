/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa implementa uma ordenação de vetor utilizando *
//ponteiros e trocas de valores entre posições do array.   *
//A função selectionSort percorre o vetor comparando os    *
//elementos e reorganizando-os em ordem crescente, enquanto*
//a função trocar realiza a troca entre dois valores.      *
//Durante a execução, o vetor é exibido após cada troca    *
//realizada.                                               *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

// Função responsável por trocar os valores
// de duas posições do vetor
void trocar(int *a, int *b){

    // Variável auxiliar para armazenar temporariamente um valor
    int c;

    // Ponteiro apontando para a variável auxiliar
    int *pC = &c;

    // Armazena o valor de b em c
    *pC = *b;

    // Copia o valor de a para b
    *b = *a;

    // Copia o valor armazenado em c para a
    *a = *pC;
}

// Função responsável por ordenar o vetor
// utilizando o método Selection Sort
void selectionSort(int *arr, int n){

    // Percorre o vetor
    for(int i=0; i<n; i++){

        // Compara cada elemento com os demais
        for(int j=0; j<n; j++){

            // Verifica se o elemento atual é menor
            if(*(arr+i) < *(arr+j)){

                // Troca os valores das posições
                trocar((arr+i), (arr+j));

                // Exibe o vetor após cada troca
                for(int i=0; i<8; i++){
                    printf("%2d ", *(arr+i));
                }

                printf("\n");

            }

        }

    }

};

int main(){

    // Declaração e inicialização do vetor
    int array[8] = {34, 7, 89, 12, 56, 3, 71, 25};

    // Exibe o vetor antes da ordenação
    for(int i=0; i<8; i++){
        printf("%2d ", array[i]);
    }

    printf("\n");

    // Chama a função de ordenação
    selectionSort(array, 8);

    return 0;

}
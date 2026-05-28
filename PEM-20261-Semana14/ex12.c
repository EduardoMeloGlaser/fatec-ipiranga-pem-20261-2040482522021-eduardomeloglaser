
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa implementa funções utilizando ponteiros para *
//*realizar operações em variáveis e vetores. A função     *
//*troca realiza a troca de valores entre duas variáveis,  *
//*a função minMax identifica o maior e o menor elemento de*
//*um vetor inteiro, e a função normalizaVetor normaliza os*
//*valores de um vetor de números reais dividindo todos os *
//*elementos pelo maior valor encontrado. O programa também*
//*exibe os resultados antes e depois das operações.       *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

// ======================================
// FUNCAO PARA TROCAR VALORES
// ======================================

void troca(int *a, int *b){

    // Variável auxiliar para troca
    int c = *a;

    // Realiza a troca dos valores
    *a = *b;
    *b = c;
};

// ======================================
// FUNCAO PARA IDENTIFICAR MINIMO E MAXIMO
// ======================================

void minMax(int *v, int n, int *min, int *max){

    // Percorre todos os elementos do vetor
    for(int i = 0; i < n; i++){

        // Atualiza o maior valor
        if(*(v + i) > *max){

            *max = *(v + i);
        }

        // Atualiza o menor valor
        if(*(v + i) < *min){

            *min = *(v + i);
        }
    }
};

// ======================================
// FUNCAO PARA NORMALIZAR VETOR
// ======================================

void normalizaVetor(float *v, int n){

    // Inicializa o maior valor com o primeiro elemento
    float maior = *v;
    
    // Procura o maior elemento do vetor
    for(int i = 0; i < n; i++){

        if(maior < *(v + i)){

            maior = *(v + i);
        }
    }

    // Divide todos os elementos pelo maior valor
    for(int i = 0; i < n; i++){

        *(v + i) = (*(v + i)) / maior;
    }
};

// ======================================
// FUNCAO PRINCIPAL
// ======================================

int main(){

    // ==========================
    // TESTE DA FUNCAO TROCA
    // ==========================

    int a = 1;
    int b = 2;

    // Ponteiros para as variáveis
    int *pA = &a, *pB = &b;

    // Exibe valores antes da troca
    printf("TROCA\n\nANTES\n\na = %d\nb = %d", a, b);

    // Realiza a troca
    troca(pA, pB);

    // Exibe valores após a troca
    printf("\n\nDEPOIS\n\na = %d\nb = %d", a, b);

    // ==========================
    // TESTE DA FUNCAO MIN/MAX
    // ==========================

    int vetor[5] = {1,2,3,4,5};

    int max = vetor[0], min = vetor[0];

    // Ponteiros auxiliares
    int *pVetor = vetor, *pMax = &max, *pMin = &min;

    // Exibe valores antes da função
    printf("\n\nMINIMO/MAXIMO\n\nANTES\n\nmax = %d\nmin = %d", max, min);

    // Identifica maior e menor elemento
    minMax(pVetor, 5, pMin, pMax);

    // Exibe resultados
    printf("\n\nDEPOIS\n\nmax = %d\nmin = %d", max, min);

    // ==========================
    // TESTE DA NORMALIZACAO
    // ==========================

    float array[5] = {1,2,3,4,5};

    // Ponteiro para o vetor
    float *pArray = array;

    // Exibe vetor antes da normalização
    printf("\n\nANTES\n\n");

    for(int i = 0; i < 5; i++){

        printf("%.2f ", *(pArray + i));
    }

    printf("\n\nDEPOIS\n\n");

    // Normaliza os valores do vetor
    normalizaVetor(pArray, 5);

    // Exibe vetor após a normalização
    for(int i = 0; i < 5; i++){

        printf("%.2f ", *(pArray + i));
    }

    return 0;
}


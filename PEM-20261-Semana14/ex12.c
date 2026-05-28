#include <stdio.h>

void troca(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
};

void minMax(int *v, int n, int *min, int *max){

    for(int i=0; i<n; i++){
        if(*(v+i)>*max){
            *max = *(v+i);
        }
        if(*(v+i)<*min){
            *min = *(v+i);
        }
    }

};

void normalizaVetor(float *v, int n){

    float maior = *v;
    
    for(int i=0; i<n; i++){
        if(maior<*(v+i)){
            maior = *(v+i);
        }
    }
    for(int i=0; i<n; i++){
        *(v+i) = (*(v+i))/maior;
    }

};

int main(){

    //troca
    int a = 1;
    int b = 2;
    int *pA = &a, *pB = &b;

    printf("TROCA\n\nANTES\n\na = %d\nb = %d", a, b);
    troca(pA,pB);
    printf("\n\nDEPOIS\n\na = %d\nb = %d", a, b);

    //min max
    int vetor[5] = {1,2,3,4,5};
    int max = vetor[0], min = vetor[0];
    int *pVetor = vetor, *pMax = &max, *pMin = &min;
    printf("\n\nMINIMO/MAXIMO\n\nANTES\n\nmax = %d\nmin = %d", max, min);
    minMax(pVetor, 5, pMin, pMax);
    printf("\n\nDEPOIS\n\nmax = %d\nmin = %d", max, min);

    // normalizar vetor
    float array[5] = {1,2,3,4,5};
    float *pArray = array;
    printf("\n\nANTES\n\n");

    for(int i=0; i<5; i++){
        printf("%.2f ", *(pArray+i));
    }
    printf("\n\nDEPOIS\n\n");
    normalizaVetor(pArray, 5);
    for(int i=0; i<5; i++){
        printf("%.2f ", *(pArray+i));
    }

    return 0;

}
#include <stdio.h>

//validar peso de carregamentos
//sistema recebe um lote de pacotes(vetor)

//gerenciar o peso de uma frota de 10 pacotes 
//uso de ponteiros 
//peso deve ser tipo float
//implementar função:  void processarCarga(float *vetor, int tamanho)
//  essa função deve calcular a média dor pesos
//  localizar preços que exceadam a média em mais de 10%
//  remover 5% do peso via ponteiro  
//  exibir o resultado antes e depois 

//float peso produtos[10] 
//float *p = &produtos 

float media = 0;
int tamanho = 10;


void lerPesoProdutos(float *pesoProdutos, int tamanho){


    for(int i = 0;i < 10; i++){

        printf("PRODUTO %d: ", i+1);
        scanf("%f" ,&*pesoProdutos+i);
        media += *(pesoProdutos+i);
    }
    media = media/tamanho;

};

void processarCarga(float *vetor, int tamanho){

    float valorFinal[10] = { 0 };
    float *pValorFinal = valorFinal;
    float *mediaAtualizada;
    mediaAtualizada = &media;
    *mediaAtualizada = *mediaAtualizada*1.1;

    //mostra a lista

    printf("===================================\n               ANTES               \n===================================\n\n\n");           
    for(int i = 0;i < tamanho; i++){
        printf("PRODUTO %d: %.2f\n", i+1 ,*(vetor+i));
        if(*(vetor+i) > *mediaAtualizada){
            *(pValorFinal+i) = (*(vetor+i))*0.95; 
        }
        else{
            *(pValorFinal+i) = *(vetor+i);
        }
    }

    printf("\n\nmedia: %.2f\n\n", media);

    printf("===================================\n               DEPOIS               \n===================================\n\n\n");

    for(int i = 0;i < tamanho; i++){
        printf("PRODUTO %d: %.2f\n",i+1 ,*(pValorFinal+i));
    }


};

int main (){

    float pesoProdutos[10] = { 0 };

    lerPesoProdutos(pesoProdutos, tamanho);
    processarCarga(pesoProdutos, tamanho);

    return 0;
}
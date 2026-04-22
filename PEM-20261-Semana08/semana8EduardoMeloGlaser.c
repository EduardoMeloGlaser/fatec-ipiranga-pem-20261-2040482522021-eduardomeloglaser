///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//* Objetivo é criar um programa que lê o peso de 10       *
//  produtos, calcular a média do peso e então alterar os  *
//  valores de acordo com a condição especificada, caso    *
//  o peso seja maior que a média*1.1 o peso do produto    *
//  terá um reajuste do peso*0.95, o programa tem como foco*
//  alterar os valores das variáveis usando ponteiros      *
//  sempre que der                                         *
//* Data - 22/04/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/


#include <stdio.h>

float media = 0; //define a variavel media
int tamanho = 10; // define a variavel tamanho


void lerPesoProdutos(float *pesoProdutos, int tamanho){ // void para ler o valor do peso de todos os produtos


    for(int i = 0;i < tamanho; i++){ // looping for para ler os valores 

        printf("PRODUTO %d: ", i+1);
        scanf("%f" ,pesoProdutos+i); //leitor de valores que coloca o valor direto no endereço de memória usando ponteiros
        media += *(pesoProdutos+i); // calculo da media
    }
    media = media/tamanho; // calculo de media

};

void processarCarga(float *vetor, int tamanho){ // void para processar os valores lidos e realizar as especificações do exercicio

    // definição de variáveis floats e ponteiros

    float valorFinal[10] = { 0 };
    float *pValorFinal = valorFinal;
    float *mediaAtualizada;
    mediaAtualizada = &media;
    *mediaAtualizada = *mediaAtualizada*1.1;

    //mostra a lista antes da alteração

    printf("===================================\n               ANTES               \n===================================\n\n\n");           
    for(int i = 0;i < tamanho; i++){
        printf("PRODUTO %d: %.2f\n", i+1 ,*(vetor+i)); // mostra o numero do produto atual e o peso

        // comando If que verifica se o peso do produto está acima da média*1.1, 
        //se ele estiver o valor do peso será multiplicado por 0.95 e será guardado no *pValorFinal+1
        // caso o peso nao seja maior, o valor é guardado na mesma variável, porém, sem alteração

        if(*(vetor+i) > *mediaAtualizada){ 
            *(pValorFinal+i) = (*(vetor+i))*0.95; 
        }
        else{
            *(pValorFinal+i) = *(vetor+i);
        }
    }

    printf("\n\nmedia: %.2f\n\n", media); // mostra o valor da media

    // exibe a lista depois das alterações

    printf("===================================\n               DEPOIS               \n===================================\n\n\n");


    //for para exibir a lista inteira 
    for(int i = 0;i < tamanho; i++){
        printf("PRODUTO %d: %.2f\n",i+1 ,*(pValorFinal+i));
    }


};

int main (){

    float pesoProdutos[10] = { 0 }; //define a quantidade de produtos, e o valor que por enquanto não esxiste

    lerPesoProdutos(pesoProdutos, tamanho); //chama o void lerPesoProdutos
    processarCarga(pesoProdutos, tamanho); //chama o void processarCarga

    return 0;
}
#include <stdio.h>

int main(){

    float vetor[10];
    float media, maior, menor, soma;

    for(int i=0;i<10;i++){
        scanf("%f",&vetor[i]);
        if(i == 0 || vetor[i] < menor){
            menor = vetor[i];
        }
        else if(i == 0 || vetor[i] > maior){
            maior = vetor[i];
        }
        soma += vetor[i];
    }

    media = soma/10;

    //media
    //maior e menor valor
    //soma dos valores acima da media 

    soma = 0;

    for(int i=0; i<10;i++){

        if(vetor[i] > media){
            soma += vetor[i];
        }
    }

    printf("a media do vetor e: %.2f\no maior valor e: %.2f\no menor valor e: %.2f\na soma dos valores acima da media e: %.2f" ,media, maior, menor, soma);

    return 0;

}
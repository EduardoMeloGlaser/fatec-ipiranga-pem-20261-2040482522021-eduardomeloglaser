#include <stdio.h>

#define N 8

int main(){

    int vetor[N], vetorInverso[N];
    int maior, menor, indiceMaior, indiceMenor, par=0, impar=0, j = 7, procurar, encontrado = 0;
    for(int i = 0; i< N; i++){
        scanf("%d" ,&vetor[i]);
        if(i == 0){
            menor = vetor[i];
            indiceMenor = i;
            maior = vetor[i];
            indiceMaior = i;
        }
        else if(vetor[i] < menor){
            menor = vetor[i];
            indiceMenor = i;
        }
        else if( vetor[i] > maior){
            maior = vetor[i];
            indiceMaior = i;
        }
        if(vetor[i]%2 == 0){
            par++;
        }
        else{
            impar++;
        }
        vetorInverso[j] = vetor[i];
        j--;
    }
    printf("\n\nvetor: \n", par, impar);
    for(int i = 0; i< N; i++){
        printf("%d " ,vetor[i]);
    }
    printf("\n\nmaior numero: %d\nindice: %d" ,maior,indiceMaior);
    printf("\n\nmenor numero: %d\nindice: %d" ,menor,indiceMenor);
    printf("\n\n%d pares\n%d impares", par, impar);
    printf("\n\nvetor Inverso: \n", par, impar);
    for(int i = 0; i< N; i++){
        printf("%d " ,vetorInverso[i]);
    }

    printf("\n\ndigite um valor que esta no vetor: ");
    scanf("%d" ,&procurar);
    for(int i = 0; i <8 && encontrado == 0; i++){
        if(vetor[i] == procurar){
            printf("\n\nvalor encontrado, indice: %d" ,i);
            encontrado++;
        }
    }
    if(encontrado == 0){
        printf("\n\nvalor nao encontrado");
    }

    return 0;
}
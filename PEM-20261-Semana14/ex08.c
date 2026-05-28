///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza diversas operações com vetores       *
//*inteiros utilizando estruturas de repetição e decisões. *
//*O usuário informa 8 valores inteiros e o programa       *
//*identifica o maior e o menor elemento juntamente com    *
//*seus índices, contabiliza números pares e ímpares,      *
//*gera um vetor inverso e permite a busca de um valor     *
//*específico dentro do vetor original.                    *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

#define N 8

int main(){

    // Vetor principal e vetor inverso
    int vetor[N], vetorInverso[N];

    // Variáveis auxiliares
    int maior, menor;
    int indiceMaior, indiceMenor;
    int par = 0, impar = 0;
    int j = 7;

    // Variáveis utilizadas na busca
    int procurar, encontrado = 0;

    // Leitura dos valores do vetor
    for(int i = 0; i < N; i++){

        scanf("%d" ,&vetor[i]);

        // Inicializa maior e menor com o primeiro valor
        if(i == 0){

            menor = vetor[i];
            indiceMenor = i;

            maior = vetor[i];
            indiceMaior = i;
        }

        // Verifica o menor valor
        else if(vetor[i] < menor){

            menor = vetor[i];
            indiceMenor = i;
        }

        // Verifica o maior valor
        else if(vetor[i] > maior){

            maior = vetor[i];
            indiceMaior = i;
        }

        // Conta quantidade de números pares
        if(vetor[i] % 2 == 0){

            par++;
        }

        // Conta quantidade de números ímpares
        else{

            impar++;
        }

        // Preenche o vetor inverso
        vetorInverso[j] = vetor[i];

        j--;
    }

    // Exibe o vetor original
    printf("\n\nvetor: \n");

    for(int i = 0; i < N; i++){

        printf("%d " ,vetor[i]);
    }

    // Exibe maior valor e seu índice
    printf("\n\nmaior numero: %d\nindice: %d",
           maior, indiceMaior);

    // Exibe menor valor e seu índice
    printf("\n\nmenor numero: %d\nindice: %d",
           menor, indiceMenor);

    // Exibe quantidade de pares e ímpares
    printf("\n\n%d pares\n%d impares", par, impar);

    // Exibe o vetor invertido
    printf("\n\nvetor Inverso: \n");

    for(int i = 0; i < N; i++){

        printf("%d " ,vetorInverso[i]);
    }

    // Solicita um valor para busca
    printf("\n\ndigite um valor que esta no vetor: ");

    scanf("%d" ,&procurar);

    // Procura o valor no vetor
    for(int i = 0; i < 8 && encontrado == 0; i++){

        if(vetor[i] == procurar){

            printf("\n\nvalor encontrado, indice: %d" ,i);

            encontrado++;
        }
    }

    // Caso o valor não exista no vetor
    if(encontrado == 0){

        printf("\n\nvalor nao encontrado");
    }

    return 0;
}


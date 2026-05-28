
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza conversões de medidas de distância   *
//*utilizando ponteiros e diferentes tipos de variáveis.   *
//*A distância informada pelo usuário é armazenada em      *
//*centímetros e convertida para metros, quilômetros e     *
//*milhas. O código também demonstra o uso de ponteiros    *
//*para acessar e manipular valores armazenados na memória.*
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Variável que armazena a distância em centímetros
    int distanciaMilimetro;

    // Ponteiro apontando para a variável de distância
    int *pDistanciaMilimetro = &distanciaMilimetro;

    // Estrutura de repetição para validar o valor digitado
    do{
        printf("digite uma distancia positiva em centimetro valida(max:2147483647): ");
        scanf("%d" ,pDistanciaMilimetro);

    }while(distanciaMilimetro > 2147483647);

    // Verifica se o número digitado é inválido
    if(*pDistanciaMilimetro <= 0){

        printf("erro, numero invalido, encerrando programa");
    }
    else{

        // Conversão de centímetros para metros
        float distanciaMetro = (*pDistanciaMilimetro)/100;

        // Ponteiro para a variável de metros
        float *pDistanciaMetro = &distanciaMetro;

        // Conversão de metros para quilômetros
        double distanciaKM = (*pDistanciaMetro/1000);

        // Ponteiro para a variável de quilômetros
        double *pDistanciaKM = &distanciaKM;

        // Conversão de quilômetros para milhas
        double distanciaMilhas = (*pDistanciaKM/1.60934);

        // Ponteiro para a variável de milhas
        double *pDistanciaMilha = &distanciaMilhas;

        /*
        Explicação dos tipos utilizados:

        int:
        Utilizado para armazenar valores inteiros da distância
        em centímetros.

        float:
        Utilizado para armazenar valores decimais com menor
        precisão durante a conversão para metros.

        double:
        Utilizado nas conversões finais para quilômetros e
        milhas, pois oferece maior precisão para valores
        decimais.

        Ponteiros:
        Foram utilizados para acessar os valores armazenados
        nas variáveis através de seus endereços de memória.
        */

        // Exibição das conversões realizadas
        printf("milimetro: %d\nmetro: %f\nquilometro: %lf\nmilha: %lf",
               *pDistanciaMilimetro,
               *pDistanciaMetro,
               *pDistanciaKM,
               *pDistanciaMilha);
    }

    return 0;
}


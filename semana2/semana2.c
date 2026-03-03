//Eduardo Melo Glaser
//Fatec - PEM - Vespertino
//criar um programa que conta a quantidade de palavras digitadas pelo usuario
//20/02/2026

#include <stdio.h>
#include <string.h>

int main(){

    int i, contadorPalavras = 0;
    char frase[50]; 

    fgets(frase, 50, stdin);

    for(i=0; frase[i] != '\0' ; i++){

        if(frase[i-1] == ' ' && frase[i] != ' '){
            contadorPalavras++;

        }

    }
    printf("a quantidade de palavras que tem na frase digitada e de: %d " ,contadorPalavras);
    return 0;
}
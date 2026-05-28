
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza operações com strings utilizando     *
//*funções implementadas em biblioteca externa. O código   *
//*conta a quantidade de vogais presentes em palavras,     *
//*inverte strings diretamente na memória e verifica se uma*
//*palavra é um palíndromo. As funções são chamadas a      *
//*partir do arquivo de cabeçalho "ex13f.h" e os resultados*
//*são exibidos na tela para diferentes exemplos de teste. *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>
#include "ex13f.h"

int main(){

   
    // TESTE DA FUNCAO CONTA VOGAIS
    

    char palavra[8] = "palavra";
    char arara[6] = "arara";

    // Conta vogais da palavra "palavra"
    printf("\n\nEX 1 CONT VOGAIS 'PALAVRA': ");

    printf("%d", contaVogais(palavra));

    // Conta vogais da palavra "arara"
    printf("\n\nEX 2 CONT VOGAIS 'ARARA': ");

    printf("%d", contaVogais(arara));

   
    // TESTE DA FUNCAO INVERTER STRING
   

    char caneta[7] = "caneta";
    char obrigado[9] = "obrigado";

    // Inverte a string "caneta"
    printf("\n\nEX 1 INVERTER STRING 'CANETA': ");

    inverteCString(caneta);

    // Exibe a string invertida
    for(int i = 0; i < 6; i++){

        printf("%c", caneta[i]);
    }

    // Inverte a string "obrigado"
    printf("\n\nEX 2 INVERTER STRING 'OBRIGADO': ");

    inverteCString(obrigado);

    // Exibe a string invertida
    for(int i = 0; i < 8; i++){

        printf("%c", obrigado[i]);
    }

    
    // TESTE DA FUNCAO PALINDROMO
  

    char ovo[4] = "ovo";
    char controle[9] = "controle";

    // Verifica se "ovo" é palíndromo
    printf("\n\nEX 1 PALINDROMO 'OVO': ");

    printf("%d", ePalindromo(ovo));

    // Verifica se "controle" é palíndromo
    printf("\n\nEX 2 PALINDROMO 'CONTROLE':");

    printf("%d", ePalindromo(controle));

    return 0;
}

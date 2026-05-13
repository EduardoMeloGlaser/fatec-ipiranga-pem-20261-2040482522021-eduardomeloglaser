///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//* Responsável pela interface do programa com o usuário.  *
//Exibe o menu de opções, recebe os dados digitados e chama*
//as funções adequadas conforme a escolha do usuário.      * 
//* Data - 11/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/


#include <stdio.h>
#include "recursao.h"
#include "interface.h"

// Função responsável por exibir o menu
// e chamar as funções escolhidas pelo usuário
void interface(){

    // Variável que armazena a escolha do usuário
    int escolha; 

    // Exibe o menu de opções
    printf("escolha umas dessas funcoes:\n\n1-converter para binario(ex 10: 1010)\n2-fazer potencia de 2 numeros(ex 10, 2: 100)\n3-somar digitos(ex: 123 = 6)\n\n");

    // Lê a opção escolhida
    scan(&escolha);
    
    // Estrutura de decisão para cada opção
    switch(escolha){

        // Opção 1: converter decimal para binário
        case 1:{

            // Variável para armazenar o número digitado
            int numeroBinario;

            // Solicita o número ao usuário
            printf("escolha um numero para ser convertido para binario: ");

            // Lê o número
            scan(&numeroBinario);

            // Exibe mensagem de resultado
            printf("o resultado do numero %d em binario e: ", numeroBinario);

            // Chama a função de conversão
            decToBin(numeroBinario);

            break;
        }

        // Opção 2: calcular potência
        case 2:{

            // Variáveis para base e expoente
            int n, expoente;

            // Solicita os valores ao usuário
            printf("escolha respectivamente um numero e um expoente: ");

            // Lê a base
            scan(&n);

            // Lê o expoente
            scan(&expoente);

            // Exibe o resultado da potência
            printf("o numero %d elevado a %d e igual a: %d",
                   n, expoente, potencia(n,expoente));

            break;
        }

        // Opção 3: somar os dígitos de um número
        case 3:{

            // Variável para armazenar o número
            int numeroSoma;

            // Solicita o número ao usuário
            printf("escolha um numero para os digitos serem somados: ");

            // Lê o número
            scan(&numeroSoma);

            // Exibe o resultado da soma dos dígitos
            printf("a soma do numero dado e igual a: %d",
                   somaDigitos(numeroSoma));

            break;
        }

        // Caso o usuário digite uma opção inválida
        default:

            // Exibe mensagem de erro
            printf("escolha um valor valido: ");

            // Lê novamente a escolha
            scan(&escolha); 

            break;
    }

    return;
}
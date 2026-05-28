
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa implementa diferentes funções matemáticas    *
//*utilizando recursão, ponteiros e estruturas de decisão. *
//*Entre as operações disponíveis estão o cálculo do       *
//*máximo divisor comum, potência inteira, verificação de  *
//*números primos e conversão de números decimais para     *
//*binário. O usuário interage com um menu de opções que   *
//*permite selecionar a funcionalidade desejada.           *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>


// FUNCAO MAXIMO DIVISOR COMUM


/*
algoritmo de Euclides:

MDC(a,b):

se a % b == 0:
    retorno = b

senão:
    MDC(b, a%b)
*/

int maximoDivisorComum(int n1, int n2){

    // Caso recursivo
    if(n1 % n2 != 0){

        return maximoDivisorComum(n2, n1 % n2);
    }

    // Caso base
    else{

        return n2;
    }
};


// FUNCAO POTENCIA INTEIRA


int potenciaInteira(int base, int expoente){ 

    // Caso base
    if(expoente == 1){

        return base;
    }

    // Chamada recursiva
    return base * potenciaInteira(base, --expoente);
};


// FUNCAO VERIFICAR NUMERO PRIMO


/*
Número primo:
possui apenas dois divisores:
1 e ele mesmo.
*/

int verificadorNumeroPrimo(int n){

    int encontrar = 0; 

    // Procura divisores além de 1 e do próprio número
    for(int i = n/2; i > 1; i--){

        if(n % i == 0){

            encontrar = 1;
        }
    }

    return encontrar;
};


// FUNCAO CONVERSAO DECIMAL/BINARIO


int conversaoDecimalBinario(int n){
    
    /*
    A recursão divide sucessivamente o número por 2.
    Os restos são exibidos na volta da pilha de chamadas.
    */

    // Caso base
    if(n == 1){

        printf("1");

        return 1;
    }

    // Chamada recursiva
    conversaoDecimalBinario(n/2); 

    // Exibe o resto da divisão
    printf("%d", n % 2);
};


// FUNCAO AUXILIAR DE LEITURA


void scan(int *p){

    scanf("%d" ,p);

    return;
}


// FUNCAO PRINCIPAL

int main(){

    // Variáveis principais
    int n, n2, escolha;
    int expoente;

    // Ponteiros auxiliares
    int *pN = &n;
    int *pEscolha = &escolha;
    int *pExpoente = &expoente;
    int *pN2 = &n2;


    // MENU PRINCIPAL
    do{

        printf("\n\nESCOLHA UMA OPCAO PARA PROSSEGUIR:\n\n"
               "1-Maximo divisor comum\n"
               "2-Potencia\n"
               "3-Verificar se e primo\n"
               "4-Converter para binario\n"
               "5-Sair\n\n");

        // Leitura da opção escolhida
        scan(pEscolha);

        switch(escolha){


            // MAXIMO DIVISOR COMUM


            case 1: 

                printf("\ndigite o numerador e o denominador: ");

                scan(pN);
                scan(pN2);

                printf("maximo divisor comum: %d",
                       maximoDivisorComum(n, n2));

                break;

            // POTENCIA
            case 2:

                printf("\ndigite respectivamente o numero e o expoente: ");

                scan(pN);
                scan(pExpoente);

                printf("potencia de %d elevado a %d: %d",
                       n,
                       expoente,
                       potenciaInteira(n, expoente));

                break;


            // VERIFICAR NUMERO PRIMO
            case 3:

                printf("\ndigite o numero para verificar se ele e primo: ");

                scan(pN);

                /*
                encontrar == 0:
                número primo

                encontrar == 1:
                número não primo
                */

                if(verificadorNumeroPrimo(n) == 0){

                    printf("\no numero e primo");
                }
                else{

                    printf("\no numero nao e primo");
                }

                break;

            
            // CONVERSAO BINARIA
            case 4:

                printf("\ndigite um numero para ele ser convertido em binario: ");

                scan(pN);

                conversaoDecimalBinario(n);

                break;

          
            // ENCERRAR PROGRAMA
            case 5:

                printf("\nprograma encerrado");

                break;

           
            // OPCAO INVALIDA
            default:

                printf("\nescolha um numero valido");

                break;
        }

    }while(escolha != 5);

    return 0;
}


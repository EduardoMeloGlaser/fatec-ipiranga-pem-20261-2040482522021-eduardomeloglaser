
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa exibe a tabuada dos números de 1 a 10        *
//*utilizando estruturas de repetição e controle de fluxo. *
//*Após apresentar cada tabuada, o usuário pode escolher   *
//*continuar ou encerrar a execução do programa. O código  *
//*também realiza validação da entrada de caracteres para  *
//*garantir respostas válidas durante a interação.         *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Variável de controle da tabuada
    int i, j = 1;

    // Variável utilizada para decidir se o programa continua
    char escolha = 'S';

    // Estrutura principal do programa
    do{

        // Percorre as tabuadas de 1 até 10
        for(i = 1; i < 11 && escolha == 'S' && escolha != 'N'; i++){

            printf("TABUADA DO NUMERO %d\n\n" ,i);

            // Exibe a multiplicação de 1 até 10
            while(j < 11){

                printf("%d: %d\n", j, i*j);

                j++;
            }

            // Pergunta ao usuário se deseja continuar
            printf("\n\nquer continuar?(digite 'S' para sim e 'N' para nao)\n");

            scanf(" %c" ,&escolha);

            // Validação da entrada do usuário
            while(escolha != 'S' && escolha != 'N'){

                printf("\ndigite um valor valido\n");

                scanf(" %c" ,&escolha);
            }

            // Reinicia o contador da tabuada
            j = 1;
        }

    }while(escolha != 'N');

    return 0;
}



///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza o cálculo da média ponderada de um   *
//*aluno utilizando vetores, ponteiros e entrada de dados. *
//*As notas e seus respectivos pesos são armazenados em    *
//*arrays e acessados por meio de ponteiros. Após a leitura*
//*dos valores, o programa calcula a média ponderada do    *
//*aluno e exibe o resultado final. Também são mostrados   *
//*os tamanhos em bytes das variáveis utilizadas no código.*
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Vetor para armazenar as 3 notas do aluno
    double nota[3] = { 0 };

    // Vetor para armazenar os pesos das notas
    int peso[3] = { 0 };

    // Ponteiro apontando para o vetor de notas
    double *pNota = nota;

    // Ponteiro apontando para o vetor de pesos
    int *pPeso = peso;

    printf("digite as 3 notas do aluno: ");

    // Leitura das notas utilizando ponteiros
    for(int i=0; i<3; i++){
        scanf("%lf" ,pNota + i);
    }

    printf("\ndigite respectivamente o peso das 3 notas: ");

    // Leitura dos pesos utilizando ponteiros
    for(int i=0; i<3; i++){
        scanf("%d" ,pPeso + i);
    }

    // Cálculo da média ponderada
    double media = ((nota[0]*peso[0])+(nota[1]*peso[1])+(nota[2]*peso[2]))/(peso[0]+peso[1]+peso[2]);

    // Exibição da média final
    printf("\na media do aluno foi: %.2lf", media);

    // Exibição do tamanho em bytes das variáveis
    printf("\ntamanho em bytes:\n\nnota: %zu bytes\npeso: %zu bytes\nmedia: %zu bytes",
           sizeof(nota), sizeof(peso), sizeof(media));

    return 0;
}


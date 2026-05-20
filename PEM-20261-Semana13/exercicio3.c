/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra como trocar os valores de duas     *
//variáveis utilizando ponteiros em C. A função trocar     *
//recebe os endereços das variáveis e altera diretamente   *
//seus valores na memória, realizando a troca entre eles.  *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>

// Função responsável por trocar os valores
// de duas variáveis utilizando ponteiros
void trocar(int *a, int *b){

    // Armazena temporariamente o valor apontado por a
    int reserva = *a;

    // Copia o valor de b para a
    *a = *b;

    // Coloca o valor armazenado em reserva em b
    *b = reserva;

    return;
}

int main(){

    // Declaração das variáveis
    int a = 10, b = 20;

    // Exibe os valores antes da troca
    printf("ANTES DA TROCA\n\na = %d\nb = %d\n\n\n", a,b);

    // Passa os endereços das variáveis para a função
    trocar(&a,&b);

    // Exibe os valores após a troca
    printf("DEPOIS DA TROCA\n\na = %d\nb = %d" ,a ,b);

    return 0;
}
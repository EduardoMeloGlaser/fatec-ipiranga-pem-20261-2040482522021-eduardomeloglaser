/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra como estruturas (struct) são       *
//organizadas na memória em C. Ele cria uma estrutura do   *
//tipo Aluno, mostra os endereços de memória de seus campos* 
//e calcula a distância, em bytes, entre eles, permitindo  *
//observar como os dados são armazenados internamente.     *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno{

    // Vetor de caracteres para armazenar o nome
    char nome[50];

    // Número de matrícula do aluno
    int matricula;

    // Média do aluno
    float media;

};

int main(){

    // Declaração de uma variável do tipo struct Aluno
    struct Aluno dados;

    // Copia a string "Eduardo" para o campo nome
    strcpy(dados.nome, "Eduardo");

    // Atribui valores aos demais campos da struct
    dados.matricula = 12341234;
    dados.media = 7.5;

    // Exibe os endereços de memória dos campos da struct
    printf("ENDERECOS\n\nnome: %p\nmatricula: %p\nmedia: %p",
           &dados.nome, &dados.matricula, &dados.media);

    // Calcula a distância em bytes entre os campos da estrutura
    // O cast para char* permite a subtração byte a byte

    printf("\n\n\nDISTANCIA ENDERECO\n\ndistancia entre nome e n matricula: %td",
           (char*)&dados.matricula - (char*)&dados.nome);

    printf("\n\ndistancia entre matricula e media: %td",
           (char*)&dados.media - (char*)&dados.matricula);

    return 0;

}
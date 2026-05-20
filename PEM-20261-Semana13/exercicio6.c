/*

///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa demonstra como acessar e modificar os campos *
//de uma estrutura utilizando ponteiros em C. Ele apresenta*
//duas formas de acesso: usando a sintaxe (*ponteiro).campo*
//e utilizando o operador ->, que simplifica o acesso aos  *
//membros da struct através de ponteiros.                  *
//* Data - 20/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

*/

#include <stdio.h>
#include <string.h>

// Definição da estrutura Produtos
struct Produtos{

    // Nome do produto
    char nome[40];

    // Preço do produto
    float preco;

    // Quantidade em estoque
    int estoque;
};

int main(){

    // Declaração de uma variável da struct
    struct Produtos detalhes;

    // Ponteiro apontando para a struct detalhes
    struct Produtos *p = &detalhes;


    // Código utilizando (*ponteiro)


    // Copia uma string para o campo nome
    strcpy((*p).nome, "Edvaldo");

    // Atribui valores aos campos da struct
    (*p).preco = 67.99;
    (*p).estoque = 67;

    // Exibe os dados armazenados
    printf("EXEMPLO 1 *\n\nnome: %s\npreco: %.2f\nestoque: %d",
           (*p).nome, (*p).preco, (*p).estoque);

  
    // Código utilizando ->
  

    // Acesso simplificado aos campos da struct
    strcpy(p->nome, "Edenilson");
    p->estoque = 10;
    p->preco = 25.50;

    // Exibe os novos dados armazenados
    printf("\n\n\nEXEMPLO 2 ->\n\nnome: %s\npreco: %.2f\nestoque: %d",
           p->nome, p->preco, p->estoque);

    return 0;
}
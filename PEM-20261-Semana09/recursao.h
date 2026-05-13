///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//* Arquivo de cabeçalho que contém os protótipos das      *
//funções presentes em recursao.c. Seu objetivo é permitir *
//que outros arquivos utilizem essas funções sem precisar  *
//reescrever suas definições.                              * 
//* Data - 11/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/


// Evita que o arquivo seja incluído mais de uma vez
#ifndef RECURSAO_H
#define RECURSAO_H

// função que converte um número decimal para binário
void decToBin(int numero);

// função que calcula potência usando recursão
int potencia(int base, int exp);

//função que soma dígitos de um número
int somaDigitos(int n);

//função que lê um número inteiro usando ponteiro
void scan(int *n);

// Finaliza a diretiva de proteção
#endif
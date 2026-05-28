
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O arquivo de cabeçalho define os protótipos das funções *
//*responsáveis pela manipulação de strings utilizadas no  *
//*programa principal. As funções permitem contar vogais,  *
//*inverter caracteres de uma string e verificar se uma    *
//*palavra é um palíndromo. O uso das diretivas de         *
//*pré-processamento evita múltiplas inclusões do arquivo. *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#ifndef EX13F_H
#define EX31F_H


// PROTOTIPO DA FUNCAO CONTA VOGAIS
int contaVogais(char *s);


// PROTOTIPO DA FUNCAO INVERTER STRING
void inverteCString(char *s);

// PROTOTIPO DA FUNCAO VERIFICAR PALINDROMO
int ePalindromo(char *s);

#endif


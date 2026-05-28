
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa implementa a resolução do problema da Torre  *
//*de Hanói utilizando recursão. O usuário informa a       *
//*quantidade de discos e o algoritmo realiza os movimentos*
//*necessários para transferir todos os discos da torre de *
//*origem para a torre de destino, respeitando as regras do*
//*problema. O programa também contabiliza a quantidade de *
//*movimentos realizados e compara o resultado com a       *
//*fórmula matemática da Torre de Hanói.                   *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>
#include <math.h>

// Variável global utilizada para contar movimentos
int movimentos = 0;

// ======================================
// FUNCAO TORRE DE HANOI
// ======================================

void hanoi(int n, char origem, char destino, char auxiliar){

    /*
    Regras da Torre de Hanói:

    - Apenas um disco pode ser movido por vez
    - Um disco maior nunca pode ficar sobre um menor
    - Todos os discos devem ser movidos para a torre destino
    */

    // ==========================
    // CASO BASE
    // ==========================

    if(n == 1){

        printf("Mova disco 1 de [%c] para [%c]\n",
               origem,
               destino);

        movimentos++;

        return;
    }

    // ==========================
    // PASSO RECURSIVO 1
    // ==========================

    /*
    Move n-1 discos da torre origem
    para a torre auxiliar.
    */

    hanoi(n - 1, origem, auxiliar, destino);

    // ==========================
    // MOVE O MAIOR DISCO
    // ==========================

    printf("Mova disco %d de [%c] para [%c]\n",
           n,
           origem,
           destino);

    movimentos++;

    // ==========================
    // PASSO RECURSIVO 2
    // ==========================

    /*
    Move os n-1 discos da torre auxiliar
    para a torre destino.
    */

    hanoi(n - 1, auxiliar, destino, origem);
}

// ======================================
// FUNCAO PRINCIPAL
// ======================================

int main(){

    // Quantidade de discos
    int n;

    // Torres utilizadas
    char origem = 'A';
    char destino = 'B';
    char auxiliar = 'C';

    // ==========================
    // VALIDACAO DE ENTRADA
    // ==========================

    do{

        printf("digite um numero entre 1 e 10: ");

        scanf("%d", &n);

    }while(n < 1 || n > 10);

    // Executa o algoritmo da Torre de Hanói
    hanoi(n, origem, destino, auxiliar);

    // Exibe quantidade total de movimentos
    printf("\nTotal de movimentos: %d\n", movimentos);

    /*
    Fórmula matemática da Torre de Hanói:

    movimentos = 2^n - 1
    */

    printf("\nFormula 2^n - 1 = %.0lf\n",
           pow(2, n) - 1);

    return 0;
}


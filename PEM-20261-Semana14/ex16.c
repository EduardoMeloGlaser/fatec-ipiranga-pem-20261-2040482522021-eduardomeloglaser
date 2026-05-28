
///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa implementa algoritmos recursivos para busca  *
//*e soma de elementos em vetores inteiros. A função       *
//*buscaRec realiza uma busca linear recursiva retornando  *
//*o índice do elemento procurado, enquanto a função       *
//*somaRec calcula a soma dos elementos utilizando divisão *
//*sucessiva do vetor. O código também monitora métricas de*
//*recursão, como quantidade de chamadas e profundidade    *
//*máxima atingida durante a execução das funções.         *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>
#include <stdlib.h>

// VARIAVEIS GLOBAIS DE CONTROLE


/*
Essas variáveis armazenam:

- quantidade de chamadas recursivas
- profundidade atual da pilha
- profundidade máxima atingida
*/

// Métricas da busca recursiva
int chamadas_busca = 0;
int prof_atual_busca = 0;
int prof_max_busca = 0;

// Métricas da soma recursiva
int chamadas_soma = 0;
int prof_atual_soma = 0;
int prof_max_soma = 0;


// FUNCAO DE BUSCA RECURSIVA


int buscaRec(int *v, int n, int chave) {

    // Conta chamada recursiva
    chamadas_busca++;

    // Atualiza profundidade atual
    prof_atual_busca++;

    // Atualiza profundidade máxima
    if(prof_atual_busca > prof_max_busca){

        prof_max_busca = prof_atual_busca;
    }

    // CASO BASE:
    // vetor terminou

    if(n <= 0){

        prof_atual_busca--;

        return -1;
    }


    // CASO BASE:
    // encontrou elemento


    if(v[0] == chave){

        prof_atual_busca--;

        return 0;
    }


    // PASSO RECURSIVO


    /*
    Avança para o próximo elemento:

    v + 1  -> próximo endereço
    n - 1  -> reduz tamanho restante
    */

    int resultado = buscaRec(v + 1, n - 1, chave);

    // Retorna da pilha recursiva
    prof_atual_busca--;

    // Ajusta índice durante retorno
    if(resultado != -1){

        return resultado + 1;
    }

    return -1;
}


// FUNCAO DE SOMA RECURSIVA


int somaRec(int *v, int ini, int fim) {

    // Conta chamadas recursivas
    chamadas_soma++;

    // Atualiza profundidade atual
    prof_atual_soma++;

    // Atualiza profundidade máxima
    if(prof_atual_soma > prof_max_soma){

        prof_max_soma = prof_atual_soma;
    }


    // CASO BASE


    /*
    Quando resta apenas um elemento,
    retorna o valor diretamente.
    */

    if(ini == fim){

        prof_atual_soma--;

        return v[ini];
    }


    // PASSO RECURSIVO


    /*
    Divide o vetor ao meio:

    esquerda -> ini até meio
    direita  -> meio+1 até fim
    */

    int meio = (ini + fim) / 2;

    // Soma lado esquerdo
    int soma_esq = somaRec(v, ini, meio);

    // Soma lado direito
    int soma_dir = somaRec(v, meio + 1, fim);

    // Retorno da pilha recursiva
    prof_atual_soma--;

    // Soma resultados das duas partes
    return soma_esq + soma_dir;
}

// FUNCAO PRINCIPAL


int main() {

    // Vetor com 12 posições
    int vetor[12];

    // Variáveis auxiliares
    int chave, indice;


    // GERACAO DO VETOR


    printf("Vetor: ");

    for(int i = 0; i < 12; i++) {

        // Gera números aleatórios entre 0 e 9
        vetor[i] = rand() % 10;

        printf("%d ", vetor[i]);
    }

    printf("\n\n");


    // SOMA RECURSIVA


    int soma_total = somaRec(vetor, 0, 11);

    printf("Soma total: %d\n", soma_total);

    printf("Chamadas na soma: %d\n", chamadas_soma);

    printf("Profundidade maxima na soma: %d\n\n",
           prof_max_soma);

   
    // BUSCA RECURSIVA
  

    printf("Digite um valor para buscar: ");

    scanf("%d", &chave);

    indice = buscaRec(vetor, 12, chave);

  
    // RESULTADOS DA BUSCA
  

    printf("\nIndice encontrado: %d\n", indice);

    printf("Chamadas na busca: %d\n", chamadas_busca);

    printf("Profundidade maxima na busca: %d\n",
           prof_max_busca);

    return 0;
}


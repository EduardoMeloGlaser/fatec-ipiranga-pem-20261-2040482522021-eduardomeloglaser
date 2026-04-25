//----------------------------------------------------------
//*                      FATEC Ipiranga                    *
//* Disciplina: Programaçao Estruturada e Modular         *
//*          Prof. Veríssimo                              *
//-----------------------------------------------------------
//* Objetivo do Programa: Busca em profundidade           *
//*                (Interativa)                           *
//----------------------------------------------------------/
#include <stdio.h>
#include <string.h>
#include <time.h>

clock_t t;

#define MAX_PASTAS 50
#define LIMITE_ALERTA 300.0

int ciclos = 0;
int chamadas = 0;

typedef struct {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    int subpastas_indices[10];
    int qtd_sub;
} Pasta;

Pasta drive[MAX_PASTAS];

// Função interativa
float processarHierarquia(int index, int nivel_atual, int limite_profundidade) {

    chamadas++;

    int pilha[MAX_PASTAS];
    int nivel[MAX_PASTAS];
    int visitado[MAX_PASTAS] = {0};
    int topo = -1;

    ciclos++;
    pilha[++topo] = index;
    nivel[topo] = nivel_atual;

    while (topo >= 0) {

        ciclos++;

        index = pilha[topo];
        nivel_atual = nivel[topo];

        if (index == -1 || nivel_atual > limite_profundidade) {
            ciclos++;
            topo--;
            continue;
        }

        if (visitado[topo] == 0) {

            ciclos++;

            visitado[topo] = 1;
            drive[index].tamanho_total = drive[index].tamanho_proprio;

            for (int i = drive[index].qtd_sub - 1; i >= 0; i--) {

                ciclos++;

                topo++;
                pilha[topo] = drive[index].subpastas_indices[i];
                nivel[topo] = nivel_atual + 1;
                visitado[topo] = 0;
            }
        }
        else {

            ciclos++;

            topo--;

            if (topo >= 0) {
                ciclos++;
                drive[pilha[topo]].tamanho_total += drive[index].tamanho_total;
            }

            for (int i = 0; i < nivel_atual; i++) {
                ciclos++;
                printf("  ");
            }

            ciclos++;
            printf("|-- %s [%.2f GB]", drive[index].nome, drive[index].tamanho_total);

            if (drive[index].tamanho_total > LIMITE_ALERTA) {
                ciclos++;
                printf(" [!] ALERTA: GARGALO DETECTADO");
            }

            ciclos++;
            printf("\n");
        }
    }

    return drive[0].tamanho_total;
}

int main() {

    strcpy(drive[0].nome, "RAIZ");
    drive[0].tamanho_proprio = 10.0;
    drive[0].qtd_sub = 2;
    drive[0].subpastas_indices[0] = 1;
    drive[0].subpastas_indices[1] = 2;

    strcpy(drive[1].nome, "Projetos_TI");
    drive[1].tamanho_proprio = 50.0;
    drive[1].qtd_sub = 1;
    drive[1].subpastas_indices[0] = 3;

    strcpy(drive[2].nome, "Backups_Antigos");
    drive[2].tamanho_proprio = 350.0;
    drive[2].qtd_sub = 0;

    strcpy(drive[3].nome, "Videos_Aulas");
    drive[3].tamanho_proprio = 280.0;
    drive[3].qtd_sub = 0;

    int limite;

    printf("Defina o limite de profundidade do mergulho: ");
    scanf("%d", &limite);

    t = clock();

    printf("\n--- RELATORIO DE HIERARQUIA INTELIGENTE ---\n");
    processarHierarquia(0, 0, limite);
    printf("-------------------------------------------\n");

    t = clock() - t;

    double tempo_execucao = ((double)t)/CLOCKS_PER_SEC;

    printf("\nTempo de execucao: %f segundos", tempo_execucao);
    printf("\nChamadas da funcao: %d", chamadas);
    printf("\nCiclos processados: %d\n", ciclos);

    return 0;
}
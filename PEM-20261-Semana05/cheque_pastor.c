//Eduardo Melo Glaser
//17/03/2026
//Fatec Ipiranga - ADS - Vespertino
//O objetivo desse código é simular um xeque pastor em um jogo de xadrez, tabuleiro 8 por 8, usando principalmente módulos

#include <stdio.h>
#include <string.h>

char tabuleiro[8][8][5];

void iniciarjogo(char pecas[8][8][5]){

    //define o valor de todos os espaços do tabuleiro

    strcpy(pecas[0][0], "tP1");
    strcpy(pecas[0][1], "cP2");
    strcpy(pecas[0][2], "bP3");
    strcpy(pecas[0][3], "dP4");
    strcpy(pecas[0][4], "rP5");
    strcpy(pecas[0][5], "bP6");
    strcpy(pecas[0][6], "cP7");
    strcpy(pecas[0][7], "tP8");
    strcpy(pecas[1][0], "PP1");
    strcpy(pecas[1][1], "PP2");
    strcpy(pecas[1][2], "PP3");
    strcpy(pecas[1][3], "PP4");
    strcpy(pecas[1][4], "PP5");
    strcpy(pecas[1][5], "PP6");
    strcpy(pecas[1][6], "PP7");
    strcpy(pecas[1][7], "PP8");

    for(int i=2; i<6;i++){
        for(int j=0; j<8;j++){
            strcpy(pecas[i][j], "   ");      
        } 
    }

    strcpy(pecas[7][0], "tB1");
    strcpy(pecas[7][1], "cB2");
    strcpy(pecas[7][2], "bB3");
    strcpy(pecas[7][3], "dB4");
    strcpy(pecas[7][4], "rB5");
    strcpy(pecas[7][5], "bB6");
    strcpy(pecas[7][6], "cB7");
    strcpy(pecas[7][7], "tB8");
    strcpy(pecas[6][0], "PB1");
    strcpy(pecas[6][1], "PB2");
    strcpy(pecas[6][2], "PB3");
    strcpy(pecas[6][3], "PB4");
    strcpy(pecas[6][4], "PB5");
    strcpy(pecas[6][5], "PB6");
    strcpy(pecas[6][6], "PB7");
    strcpy(pecas[6][7], "PB8");
  
    
}

void exibir_tabuleiro(char tabuleiro[8][8][5]){

    //exibe o tabuleiro completo, é chamado após cada jogada e ao iniciar o jogo

    int linhatabuleiro = 8;
    for(int i=0; i<8;i++){
        
        printf("%d" ,linhatabuleiro--);
        
        for(int j=0; j<8;j++){
            printf(" %s " ,tabuleiro[i][j]);   
        } 
        printf("\n");
    }

    printf("\n\n\n\n");
}

void rodadaUm(char t[8][8][5]){

    //peças brancas
    strcpy(t[4][4], t[6][4]);
    strcpy(t[6][4], "...");

    printf("-----------------------------------------------------\n                   rodada1-pecas brancas                       \n-----------------------------------------------------\n--------------Brancas jogam PbE4 --------------\n");
    exibir_tabuleiro(t);

    //peças pretas
    strcpy(t[3][4], t[1][4]);
    strcpy(t[1][4], "...");

    printf("-----------------------------------------------------\n                   rodada1-pecas pretas                        \n-----------------------------------------------------\n--------------Pretas jogam PpE5 --------------\n");
    exibir_tabuleiro(t);
}

void rodadaDois(char t[8][8][5]){

    //rodada peças brancas
    strcpy(t[4][2], t[7][5]);
    strcpy(t[7][5], "...");

    printf("-----------------------------------------------------\n                   rodada2-pecas brancas                       \n-----------------------------------------------------\n--------------Brancas jogam Bbc4 --------------\n");
    exibir_tabuleiro(t);
    
    //rodada peças pretas
    strcpy(t[2][2], t[0][1]);
    strcpy(t[0][1], "...");

    printf("-----------------------------------------------------\n                   rodada2-pecas pretas                        \n-----------------------------------------------------\n--------------Pretas jogam CpC6 --------------\n");
    exibir_tabuleiro(t);

    
}

void rodadaTres(char t[8][8][5]){

    //rodada peças brancas
    strcpy(t[3][7], t[7][3]);
    strcpy(t[7][3], "...");
    
    printf("-----------------------------------------------------\n                   rodada3-pecas brancas                       \n-----------------------------------------------------\n--------------Brancas jogam DbH5 --------------\n");
    exibir_tabuleiro(t);

    //rodada peças pretas
    strcpy(t[2][5], t[0][6]);
    strcpy(t[0][6], "...");
    printf("-----------------------------------------------------\n                   rodada3-pecas pretas                        \n-----------------------------------------------------\n--------------Pretas jogam CpF6 --------------\n");
    exibir_tabuleiro(t);
}

void rodadaQuatro(char t[8][8][5]){

    //rodada peças brancas
    strcpy(t[1][5], t[3][7]);
    strcpy(t[3][7], "...");
    printf("-----------------------------------------------------\n                   rodada4-pecas brancas                       \n-----------------------------------------------------\n--------------Brancas jogam DbF7 xeque mate --------------\n");
    exibir_tabuleiro(t);
    
    
   
}

int main(){

    iniciarjogo(tabuleiro); //define os valores da tabela
    exibir_tabuleiro(tabuleiro); //exibe a tabela
    rodadaUm(tabuleiro); //rodada preto e branco 1
    rodadaDois(tabuleiro); //rodada preto e branco 2
    rodadaTres(tabuleiro); //rodada preto e branco 3
    rodadaQuatro(tabuleiro); //rodada preto e branco 4 e cheque mate

    return 0;
}
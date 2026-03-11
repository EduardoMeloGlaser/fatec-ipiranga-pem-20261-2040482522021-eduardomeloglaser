//Eduardo Melo Glaser
//11/03/2026
//Fatec Ipiranga - ADS - Vespertino
//O objetivo desse código é fazer um jogo da velha em C


#include <stdio.h>
#include <string.h>

//declaração de variáveis 

char vazio = ' ';
char jogoDaVelha[3][3];
int validar = 0;
int contVazio, contGanhouColuna, contGanhouLinha;
int i, j, coordenadaI, coordenadaJ;
int jogador_atualX, jogador_atualO;



int main(){

    // aplica o valor vazio em todos os espaços disponíveis da var. jogoDaVelha

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            jogoDaVelha[i][j] = vazio;
        }
    }

    //looping do while que indica o começo do jogo, só encerra se um dos jogadores
    //cumprirem os requesitos especificados

    do{


        //comando for par mostrar a tabela aos jogadores 
        printf("\n\n\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %c ", jogoDaVelha[i][j]);
                if(j != 2){
                    printf("|");
                }
            }
            if(i != 2){
                printf("\n---+---+---\n");
            }
        }
        printf("\n\n\n");
        printf("\njogador X, digite cordenada(linha,Coluna): "); // pede um valor ao jogador x
        scanf("%d%d" , &coordenadaI, &coordenadaJ);              // recolhe o valor


        //confere se o valor que o jogador digitou é válido, caso não seja o programa solicita
        //uma nova coordenada
        while(jogoDaVelha[coordenadaI-1][coordenadaJ-1] != vazio){
            printf("\ndigite um espaco em branco|valido: ");
            scanf("%d%d" , &coordenadaI, &coordenadaJ); 
        }
        jogoDaVelha[coordenadaI-1][coordenadaJ-1] = 'x'; //aplica o valor X na coordenada digitada
    

        //mostra a tabela novamente, desta vez atualizada com o ultimo valor colocado
        printf("\n\n\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %c ", jogoDaVelha[i][j]);
                if(j != 2){
                    printf("|");
                }
            }
            if(i != 2){
                printf("\n---+---+---\n");
            }
        }
        printf("\n\n\n");


        //verifica se o jogador fez uma linha de x em qualquer direção
        for(i=0;i<3;i++){
            contGanhouLinha = 0;
            contGanhouColuna = 0;
            for(j=0;j<3;j++){
                if(jogoDaVelha[j][i] == 'x'){
                    contGanhouLinha++;
                }
                if(jogoDaVelha[i][j] == 'x'){
                    contGanhouColuna++;
                }
                if(contGanhouLinha == 3 || contGanhouColuna == 3 || jogoDaVelha[0][0] == 'x' && jogoDaVelha[1][1] == 'x' && jogoDaVelha[2][2] == 'x'|| jogoDaVelha[0][2] == 'x' && jogoDaVelha[1][1] == 'x' && jogoDaVelha[2][0] == 'x'){
                    printf("o jogador X ganhou!!");
                    jogador_atualX = 1;
                }

            }
        }
        if( jogador_atualX == 1){
            break;
        }

        //verifica se há espaços vazios disponíveis, caso não haja o jogo empata, o empate é só possível
        //após uma jogada do jogador X, por isso que a verificação do empate não é necessária após uma jogada do 
        //jogador O
        contVazio = 0;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(jogoDaVelha[i][j] != vazio) {
                    contVazio++;
                }
            }
        }
        if(contVazio == 9){
            printf("o jogo empatou!!");
            break;
        }
        

        //rodada do jogador O
        printf("\njogador O, digite cordenada(linha,Coluna): ");
        scanf("%d%d" , &coordenadaI, &coordenadaJ);//escaneia os valores da próxima coordenada

        //verifica se o espaço é válido para o valor ser alterado, caso não seja válido, a coordenada
        //é solicitada novamente
        while(jogoDaVelha[coordenadaI-1][coordenadaJ-1] != vazio){
            printf("\ndigite um espaco em branco|valido: ");
            scanf("%d%d" , &coordenadaI, &coordenadaJ); 
        }
        jogoDaVelha[coordenadaI-1][coordenadaJ-1] = 'o'; //define o valor O no espaço solicitado
        

        //mostra a tabela novamente com os dados atualizados
        printf("\n\n\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %c ", jogoDaVelha[i][j]);
                if(j != 2){
                    printf("|");
                }
            }
            if(i != 2){
                printf("\n---+---+---\n");
            }
        }
        printf("\n\n\n");

        //verifica a situação de vitória do jogador O, caso ele tenha feito uma
        //linha em qualquer direção, o jogo se encerra
        for(i=0;i<3;i++){
            contGanhouLinha = 0;
            contGanhouColuna = 0;
            for(j=0;j<3;j++){
                if(jogoDaVelha[j][i] == 'o'){
                    contGanhouLinha++;
                }
                if(jogoDaVelha[i][j] == 'o'){
                    contGanhouColuna++;
                }
                if(contGanhouLinha == 3 || contGanhouColuna == 3 || jogoDaVelha[0][0] == 'o' && jogoDaVelha[1][1] == 'o' && jogoDaVelha[2][2] == 'o'|| jogoDaVelha[0][2] == 'o' && jogoDaVelha[1][1] == 'o' && jogoDaVelha[2][0] == 'o'){
                    
                    jogador_atualO = 1;
                }

            }
        }
        if(jogador_atualO == 1){
            printf("o jogador O ganhou!!");
        }

        
        
    }while(contVazio != 9 && jogador_atualX == 0 && jogador_atualO == 0); //condição do while

return 0;

}

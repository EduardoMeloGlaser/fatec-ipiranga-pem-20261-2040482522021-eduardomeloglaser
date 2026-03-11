#include <stdio.h>
#include <string.h>

char vazio = ' ';
char jogoDaVelha[3][3];
int validar = 0;
int contVazio;
int i, j, coordenadaI, coordenadaJ;
int vitoriaX, vitoriaO;



int main(){

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            jogoDaVelha[i][j] = vazio;
        }
    }

    do{
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
        printf("\njogador X, digite cordenada(linha,Coluna): ");
        scanf("%d%d" , &coordenadaI, &coordenadaJ);    
        while(jogoDaVelha[coordenadaI-1][coordenadaJ-1] != vazio){
            printf("\ndigite um espaco em branco|valido: ");
            scanf("%d%d" , &coordenadaI, &coordenadaJ); 
        }
        jogoDaVelha[coordenadaI-1][coordenadaJ-1] = 'x';
    
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

        if(jogoDaVelha[0][0] == 'x' && jogoDaVelha[0][1] == 'x' && jogoDaVelha[0][2] == 'x'|| jogoDaVelha[0][0] == 'x' && jogoDaVelha[1][0] == 'x' && jogoDaVelha[2][0] == 'x' || jogoDaVelha[1][0] == 'x' && jogoDaVelha[1][1] == 'x' && jogoDaVelha[1][2] == 'x' || jogoDaVelha[2][0] == 'x' && jogoDaVelha[2][1] == 'x' && jogoDaVelha[2][2] == 'x' || jogoDaVelha[0][1] == 'x' && jogoDaVelha[1][1] == 'x' && jogoDaVelha[2][1] == 'x'|| jogoDaVelha[0][2] == 'x' && jogoDaVelha[1][2] == 'x' && jogoDaVelha[2][2] == 'x' || jogoDaVelha[0][0] == 'x' && jogoDaVelha[1][1] == 'x' && jogoDaVelha[2][2] == 'x'|| jogoDaVelha[0][2] == 'x' && jogoDaVelha[1][1] == 'x' && jogoDaVelha[2][0] == 'x'){
            printf("O jogador X ganhou!!");
            break;
        }

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
        
        printf("\njogador O, digite cordenada(linha,Coluna): ");
        scanf("%d%d" , &coordenadaI, &coordenadaJ);    
        while(jogoDaVelha[coordenadaI-1][coordenadaJ-1] != vazio){
            printf("\ndigite um espaco em branco|valido: ");
            scanf("%d%d" , &coordenadaI, &coordenadaJ); 
        }
        jogoDaVelha[coordenadaI-1][coordenadaJ-1] = 'o';
        
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

        if(jogoDaVelha[0][0] == 'o' && jogoDaVelha[0][1] == 'o' && jogoDaVelha[0][2] == 'o'|| jogoDaVelha[0][0] == 'o' && jogoDaVelha[1][0] == 'o' && jogoDaVelha[2][0] == 'o' || jogoDaVelha[1][0] == 'o' && jogoDaVelha[1][1] == 'o' && jogoDaVelha[1][2] == 'o' || jogoDaVelha[2][0] == 'o' && jogoDaVelha[2][1] == 'o' && jogoDaVelha[2][2] == 'o' || jogoDaVelha[0][1] == 'o' && jogoDaVelha[1][1] == 'o' && jogoDaVelha[2][1] == 'o'|| jogoDaVelha[0][2] == 'o' && jogoDaVelha[1][2] == 'o' && jogoDaVelha[2][2] == 'o' || jogoDaVelha[0][0] == 'o' && jogoDaVelha[1][1] == 'o' && jogoDaVelha[2][2] == 'o'|| jogoDaVelha[0][2] == 'o' && jogoDaVelha[1][1] == 'o' && jogoDaVelha[2][0] == 'o'){
            printf("O jogador O ganhou!!");
            vitoriaO = 1;
        }


        
        
    }while(contVazio != 9 && vitoriaX == 0 && vitoriaO == 0);

return 0;

}

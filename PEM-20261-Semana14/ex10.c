#include <stdio.h>

int main(){

    int matriz[4][4] = {
        {1,1,2,2},
        {3,3,4,4},
        {5,5,6,6},
        {7,7,8,8}
    };
    int diagonalP = 0, diagonalS = 0;
    int simetrica = 1;

    //exibir tabulairo em grade

    for(int i = 0; i< 4; i++){
        for( int j = 0; j<4;j++){
            printf("%2d", matriz[i][j]);
            if(j<3){
                printf("|");
            }
            if(i == j){
                diagonalP += matriz[i][j];
            } 
            else if((i+j) == 3){
                diagonalS += matriz[i][j];
            }
        }
        if(i<3){
            printf("\n--+--+--+--\n");
        }
    }

    // VERIFICAR SE TODOS OS PARES ESTAO EM POSIÇÕES SIMETRICAS EM RELAÇÃO À DIAGONAL PRINCIPAL

    // VERIFICAR SIMETRIA

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            if(matriz[i][j] != matriz[j][i]){
                simetrica = 0;
            }
        }
    }
    

    printf("\n\ndiagonal principal: %d\ndiagonal secundaria: %d", diagonalP, diagonalS);

    if(simetrica){
        printf("\nA matriz e simetrica");
    }
    else{
        printf("\nA matriz nao e simetrica");
    }

    return 0;

}
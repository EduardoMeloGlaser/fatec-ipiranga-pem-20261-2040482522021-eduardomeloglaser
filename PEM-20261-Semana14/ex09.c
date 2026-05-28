#include <stdio.h>

int main(){

    int matriz[3][3];
    int matrizdois[3][3];


    printf("declare os valores da matriz 1:");

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("\n|%d||%d| : ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("declare os valores da matriz 2:");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("\n|%d||%d| : ", i,j);
            scanf("%d", &matrizdois[i][j]);
        }
    }

    int matriztres[3][3] = { 0 };
    int soma;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            soma = 0;
            for(int k = 0; k<3; k++){
                soma += matriz[i][k]*matrizdois[k][j];
            }
            matriztres[i][j] = soma;
        }
    }
    //MOSTRAR MATRIZES

    printf("matriz 1:\n");
    for(int i = 0; i<3; i++){
        printf("\n| ");
        for(int j = 0; j<3; j++){
            printf("%3d |", matriz[i][j]);
        }
    }

    
    printf("\n\nmatriz 2:\n");
    for(int i = 0; i<3; i++){
        printf("\n|");
        for(int j = 0; j<3; j++){
            printf("%3d |", matrizdois[i][j]);
        }
    }

    
    printf("\n\nmatriz 3:\n");
    for(int i = 0; i<3; i++){
        printf("\n| ");
        for(int j = 0; j<3; j++){
            printf("%3d |", matriztres[i][j]);
        }
    }
    return 0;
}
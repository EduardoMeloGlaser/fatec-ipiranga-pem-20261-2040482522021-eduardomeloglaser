#include <stdio.h>

int main(){

    double ladoA, LadoB, LadoC;
    double *pA = &ladoA, *pB = &LadoB, *pC = &LadoC;

    printf("digite os 3 lados: ");
    scanf("%lf%lf%lf" ,pA,pB,pC);

    if(*pA + *pB <= *pC || *pA + *pC <= *pB || *pC + *pB <= *pA ){
        printf("\n\nValores invalidos!!");
    }
    else{
        if(*pA == *pB && *pB == *pC){
            printf("\n\nTriangulo Equilatero");
        }
        else if((*pA == *pB && *pA != *pC) || (*pA == *pC && *pC != *pB) || (*pB == *pC && *pC != *pA)){
            printf("\n\nTriangulo Isoceles");
        }
        else{
            printf("\n\nTriangulo Escaleno");
        }
    }
    double maior, x, y;

    if(*pA >= *pB && *pA >= *pC){
        maior = *pA;
        x = *pB;
        y = *pC;
    }
    else if(*pB >= *pA && *pB >= *pC){
        maior = *pB;
        x = *pA;
        y = *pC;
    }
    else{
        maior = *pC;
        x = *pA;
        y = *pB;
    }

    // =========================
    // CLASSIFICACAO DOS ANGULOS
    // =========================

    if((x*x) + (y*y) == (maior*maior)){
        printf("\nTriangulo Retangulo");
    }
    else if((x*x) + (y*y) < (maior*maior)){
        printf("\nTriangulo Obtusangulo");
    }
    else{
        printf("\nTriangulo Acutangulo");
    }
    return 0;

}
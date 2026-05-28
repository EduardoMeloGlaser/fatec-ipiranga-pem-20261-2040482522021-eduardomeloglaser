///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza a verificação e classificação de um  *
//*triângulo a partir dos valores de seus lados. Utilizando*
//*ponteiros, o código recebe três medidas e verifica se os*
//*valores formam um triângulo válido. Em seguida, o       *
//*programa classifica o triângulo quanto aos lados        *
//*(equilátero, isósceles ou escaleno) e também quanto aos *
//*ângulos (retângulo, obtusângulo ou acutângulo) através  *
//*da relação do Teorema de Pitágoras.                     *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Variáveis que armazenam os lados do triângulo
    double ladoA, LadoB, LadoC;

    // Ponteiros para acessar os lados
    double *pA = &ladoA, *pB = &LadoB, *pC = &LadoC;

    // Entrada dos três lados
    printf("digite os 3 lados: ");
    scanf("%lf%lf%lf" ,pA, pB, pC);

    // Verificação da existência do triângulo
    if(*pA + *pB <= *pC || *pA + *pC <= *pB || *pC + *pB <= *pA ){

        printf("\n\nValores invalidos!!");
    }
    else{

        // Classificação quanto aos lados

        // Todos os lados iguais
        if(*pA == *pB && *pB == *pC){

            printf("\n\nTriangulo Equilatero");
        }

        // Dois lados iguais
        else if((*pA == *pB && *pA != *pC) ||
                (*pA == *pC && *pC != *pB) ||
                (*pB == *pC && *pC != *pA)){

            printf("\n\nTriangulo Isoceles");
        }

        // Todos os lados diferentes
        else{

            printf("\n\nTriangulo Escaleno");
        }
    }

    // Variáveis auxiliares para identificar o maior lado
    double maior, x, y;

    // Descobre qual é o maior lado
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

    /*
    Relação utilizada:

    x² + y² = maior²  -> Triângulo Retângulo
    x² + y² < maior²  -> Triângulo Obtusângulo
    x² + y² > maior²  -> Triângulo Acutângulo
    */

    // Verifica se o triângulo é retângulo
    if((x*x) + (y*y) == (maior*maior)){

        printf("\nTriangulo Retangulo");
    }

    // Verifica se o triângulo é obtusângulo
    else if((x*x) + (y*y) < (maior*maior)){

        printf("\nTriangulo Obtusangulo");
    }

    // Caso contrário, o triângulo é acutângulo
    else{

        printf("\nTriangulo Acutangulo");
    }

    return 0;
}



///---------------------------------------------------------
//*                    FATEC Ipiranga                      *
//* Disciplina: Programaçao Estruturada e Modular          *
//*          Prof. Veríssimo                               *
//----------------------------------------------------------
//*O programa realiza o cálculo do Índice de Massa Corporal*
//*(IMC) utilizando variáveis, ponteiros e estruturas de   *
//*decisão. O usuário informa o peso e a altura, que são   *
//*validados para garantir valores positivos. Após o       *
//*cálculo do IMC, o programa classifica o resultado de    *
//*acordo com as faixas estabelecidas pela tabela de IMC.  *
//* Data - 28/05/2026                                      * 
//* Autor: Eduardo Melo Glaser;2040482522021               *
///--------------------------------------------------------/

#include <stdio.h>

int main(){

    // Variáveis que armazenam peso e altura
    float pesoKG, altura;

    // Ponteiros para acessar as variáveis
    float *pPesoKG = &pesoKG, *pAltura = &altura;

    /*
    Classificação do IMC:

    Abaixo de 18.5     -> Abaixo do peso
    18.5 <= IMC < 25   -> Peso normal
    25.0 <= IMC < 30   -> Sobrepeso
    IMC >= 30          -> Obesidade
    */

    printf("CALCULO DE IMC\n\ndigite seu peso em KG: ");

    // Leitura do peso
    scanf("%f", pPesoKG);

    // Validação do peso
    do{
        printf("digite um valor valido: ");
        scanf("%f", pPesoKG);

    }while(*pPesoKG <= 0);

    printf("\ndigite sua altura em metros: ");

    // Leitura da altura
    scanf("%f", pAltura);

    // Validação da altura
    do{
        printf("digite um valor valido: ");
        scanf("%f", pAltura);

    }while(*pAltura <= 0);

    // Cálculo do IMC
    float IMC = pesoKG/(altura*altura);

    // Estrutura de decisão para classificação do IMC
    if(IMC < 18.5){

        printf("\nIMC = %.2f abaixo do peso", IMC);
    }
    else if(IMC < 25){

        printf("\nIMC = %.2f Peso Normal", IMC);
    }
    else if(IMC < 30){

        printf("\nIMC = %.2f Sobrepeso", IMC);
    }
    else{

        printf("\nIMC = %.2f Obesidade", IMC);
    }
    
    return 0;
}

